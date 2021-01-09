#include <stdio.h>

int main(){
  int qtdmin, qtdmax, media;

  printf("Qual a quantidade minima de peças?: ");
  scanf("%d",&qtdmin);
  printf("Qual a quantidade maxima de peças?: ");
  scanf("%d",&qtdmax);

  printf("__________________\n");
  media = (qtdmin + qtdmax)/2;
  printf("|A media é de: %d       \n",media);
  printf("|________________|");
  
  return 0;
}