#ifndef MY_SHELL_H
#define MY_SHELL_H

#define MAX_BUF_SIZE 500

/**
 * func_ptr_t - a function pointer type
 * Description: a type for a pointer to the function execve
 */
typedef int (*func_ptr_t)(const char *, char * const*, char * const*);

extern char **environ;

int my_puts(char *str);
char **tokenize(char *str);
char *_getenv(const char *name);
void process_cmd(func_ptr_t func, const char *, char * const*, char * const*);
char *join_strings(char *str1, char* str2);
char *_strncat(char *dest, char *src);
char *_strncpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strlen(char *str);
char *find_command(char *command);

#endif
