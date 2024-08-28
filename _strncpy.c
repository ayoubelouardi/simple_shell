#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to dest string
 * @src: pointer to src string
 * @n: number of bytes to copy
 *
 * Return:pointer to dest
 */
char *_strncpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}
