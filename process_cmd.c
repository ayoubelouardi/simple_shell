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
 * Return:
 * 0 on success
 * otherwise it will return the convinient error code:
 * 11: fork() faild.
 * 12: execve() faild.
 * 13: wait() faild.
 * 14: if a is NULL.
 */
int process_cmd(func_ptr_t func, const char *a,
		char * const *b, char * const *c)
{
	if (a != NULL)
	{
		pid_t pid;
		int status;

		pid = fork();

		if (pid == -1)
		{
			perror("error in fork():");
			return (11);
		}
		else if (pid == 0)
		{
			/* actually execute code */
			if (func(a, b, c) == -1)
			{
				perror("error in execve():");
				return (12);
			}
		}
		else
		{
			if (wait(&status) == -1)
			{
				perror("the child have some error\n");
				return (13);
			}
		}
	}
	return (14);
}
