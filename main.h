#ifndef MY_SHELL_H
#define MY_SHELL_H

extern char **environ;
int my_puts(char *str);
char **tokenize(char *str);
char *_getenv(const char *name);

#endif
