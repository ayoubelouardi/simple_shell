#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
#include <sys/stat.h>

/**
 * find_command - searches for a command in the PATH
 * @command: command to search for
 *
 * Return: the full path to the command, or NULL if not found
 */
char *find_command(char *command)
{
	struct stat st;
	char *path = _getenv("PATH");
	char *dir;
	char *path_copy;
	char *fullpath = malloc(250);

	if (path == NULL || command == NULL || fullpath == NULL)
		return (NULL);

	path_copy = malloc(_strlen(path) + 1);
	if (path_copy == NULL)
	{
		free(fullpath);
		return (NULL);
	}
	_strncpy(path_copy, path);

	dir = strtok(path_copy, ":");
	while (dir != NULL)
	{
		_strncpy(fullpath, dir);
		_strncat(fullpath, "/");
		_strncat(fullpath, command);

	if (stat(fullpath, &st) == 0)
	{
		free(path_copy);
		return (fullpath);
	}

	dir = strtok(NULL, ":");
	}

	free(path_copy);
	free(fullpath);
	return (NULL);
}

