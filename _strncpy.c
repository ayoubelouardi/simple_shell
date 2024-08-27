#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to dest string
 * @src: pointer to src string
 * @n: number of bytes to copy
 *
 * Return:pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *dest_start = dest;

	for (i = 0; i < n; i++)
	{
		*dest++ = *src++;
	}

	return (dest_start);
}
