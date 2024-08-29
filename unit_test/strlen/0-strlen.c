#include <stdio.h>
#include "main.h"



int main()
{
	// Test case 1: Empty string
	char *str1 = "";
	if (_strlen(str1) != 0)
		printf("Test case 1 failed: Expected 0, got %d\n", _strlen(str1));
	else
		printf("Test case 1 passed\n");

	// Test case 2: Single character string
	char *str2 = "a";
	if (_strlen(str2) != 1)
		printf("Test case 2 failed: Expected 1, got %d\n", _strlen(str2));
	else
		printf("Test case 2 passed\n");

	// Test case 3: Multi-character string
	char *str3 = "Hello, World!";
	if (_strlen(str3) != 13)
		printf("Test case 3 failed: Expected 13, got %d\n", _strlen(str3));
	else
		printf("Test case 3 passed\n");

	// Test case 4: Multi-character string
	char *str4 = NULL;
	if (_strlen(str4) != -1)
		printf("Test case 4 failed: Expected 13, got %d\n", _strlen(str3));
	else
		printf("Test case 4 passed\n");

	return 0;
}
