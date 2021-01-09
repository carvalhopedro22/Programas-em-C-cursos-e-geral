#include <stdio.h>
#include <stdlib.h>
int main(){
  int x;
  int equacao;
  printf("Digite um valor para x: \n");
  scanf("%d", &x);
  equacao = (2 * x) + 1 - (5 * x);
  printf("O valor da equação é : %d\n", equacao);
  return 0;
}