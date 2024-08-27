#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _getenv - Gets the value of an environment variable.
 * @name: The name of the environment variable to get.
 *
 * Return: The value of the environment variable, or NULL if not found.
 */

char *_getenv(const char *name)
{
	int i = 0;
	int strlen = 0;

	while (name[strlen] != '\0')
		strlen++;

	while (environ[i] != NULL)
	{
		if (strncmp(environ[i], name, strlen) == 0 && environ[i][strlen] == '=')
		{
			return (environ[i] + strlen + 1);
		}
		i++;
	}

	return (NULL);
}
