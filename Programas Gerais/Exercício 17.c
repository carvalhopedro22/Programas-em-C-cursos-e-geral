#include <stdio.h>

int main(void) {
  int vet[10], i, soma = 0;
  for(i = 0; i < 10; i++){
    printf("Digite os valores do vetor %d ",(i+1));
    scanf("%d",&vet[i]);
    soma = soma + vet[i];
  }
  printf("%d\n",soma);
  return 0;
}