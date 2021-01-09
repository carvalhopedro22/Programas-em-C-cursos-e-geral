#include <stdio.h>
int main() {
  int numero;
  float soma = 0, qtdlido = 0, media;
  char resposta = 's';

  while(resposta =='s'){
    printf("Digite um numero \n");
    scanf("%d",&numero);
    getchar();
    soma = soma + numero;
    qtdlido ++;
    printf("Deseja digitar outro numero (s/n)? \n");
    scanf("%c",&resposta);
    getchar();
  }
  media = soma / qtdlido;
  printf("A media dos numeros lidos foi %.2f \n",media);
  return 0;
}