#include "main.h"

/**
 * execute_command - Executes a command by forking a child process.
 * @buffer: The input buffer containing the command and arguments.
 *
 * Return: void
 */
void execute_command(char *buffer)
{
	char *argv[MAX_BUF_SIZE];
	char *command_path;
	pid_t pid;
	int status, i = 0;

	argv[i] = strtok(buffer, " ");
	while (argv[i] != NULL)
	{
		i++;
		argv[i] = strtok(NULL, " ");
	}
	if (_strchr(argv[0], '/') != NULL)
	{
		command_path = argv[0];
	}
	else
	{
		command_path = find_command_in_path(argv[0]);
		if (command_path == NULL)
		{
			write(STDERR_FILENO, argv[0], _strlen(argv[0]));
			write(STDERR_FILENO, ": Command not found\n", 20);
			return;
		}
	}
	pid = fork();
	if (pid == -1)
	{
		perror("fork");
		return;
	}

	if (pid == 0)
	{
		execve(command_path, argv, environ);
		perror(argv[0]);
		if (command_path != argv[0])
			free(command_path);  /* Free only if allocated */
		exit(127);
	}
	else
	{
		wait(&status);
	}
	if (command_path != argv[0])
		free(command_path);
}
