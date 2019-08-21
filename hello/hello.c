#include "./libhello.h"

int main(int argc, char **argv){
    //<> librerias de sistema "./" librerias mias
    //valor de main se regresa a quien ejecuta el archivo, 0 es ok
    // doble asterisco es un array de arrays, uno es solo un array
    //int i empieza en 1 para no agarrar el nombre del programa;
    int i = 0;

    for(i = 1; i<argc;i++){
       // printf("Hola %s\n",argv[i]);
       printHello(argv[i]);
    }
    return 0;
}


