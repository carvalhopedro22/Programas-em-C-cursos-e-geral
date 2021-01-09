#include <stdio.h>

int main(void) {
  int vet[10];
  char maior_50 = 0;
  for(int i = 0; i < 10; i ++){
    printf("Informe o valor para o vetor %d: ",i+1);
    scanf("%d",&vet[i]);
  }
  for(int i = 0; i < 10; i ++){
    if(vet[i] > 50){
      printf("O numero %d esta na posicao %d\n",vet[i],i);
      maior_50 = 1;
    }
  }
  if(maior_50 < 1){
    printf("Nao existe nenhum numero maior que 50");
  }
  return 0;
}