#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]){
   pid_t pid = 0;
   pid = fork();
   if (pid >= 0){
      if (pid != 0){
            printf("Processos parente...Infinito\n");
      }
      else {
         printf("Processo filho...Infinito\n");
      }
      while(1) {
         sleep(2);
      }
   }
   return 0;
}
