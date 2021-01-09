#include <stdio.h>
int main(){
  int numero = 0, qtd = 0;
  while (numero >=0){
    printf("Digite um numero \n");
    scanf("%d",&numero);
    qtd++;
  }
  printf("Quantidade de numero %d \n",qtd);
  return 0;
}