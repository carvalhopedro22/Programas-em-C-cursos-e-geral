#include <stdio.h>
int main() {
  int inicio_da_viagem,final_da_viagem,distancia;
  inicio_da_viagem = 200000;
  final_da_viagem = 207349;
  distancia = final_da_viagem - inicio_da_viagem;
  printf("A distancia percorrida na viagem foi de %d \n",distancia);
  return 0;
}