#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "main.h"


/**
 * process_cmd - exec a another code in a child process.
 * @func: a function pointer to execve func.
 * @a: the first argument for the execve func.
 * @b: the second argument for the execve func.
 * @c: the third argument for the execve func.
 * Description: read the code.
 */
void process_cmd(func_ptr_t func, const char *a,
		char * const *b, char * const *c)
{
	pid_t pid;
	int status;

	pid = fork();

	if (pid == -1)
	{
		perror("error in fork():");
		exit(11);
	}
	else if (pid == 0)
	{
		/* actually execute code */
		if (func(a, b, c) == -1)
		{
			perror("error in execve():");
			exit(12);
		}
	}
	else
	{
		if (wait(&status) == -1)
		{
			perror("the child have some error\n");
			exit(13);
		}
	}
}
