#include "main.h"

/**
 * _strncmp - Custom function to compare two strings up to n characters.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters to compare.
 *
 * Return: 0 if strings are equal, a non-zero value otherwise.
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}

	return ((unsigned char)*s1 - (unsigned char)*s2);
}

