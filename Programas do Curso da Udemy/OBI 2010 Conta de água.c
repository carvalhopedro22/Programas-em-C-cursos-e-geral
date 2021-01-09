#include <stdio.h>
#include <stdlib.h>
int main() {
  int N,conta;
  printf("Digite o valor de metros cubicos de agua gastos entre 0 e 1000 \n");
  scanf("%d",&N);
  if (N >= 0 && N <= 10){
    conta = 7;
  }else if (N > 10 && N <= 30){
    conta = 7 + ((N - 10) * 1);
  }else if (N > 30 && N <=100){
    conta = 7 + 20 + ((N - 30) * 2);
  }else if (N > 100 && N <= 1000){
    conta = 7 + 20 + 140 + ((N - 100) * 5);
  }else{
    printf("Valor invalido\n");
  }
  printf("%d",conta);
  return 0;
}