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
	char *user_input;

	while (1)
	{
		my_puts("$ ");

		/* take the input from the user */
		user_input = _input();

		/* process the command */
		process_cmd(execve, user_input, NULL, NULL);
		free(user_input);

	}

	return (0);
}
