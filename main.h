#ifndef MY_SHELL_H
#define MY_SHELL_H

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





#endif
