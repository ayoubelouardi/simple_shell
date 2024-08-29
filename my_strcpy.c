#include "main.h"

/**
 * my_strcpy - Custom implementation of strcpy.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the destination string.
 */
char *my_strcpy(char *dest, const char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}

