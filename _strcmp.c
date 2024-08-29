#include "main.h"

/**
 * _strcmp - Custom function to compare two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: 0 if strings are equal, a non-zero value otherwise.
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

