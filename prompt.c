#include "shell.h"

/**
 * prompt - print prompt to stdout
 */
void prompt(void)
{
	/*Only prints the prompt if running interactively */
	if (isatty(STDIN_FILENO))
	{

		printf("$ ");/*print the shell prompt symbol*/
	}
}
