#include <stdio.h>
int main(void) {
  int numero, soma = 0;
  for(int i = 0; i < 10; i ++){
    printf("Digite um numero \n");
    scanf("%d",&numero);
    soma = soma + numero;
  }
  printf("A soma dos valores é %d \n",soma);
  return 0;
}