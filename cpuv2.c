#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void){
    pid_t pid;
    printf("Meu processo: %d e tenho como pai o processo %d \n",getpid(), getppid());
    while(1){
    pid=fork();
    printf("Sou filho: %d e meu pai é %d \n",getpid(), getppid());
    sleep(60);
    exit(0);
    }
}
