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
		int j = 0;

		while (environ[i][j] == name[j])
		{
			if (name[j + 1] == '\0' && environ[i][j + 1] == '=')
			{
				return (environ[i] + j + 2);
			}
			j++;
		}
		i++;
	}

	return (NULL);
}
