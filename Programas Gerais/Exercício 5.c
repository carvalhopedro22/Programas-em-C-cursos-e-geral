#include <stdio.h>

int main(){
  int peso, excesso, multa;

  printf("Digite o peso dos peixes: ");
  scanf("%d",&peso);

  if(peso > 50){
    excesso = peso - 50;
    multa = excesso * 4;
    printf("Tem excesso de: %d\n",excesso);
    printf("Pagará uma multa de: %d",multa);
  }else{
    printf("Não há multa e nem excesso");
  }
  return 0;
}