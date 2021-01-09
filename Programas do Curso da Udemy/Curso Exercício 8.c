#include <stdio.h>
#include <stdlib.h>
int main() {
  int kminicial,kmfinal,distancia;
  printf("Digite a quilometragem do carro antes do inicio da viagem: \n");
  scanf("%d",&kminicial);
  printf("Digite a quilometragem do carro do final da viagem: \n");
  scanf("%d",&kmfinal);
  distancia = kmfinal - kminicial;
  printf("A distancia percorrida na viagem foi de: %d \n",distancia);
  return 0;
}