#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - string len
 * @str: string
 * Description: calculate the string len
 * Return: the len
 */
size_t _strlen(char *str)
{
	size_t i;

	while (str[i] != '\0')
		i++;

	return (i);
}
