#include "main.h"

/**
 * main - A simple UNIX command-line interpreter
 *
 * Return: 0 on success, or an error code on failure.
 */
int main(void)
{
	char *buffer = NULL;
	size_t bufsize = 0;
	ssize_t bytes_read;
	int i;

	while (1)
	{
		if (isatty(STDIN_FILENO))
		{
			write(STDOUT_FILENO, "$ ", 2);
		}
		bytes_read = getline(&buffer, &bufsize, stdin);
		if (bytes_read == -1)
		{
			free(buffer);
			exit(0);
		}
		if (buffer[bytes_read - 1] == '\n')
		{
			buffer[bytes_read - 1] = '\0';
		}
		if (_strcmp(buffer, "exit") == 0)
		{
			free(buffer);
			exit(0);
		}
		if (_strcmp(buffer, "env") == 0)
		{
			for (i = 0; environ[i] != NULL; i++)
			{
				write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
				write(STDOUT_FILENO, "\n", 1);
			}
			continue;
		}
		execute_command(buffer);
	}
	free(buffer);
	return (0);
}
