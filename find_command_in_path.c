#include "main.h"

/**
 * find_command_in_path - Searches for a command
 * in the directories listed in PATH.
 * @command: The command to search for.
 *
 * Return: The full path to the command if found, otherwise NULL.
 */
char *find_command_in_path(char *command)
{
	char *path = _getenv("PATH");
	char *path_copy, *dir;
	char *fullpath = malloc(MAX_BUF_SIZE);
	struct stat st;

	if (path == NULL || command == NULL || fullpath == NULL)
		return (NULL);

	path_copy = malloc(_strlen(path) + 1);
	if (path_copy == NULL)
	{
		free(fullpath);
		return (NULL);
	}
	my_strcpy(path_copy, path);

	dir = strtok(path_copy, ":");
	while (dir != NULL)
	{
		my_strcpy(fullpath, dir);
		_strcat(fullpath, "/");
		_strcat(fullpath, command);

		if (stat(fullpath, &st) == 0 && (st.st_mode & S_IXUSR))
		{
			free(path_copy);  /* Free path_copy before returning */
			return (fullpath);
		}
		dir = strtok(NULL, ":");
	}

	free(path_copy);
	free(fullpath);
	return (NULL);
}
