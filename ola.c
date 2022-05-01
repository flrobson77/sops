#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>


int main(void){
    printf("Meu processo: %d e tenho como pai o processo %d \n",getpid(), getppid());
    sleep(300);
    printf("Ola mundo!!!\n");
}
