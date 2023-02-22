#include<stdio.h>
#include <stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
    int pid;
    pid = fork();
    if(pid==0)
    {
        printf("I Am The Child My Process ID Is %d\n",getpid());
        printf("My Parents Process ID Is %d\n",getppid());
        printf("Child Terminates\n");
        exit(0);
    }
    else{
        printf("I Am The Parent, My Process ID Is %d\n",getpid());
        printf("My Parent's Parent  Process ID Is %d\n",getppid());
        printf("Parent Terminates\n");
    }

    return 0;
}
