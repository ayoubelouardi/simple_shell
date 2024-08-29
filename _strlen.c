#include "main.h"

/**
 * _strlen - Custom function to get the length of a string.
 * @s: The string.
 *
 * Return: The length of the string.
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

