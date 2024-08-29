#include "main.h"

/**
 * _strchr - Custom function to locate a character in a string.
 * @s: The string.
 * @c: The character to find.
 *
 * Return: A pointer to the first occurrence of the character, or NULL.
 */
char *_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;

	}

	return (NULL);
}

