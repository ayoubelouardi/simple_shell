#ifndef MY_SHELL_H
#define MY_SHELL_H



#define MAX_BUF_SIZE 500




/**
 * func_ptr_t - a function pointer type
 * Description: a type for a pointer to the function execve
 */
typedef int (*func_ptr_t)(const char *, char * const*, char * const*);

extern char **environ;






/* prototype of functions */
int my_puts(char *str);
int _strlen(char *str);
int process_cmd(func_ptr_t func, const char *, char * const*, char * const*);
char *_input();


#endif
