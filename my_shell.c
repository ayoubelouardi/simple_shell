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
 * Return: 
 */

#define MAX_BUF_SIZE 100

extern char **environ;

int main(void)
{
	size_t byte_size = 0;
	size_t buffer_size = 0;
	char *my_string;
	char *args[2];
	pid_t pid;

	/**
	 * while true
	 *	1. puts("$ ");
	 *	2.1. allocate the buffer
	 *	2.2. take input using getline();
	 *	2.3. make a function to tokenie the input
	 *	3. check for exit. ^D
	 *	-----------------
	 *	4. excute the input
	 *		4.1. fork 
	 *		4.2. execve 
	 *		4.3. wait
	 *		4.4 if is child
	 *			exerve()
	 *		4.5 else if
	 *			wait();
	 *		4.6 else
	 *			error();
	 */

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

		args[0] = my_string;
		args[1] = NULL;

		pid = fork();
		if (pid == -1)
		{
			perror("fork failed");
			exit(1);
		} else if (pid == 0)
		{
			execve(args[0], args, environ);
		} else
		{
			int status;

			wait(&status);
		}
		free(my_string);
	}

	return (0);
}
