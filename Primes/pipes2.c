#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int num = 0;
  int compi = 0;
  scanf("%d\n",&compi);
  fprintf(stderr, "%d\n",compi);

  while(1){
    scanf("%d\n",&num);
    if(num == -1){
      printf("%d\n",-1);
      break;
    }
    if(num % compi != 0){
      printf("%d\n",num);
    }
  }
}