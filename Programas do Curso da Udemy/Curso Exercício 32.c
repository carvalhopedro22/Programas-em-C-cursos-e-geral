#include <stdio.h>
int main(void) {
  float nota, soma = 0, qtdlido = 0, media;
  char resposta = 's';

  while(resposta =='s'){
    printf("Digite uma nota \n");
    scanf("%f",&nota);
    getchar();
    soma = soma + nota;
    qtdlido ++;
    printf("Deseja digitar outra nota (s/n)? \n");
    scanf("%c",&resposta);
    getchar();
  }
  media = soma / qtdlido;
  printf("A media das notas foi %.2f \n",media);
  if (media >= 6.00){
    printf("APROVADO \n");
  } else{
    printf("REPROVADO \n");
  }
  return 0;
}