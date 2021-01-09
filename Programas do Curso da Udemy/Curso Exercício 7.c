#include <stdio.h>

int main(void) {
  float raio,altura,volume;
  raio = 3;
  altura = 5;
  volume = 3.14159 * (raio * raio) * altura;
  printf("O volume do cilindro é de %f\n",volume);
  return 0;
}