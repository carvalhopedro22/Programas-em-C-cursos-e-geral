#include <stdio.h>

int main(void) {
  int vetor[10];
  for(int i = 0; i < 10; i ++){
     printf("Digite os valores do vetor: ");
     scanf("%d",&vetor[i]);
  }
  for(int i = 9; i >= 0; i--){
    printf("%d\n",vetor[i]);
  }
  return 0;
}