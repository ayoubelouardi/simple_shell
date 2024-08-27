#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
#include <sys/stat.h>


/**
 * find_command - searches for a command in the path
 * @command: command to search for
 *
 * Return: the full path to the command
 */
char *find_command(char *command)
{
	struct stat st;
	char *path = _getenv("PATH");
	char *dir;
	char *fullpath = malloc(sizeof(char) * MAX_BUF_SIZE);
	size_t dir_len, cmd_len, t_len, dir_max = 0;


	cmd_len = _strlen(command);
	if (path == NULL)
		return (NULL);


	dir = strtok(path, ":");
	while (dir != NULL)
	{
		dir_len = _strlen(dir);
		if (dir_max < dir_len)
			dir_max = dir_len;
	}

	t_len = cmd_len + dir_len + 1;
	if (t_len > MAX_BUF_SIZE)
	{
		return ("error: buffer size if not enogh!");
	}

	dir = strtok(path, ":");
	while (dir != NULL)
	{
		fullpath = join_strings(dir, command);
		if (stat(fullpath, &st) == 0)
		{
			return (fullpath);
		}
		strtok(NULL, ":");
	}
	return ("error: we didn't find the file");
}
