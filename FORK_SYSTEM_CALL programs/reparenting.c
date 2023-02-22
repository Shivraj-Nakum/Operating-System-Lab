#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main() 
{
    //Fork Returns PID
    int child_pid = fork();

    int pid;
    pid = fork();

    if(pid==0)
    {
        printf("I Am The Child My Process ID Is %d\n",getpid());
        printf("My Parents Process ID Is %d\n",getppid());
        sleep(30);
        printf("After Sleep\n");
        printf("I Am The Parent, My Process ID Is %d\n",getpid());
        printf("I Parent's Parent, My Process ID Is %d\n",getppid());
        printf("Child Terminates\n");
    }

    else
    {
        sleep(20);
        printf("I Am The Parent, My Process ID Is %d\n",getpid());
        printf("My Parent's Parent Process ID Is %d\n",getppid());
        printf("Parent Terminates\n");
    }
    return 0;
}