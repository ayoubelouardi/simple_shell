#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - string len
 * @str: string
 * Description: calculate the string len
 * Return: the len
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
