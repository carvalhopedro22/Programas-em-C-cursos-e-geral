#include <stdio.h>
int main() {
  int n;
  printf("Digite um numero \n");
  scanf("%d",&n);
  if(n == 1000){
    printf("O numero é igual a 1000");
  }else{
    printf("O numero é diferente de 1000");
  }
  return 0;
}