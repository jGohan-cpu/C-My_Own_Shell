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

    /*Get user input, allocate memory, and update line pointer and bufsize*/
	status = getline(&line, &bufsize, stdin);

	if (status == -1)/*EOF or error*/
	{
		free(line);
		return (NULL);
	}

	return (line);/*return a pointer to the user input string*/
}
