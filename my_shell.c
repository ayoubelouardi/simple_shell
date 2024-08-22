#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/types.h>
#include <dirent.h>

/**
 * main - Simple UNIX Shell
 * Description:
 * Read /README.md
 * Return: 
 */

int main(void)
{
	/**
	 * while true
	 *	1. print ("$ ");
	 *	2. take input using getline();
	 *	3. check for exit. ^D
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

	return (0);
}
