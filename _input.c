#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _input - handles the input
 *
 * Return: the input buffer
 */
char *_input(void)
{
	char *buff = NULL;
	size_t bufsize = 0;
	ssize_t bytes_read;

	bytes_read = getline(&buff, &bufsize, stdin);
	if (bytes_read == -1)
	{
		free(buff);
		exit(1);
	}

	if (buff[bytes_read - 1] == '\n')
		buff[bytes_read - 1] = '\0';
	
	return (buff);
}

