#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * tokenize - splits a string into an array of string
 * @str: string to be split
 *
 * Return: array of strings
 */
char **tokenize(char *str)
{
	int i = 0;
	char **str_arr;
	char *token;

	if (str == NULL)
	{
		perror("input string");
		exit(1);
	}
	str_arr = malloc(sizeof(char *) * 20);
	if (str_arr == NULL)
	{
		perror("allocation failed");
		exit(1);
	}

	token = strtok(str, " ");
	while (token != NULL)
	{
		str_arr[i] = strdup(token);
		token = strtok(NULL, " ");
		i++;
	}

	str_arr[i] = NULL;

	return (str_arr);
}
