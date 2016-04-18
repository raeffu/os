#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int forkValue;
    printf("\nparent process: Ich habe PID = %d\n", getpid());
    forkValue = fork(); /* child process kreieren */
    printf("parent/child process: Ausgabe vor if (forkValue == 0)\n");

    if (forkValue == 0)
    {
        /********** child process **********/
        printf("child process: Ich habe PID = %d\n", getpid());
        printf("child process: fork() = %d\n", forkValue);
        printf("child process: startet Prozess ps\n\n");

        if (execl("/bin/ps", "p_s", "-f", NULL) == -1)
        {
            perror("execl");
            exit(1);
        }
    }

    /********** parent process **********/
    printf("parent process: fork() = %d\n", forkValue);
    printf("parent process: wait()\n\n");
    wait((int*) 0);
    printf("\nparent process: child process hat terminiert.\n\n");

    return 0;
}
