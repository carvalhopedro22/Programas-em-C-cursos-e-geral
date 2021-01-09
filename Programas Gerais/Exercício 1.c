#include <stdio.h>

int main(){
  int num1, num2, soma, mult;

  printf("Escreva o primeiro numero: ");
  scanf("%d",&num1);

  printf("Escreva o segundo numero: ");
  scanf("%d",&num2);

  soma = num1 + num2;
  mult = soma * num1;

  printf("A soma é: %d\n",soma);
  printf("A multiplicação é: %d",mult);
  return 0;
}