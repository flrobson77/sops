#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[]){
   FILE *fp;
   int ch;
   printf("Sou processo: %d e meu pai é %d\n",getpid(),getppid());

   switch(argc){
      case 1: fp = stdin;
              break;
      case 2: if ((fp=fopen(argv[1],"r"))==NULL){
                 fprintf(stderr, "Arquivo %s não encontrado\n",argv[1]);
                 exit(1);
              }
              break;
     default:fprintf(stderr,"Sintaxe:\n%s [Arquivo]\n",argv[0]);
              exit(2);
   }
   sleep(300);
   while((ch=fgetc(fp))!=EOF)
      putchar(ch);
   fclose(fp);
}
