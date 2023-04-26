#include "shell.h"

/**
 * split_line - split a line into arguments
 * @line: pointer to the line to split
 *
 * Return: pointer to an array of arguments
 */
char **split_line(char *line)
{
	/*allocate memory for an array of pointers to char*/
	char **tokens = malloc(sizeof(char *) * 64);
	char *token;/*declare a variable to hold each token*/
	int i = 0;/*declare a counter variable*/

	if (!tokens)/*check if allocation fails*/
	{
		/*print an error message if there was an allocation error*/
		perror("Allocation error");
		exit(EXIT_FAILURE);/*exit the program with failure status*/
	}

	token = strtok(line, " \t\r\n\a");/*get the first token from the input line*/
	while (token)/*loop through all tokens in the line*/
	{
		tokens[i] = token;/*store the token in the ith element of the array*/
		i++;

		token = strtok(NULL, " \t\r\n\a");/*get the next token from the line*/
	}
	/*last element of the array to NULL to mark the end of the list of tokens*/
	tokens[i] = NULL;
	return (tokens);/*return the array of tokens*/
}
