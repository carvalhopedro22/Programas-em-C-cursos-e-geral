#include <stdio.h>
int main(void) {
  int soma = 0;
  for (int i = 1; i <= 100; i++){
    soma = soma + i;       
  }
  printf("Soma é de %d \n",soma);
  return 0;
}