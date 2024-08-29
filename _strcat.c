#include "main.h"

/**
 * _strcat - Custom strcat function to concatenate two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the destination string.
 */
char *_strcat(char *dest, const char *src)
{
	char *ptr = dest + _strlen(dest);

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}

