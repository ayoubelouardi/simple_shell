#include <stddef.h>
#include "main.h"

/**
 * _strlen - string len
 * @str: string
 * Description: calculate the string len
 * Return: the len
 * or -1 if str is NULL
 */
int _strlen(char *str)
{
	if (str != NULL)
		return (-1);

	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
