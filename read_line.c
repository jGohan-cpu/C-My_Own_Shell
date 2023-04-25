#include "shell.h"

/**
 * read_line - read a line from stdin
 *
 * Return: pointer to the line
 */
char *read_line(void)
{
	char *line = NULL;/*declare a variable to hold the user input*/
	size_t bufsize = 0;/*declare a variable to hold the buffer size*/
	ssize_t status;

	/* Cal the getline function with the address of 'line', the address of 'bufsize', and stdin.*/
    /* The getline function reads a line from stdin, dynamically allocates memory for it,
    updates the pointer 'line' to point to the allocated memory, and stores the buffer size in 'bufsize'.*/
    /* The function returns the number of characters read, or -1 if an error or EOF is encountered.*/
	status = getline(&line, &bufsize, stdin);

	if (status == -1)/*EOF or error*/
	{
		free(line);
		return (NULL);
	}

	return (line);/*return a pointer to the user input string*/
}
