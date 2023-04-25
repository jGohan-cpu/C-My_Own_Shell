#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

/**
 * prompt - display prompt command
 */
void prompt(void);
/**
 * read_line - Reads a line of input from the user.
 */
char *read_line(void);
/**
 * execute - Executes a given command with arguments.
 * Returns 1 on success, 0 on failure.
 */
char **split_line(char *line);
int execute(char **args, char **envp); /*function to execute a command*/

#endif /* SHELL_H */
