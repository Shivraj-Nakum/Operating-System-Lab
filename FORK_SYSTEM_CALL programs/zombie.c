#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main() 
{
    //Fork Returns PID
    int child_pid = fork();

    //Parent Process
    if(child_pid>0)
    {
        sleep(60);
    }
    //Child Process
    else
    {
        exit(0);
    }
    return 0;
}