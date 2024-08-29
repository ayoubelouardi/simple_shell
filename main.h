#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <sys/stat.h>

#define MAX_BUF_SIZE 1024

extern char **environ;
/* Function Prototypes */
char *_getenv(const char *name);
char *_strcat(char *dest, const char *src);
char *find_command_in_path(char *command);
void execute_command(char *buffer);
int _strlen(const char *s);
int _strcmp(const char *s1, const char *s2);
int _strncmp(const char *s1, const char *s2, size_t n);
char *_strchr(const char *s, int c);
char *my_strcpy(char *dest, const char *src);

#endif /* MAIN_H */

