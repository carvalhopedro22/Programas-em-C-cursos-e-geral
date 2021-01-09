#include <stdio.h>

int main() {
  float altura, peso;
  char sexo;

  printf("Digite sua altura: ");
  scanf("%f",&altura);
  getc(stdin);
  printf("Digite seu sexo [m/f]: ");
  scanf("%c",&sexo);

  if(sexo == 'm'){
    peso = (72.7 * altura) - 58;
    printf("Peso ideal para homens: %.2f",peso);
  }
  if(sexo == 'f'){
    peso = (62.1 * altura) - 44.7;
    printf("Peso ideal para mulheres: %.2f",peso);
  }
  return 0;
}