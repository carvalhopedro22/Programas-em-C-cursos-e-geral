#include <stdio.h>

int main(){
  int i;
  for(i = 0; i <= 100; i++){
     printf("Valores: %d\n",i);
     if(i % 10 == 0){
       printf("Multiplo de 100\n");
     }
  }
  return 0;
}