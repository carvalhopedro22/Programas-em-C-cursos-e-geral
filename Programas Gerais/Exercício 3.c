#include <stdio.h>

int main(void) {
  int num;
  printf("Escreva um numero: ");
  scanf("%d",&num);
  if (num <= 100){
    printf("valor = 0\n");
  }else{
    printf("%d\n",num);
  }
  if(num > 0){
    printf("Armazenado em a\n");
  }else{
    printf("Armazenado em b\n");
  }
  if(num % 2 == 0){
    printf("Par, armazenado em p");
  }else{
    printf("impar, armazenado em i");
  }
  return 0;
}