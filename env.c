#include "shell.h"

/**
 * builtin_env - Prints the environment variables.
 * @args: array of arguments
 *
 * Return: 0 on success, -1 on failure
 */
int builtin_env(char **args)
{
	char **env;

	if (args[0] == NULL || strcmp(args[0], "env") != 0)
	{
		return (-1);
	}

	for (env = environ; *env != NULL; env++)
	{
		printf("%s\n", *env);
	}
	return (0);
}
