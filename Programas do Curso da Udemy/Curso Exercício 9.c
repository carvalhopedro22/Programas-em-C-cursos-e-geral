#include <stdio.h>
int main(void) {
  float raio,altura,volume;
  printf("Escolha o raio do cilindro: \n");
  scanf("%f",&raio);
  printf("Escolha o valor da altura: \n");
  scanf("%f",&altura);
  volume = 3.14159 * (raio * raio) * altura;
  printf("O volume do cilindro é de: %f \n",volume);
  return 0;
}