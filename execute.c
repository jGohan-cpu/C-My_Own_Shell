#include "shell.h"

/**
 * execute - execute a command
 * @args: array of arguments
 *
 * Return: 0 on success, -1 on failure
 */
int execute(char **args)
{
	pid_t pid;/*process ID*/
	int status;/*process status*/
	int pipefd[2];/*file descriptors for pipe*/
	int out;
	char buffer[4096];/*Declare the buffer variable here and specify a size*/

	if (args[0] == NULL)
		return (1);

	/*if the first argument is "exit" return -1 end exit the shell*/
	if (strcmp(args[0], "exit") == 0)
		return	(-1);

	if (pipe(pipefd) == -1)
	{
		perror("Pipe error");
		return (-1);
	}

	pid = fork();/*create a new process*/
	if (pid == -1)/*check for errors in creating new process*/
	{
		perror("Fork error");
		return (-1);
	}
	if (pid == 0)/*if in the child process*/
	{
		if (execvp(args[0], args) == -1)/*execute the command*/
		{
			close(pipefd[0]);
			dup2(pipefd[1], STDOUT_FILENO);
			close(pipefd[1]);

			/*print error message if command not found*/
			printf("%s:command not found\n", args[0]);
			exit(EXIT_FAILURE);/*exit child process if command execution fails*/
		}
	}
	else/*if in the parent process*/
	{
		close(pipefd[1]);
		out = read(pipefd[0], buffer, sizeof(buffer) - 1);
		buffer[out - 1] = '\0';/*Remove the last newline character*/
		printf("%s", buffer);
		close(pipefd[0]);

		do {
			waitpid(pid, &status, WUNTRACED);/*wait for chil process to finish*/
			/*check for process status*/
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (0);/*return success*/
}
