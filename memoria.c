#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

void aloca(){
   char *f;
   while(1){
      f=malloc(2^20); //Aloca 1M de memória
      sleep(1/10);       //Espera um segundo
   }
}

int main(){
   int i;
   i=fork();
   printf("%d", i);
   aloca();
   return 0;
}
