#include "shell.h"

/**
 * main - simple UNIX command line interpreter
 * @ac: argument count
 * @av: argument vector
 * @envp: environment variables
 *
 * Return: 0 on success, -1 on failure
 */
int main(int ac, char **av, char **envp)
{
	char *line;/*declare a variable to hold the user input*/
	char **args;/*declare a variable to hold the parsed arguments*/
	int status;/*declare a variable to hold the execution status*/

	(void)ac;/*suppress unused argument warnings*/
	(void)av;
	while (1)/*infinite loop until the user types "exit"*/
	{
		prompt();/*print the shell prompt*/
		line = read_line();/*read the user input from stdin*/

		if (line == NULL)/*exito on EOF (Crtl+D)*/
		{
			printf("\n");
			break;
		}

		args = split_line(line);/*parse the user input into arguments*/
		status = execute(args, envp);/*execute the command*/
		free(line);/*free the memory allocated for the user input*/
		free(args);/*free the memory allocated for the parsed arguments*/

		if (status == -1)/*if the execution fails, break out of the loop*/
		break;
	}
		return (0);/*exit the shell with status code 0*/
}
