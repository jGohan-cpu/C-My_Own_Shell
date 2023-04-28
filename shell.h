#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

extern char **environ;/*Access the environmental variables*/

/**
 * prompt - display prompt command
 */
void prompt(void);

/**
 * read_line - Reads a line of input from the user.
 *
 * Return: pointer to the line, or NULL if EOF or error
 */
char *read_line(void);

/**
 * split_line - split a line into arguments
 * @line: pointer to the line to split
 *
 * Return: pointer to an array of arguments
 */
char **split_line(char *line);

/**
 * execute - Executes a given command with arguments.
 * @args: array of arguments
 *
 * Return: 0 on success, -1 on failure
 */
int execute(char **args); /*function to execute a command*/

/* Handle the environmetal*/
int builtin_env(char **args);


#endif /* SHELL_H */
