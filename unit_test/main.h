#ifndef MAIN_H
#define MAIN_H

typedef int (*func_ptr_t)(const char *, char * const*, char * const*);
int _strlen(char *str);
int process_cmd(func_ptr_t func, const char *, char * const*, char * const*);

#endif
