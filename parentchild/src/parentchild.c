#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>

void handler(int x);
int my_number;
int main() {
    pid_t child[9];
    pid_t child_pid;

    int i,j;

    for(i= 0;i<9;++i)
    {
        child_pid = fork();
        child[i] = child_pid;

        if (child_pid == 0)
       // {        my_number = i;}
            break;

        if (child_pid < 0)
        {
            perror("fork()");
            exit(EXIT_FAILURE);
        }
    }

    if(child_pid == 0)
    {
        signal(SIGUSR1, handler);
        pause();
    }
    else
    {
        printf("Countdown:\n");
        sleep(1);
        printf("3\n");
        sleep(1);
        printf("2\n");
        sleep(1);
        printf("1\n");
        sleep(1);

        for(j=0;j<9;j++)
        {
            kill(child[j], SIGUSR1);
        }
        waitpid(-1, NULL, 0);

    }

    return 0;
}

void handler(int sig)
{
    printf("This is Child %d\n",/*my_number);*/getpid());

    exit(0);
}
