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
	char *path_copy;
	char *fullpath = malloc(sizeof(char) * 250);

	if (path == NULL || command == NULL)
		return (NULL);

	if (fullpath == NULL)
		return (NULL);

	path_copy = malloc(sizeof(char) * _strlen(path) + 1);
	if (path_copy == NULL)
		return (NULL);
	_strncpy(path_copy, path, _strlen(path) + 1);


	dir = strtok(path_copy, ":");
	while (dir != NULL)
	{
		_strncpy(fullpath, dir, _strlen(dir) + 1);
		_strncat(fullpath, "/", 1);
		_strncat(fullpath, command, _strlen(command));

		if (fullpath == NULL)
		{
			free(path_copy);
			return (NULL);
		}

		if (stat(fullpath, &st) == 0)
		{
			free(path_copy);
			return (fullpath);
		}

		dir = strtok(NULL, ":");
	}

	free(path_copy);
	return (NULL);
}

