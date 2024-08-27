#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of bytes to be appended
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *dest_start = dest;

	while (*dest != '\0')
		dest++;
	for (i = n; i > 0; i--)
	{
		*dest++ = *src++;
	}

	return (dest_start);
}
