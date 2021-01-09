#include <stdio.h>

int main(){
  int maior = 0;
  int numero;
  printf("Digite um numero: ");
  scanf("%d",&numero);

  while(numero != 0){
    if (numero > maior){
      maior = numero;
    }
    printf("Digite um numero: ");
    scanf("%d",&numero);
  }
  printf("O maior numero é: %d",maior);
  return 0;
}