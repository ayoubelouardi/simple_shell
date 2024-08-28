#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of bytes to be appended
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src)
{
	char *ptr = dest + _strlen(dest);

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}
