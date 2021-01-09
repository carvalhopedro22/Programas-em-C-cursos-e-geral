#include <stdio.h>

int main(void) {
  int vet1[10], vet2[10], soma[10];
  for(int i = 0; i < 10; i++){
    printf("Informe o valor para o vetor 1: ");
    scanf("%d",&vet1[i]);
    printf("Informe o valor para o vetor 2: ");
    scanf("%d",&vet2[i]);

    soma[i] = vet1[i]+vet2[i];
  }
  for(int i = 0; i < 10; i++){
     printf(" %d\n",soma[i]);
  }
  return 0;
}