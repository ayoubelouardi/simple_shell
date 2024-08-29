#include "main.h"

/**
 * _getenv - Custom getenv function to retrieve environment variable values.
 * @name: The name of the environment variable.
 *
 * Return: The value of the environment variable, or NULL if not found.
 */
char *_getenv(const char *name)
{
	size_t name_len = _strlen(name);
	int i = 0;

	while (environ[i] != NULL)
	{
		if (_strncmp(environ[i], name, name_len) == 0 && environ[i][name_len] == '=')
		{
			return (environ[i] + name_len + 1);
		}
		i++;
	}

	return (NULL);
}

