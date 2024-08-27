#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/types.h>
#include <dirent.h>
#include "main.h"


/**
 * main - Simple UNIX Shell
 * Description:
 * Read /README.md
 * Return: 0 on success
 */


int main(void)
{
	size_t byte_size = 0;
	size_t buffer_size = 0;
	char *my_string;
	char **args;

	while (1)
	{
		my_puts("$ ");
		my_string = malloc(sizeof(char) * MAX_BUF_SIZE);

		buffer_size = MAX_BUF_SIZE;
		byte_size = getline(&my_string, &buffer_size, stdin);
		if ((int) byte_size == -1)
		{
			my_puts("\n");
			exit(1);
		}

		if (my_string[byte_size - 1] == '\n')
			my_string[byte_size - 1] = '\0';

		args = tokenize(my_string);

		process_cmd(execve, args[0], args, environ);
		free(my_string);
	}

	return (0);
}
