#include "shell.h"

/**
 * builtin_env - Prints the environment variables.
 * @args: array of arguments
 *
 * Return: 0 on success, -1 on failure
 */
/*Checks if the passed command is "env" and prints the environment variables*/
int builtin_env(char **args)
{
	char **env;/*Declare a pointer to traverse the environment variables*/

	/*Check if the first argument is NULL or not equal to env*/
	if (args[0] == NULL || strcmp(args[0], "env") != 0)
	{
		return (-1);/*return -1 if not*/
	}

	/*Iterate through the environment variables global variable*/
	for (env = environ; *env != NULL; env++)
	{
		printf("%s\n", *env);/*Print each environment variable on a new line*/
	}
	/*Return 0 to indicate the "env" command was executed successfully*/
	return (0);
}
