#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc,char **argv){
    if(argc>1){
        sleep(atoi(argv[1])*100);
    }
    else printf(2,"se necesita valor para ejecutar\n");
    exit();
}