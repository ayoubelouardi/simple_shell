#include "main.h"
#include <stddef.h>

/**
 * join_strings - add two strings together
 * @str1: first string
 * @str2: second string
 * Description: adding two strings together.
 * Return:
 * a pointer to a string that have the first + second string.
 */
char *join_strings(char *str1, char* str2)
{
	char *buffer = "string";

	if (str1 != NULL && str2 != NULL)
	{
		buffer = _strncpy(buffer, str1);
		buffer = _strncat(buffer, str2);
		return (buffer);
	}
	return ("error: join_strings doesn't accept NULL");
}
