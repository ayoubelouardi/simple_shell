#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * find_command - searches for a command in the path
 * @command: command to search for
 *
 * Return: the full path to the command
 */
char *find_command(char *command)
{
	char *path = my_getenv("PATH");
	char *dir;
	char fullpath[MAX_BUF_SIZE];
	size_t dir_len, cmd_len;

	if (path == NULL)
		return (NULL);

	path = strdup(path);
	if (path == NULL)
	{
		perror("strdup failed");
		return (NULL);
	}

	while (command[cmd_len] != '\0')
		cmd_len++;
	
	dir = strtok(path, ":");
	while (dir != NULL)
	{
		while (dir[dir_len] != '\0')
			dir_len++;
	}
}
