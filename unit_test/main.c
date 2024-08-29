#include "main.h"
#include <stdio.h>

int main(void)
{
	char *str = "hello world! this should say 31";
	int len = _strlen(str);

	printf("%d\n", len);

	return (0);
}
