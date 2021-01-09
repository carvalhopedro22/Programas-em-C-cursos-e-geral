#include <stdio.h>
int main(void) {
  int numero;
  printf("Digite um numero \n");
  scanf("%d",&numero);
  if(numero >= 0 && numero <= 100){
    printf("Numero encontrado entre 0 e 100");
  }else{
    printf("Numero invalido");
  }
  return 0;
}