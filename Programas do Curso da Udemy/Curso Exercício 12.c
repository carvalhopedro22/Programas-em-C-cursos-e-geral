#include <stdio.h>
int main(void) {
  int anoNascimento,idade,dias,horas,minutos,segundos;
  printf("Digite o ano de seu nascimento: \n");
  scanf("%d",&anoNascimento);
  idade = 2020 - anoNascimento;
  dias = idade * 365;
  horas = dias * 24;
  minutos = horas * 60;
  segundos = minutos * 60;
  printf("A idade é: %d\n",idade);
  printf("A quantidade de dias é: %d\n",dias);
  printf("A quantidade de horas é: %d\n",horas);
  printf("A quantidade de minutos é: %d\n",minutos);
  printf("A quantidade de segundos é: %d\n",segundos);
  return 0;
}