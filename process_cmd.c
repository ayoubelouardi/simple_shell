#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


/**
 * process_cmd - exec a another code in a child process.
 * @ptr: a function pointer to the code that should be executed.
 * Description:
 * read the code
 */
void process_cmd(int (*ptr)(void))
{
        pid_t pid;
        int status;

        pid = fork();

        if (pid == -1)
        {
                perror("error in fork(): \n");
                exit(11);
        }
        else if (pid == 0)
        {
                /* actually execute code */
                if ((*ptr)() == -1)
                {
                        perror("error in execve(): \n");
                        exit(12);
                }
        }
        else
        {
                if (wait(&status) == -1)
                {
                        perror("the child have some error\n");
                        exit(13);
                }
        }
}