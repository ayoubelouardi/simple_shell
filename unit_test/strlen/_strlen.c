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
	int i;

	if (str == NULL)
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
