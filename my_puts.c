#include <unistd.h>

/**
 * my_puts - output of characters and strings
 * @str: pointer to string
 * Description:
 * Return: the number of char printed
 * -1 if NULL
 */
int my_puts(char *str)
{
	size_t size = 0;

	if (str != NULL)
	{
		/* calculate the size of the string */
		while (str[size] != '\0')
			size++;
		/* print the string and return size*/
		return (write(1, str, size));
	}
	return (-1);
}
