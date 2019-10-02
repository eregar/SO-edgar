#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

int infinito = 1;
void signalHandler(int signalNumber){
    printf("signal recieved %d \n", signalNumber);
    infinito=0;
}

int main(){
    int pid;
    signal(10,signalHandler);
    pid = fork();
    if(pid==0){
        printf("io soi el ijo\n");
        while(infinito){
            printf("corri el sistemaaa lol xdeee\n");
            sleep(1);
        }//ciclo artificial infinito
        printf("ya sali me rompieron uwu\n");
    }
    else{
        printf("io soi papuuuu\n");
        sleep(1);
        kill(pid, 10);
        for(;;);//ciclo artificial infinito
    }
}