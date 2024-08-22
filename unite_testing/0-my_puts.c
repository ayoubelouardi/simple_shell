#include <stdio.h>
#include "main.h"

/**
 * main - testing the my_puts function
 * Return: 0
 */

int main(void)
{
	size_t return_1, return_2;

	/* printing char */
	return_1 = puts("c");	
	return_2 = my_puts("c");	
	puts("");
	printf("%ld, %ld\n", return_1, return_2);

	 /* printing null */
	return_1 = puts("this is not your function");	
	return_2 = my_puts("this is not your function");	
	puts("");
	printf("%ld, %ld\n", return_1, return_2);

	/* printing null */
	return_1 = puts("$ ");	
	return_2 = my_puts("$ ");	
	puts("");
	printf("%ld, %ld\n", return_1, return_2);

	return (0);
}
