#include <stdio.h>
#include <stdlib.h>
int main() {
  int idade, codigo, qtdSolteiro = 0, qtdCasado = 0, qtdDivorciado = 0;
  float mediaSolteiro = 0, mediaCasado = 0, mediaDivorciado = 0;
  char resposta = 's';
  
  while(resposta == 's'){
    printf("\nDigite um codigo de estado civil \n");
    printf("1 - solteiro \n");
    printf("2 - casado \n");
    printf("3 - divorciado \n");
    printf("\nEscolha um estado civil: ");
    scanf("%d",&codigo);
    printf("Digite a idade da pessoa: ");
    scanf("%d",&idade);
    getchar();

    if(codigo == 1){
      mediaSolteiro = mediaSolteiro + idade;
      qtdSolteiro ++; 
    } else if(codigo == 2){
      mediaCasado = mediaCasado + idade;
      qtdCasado ++;
    } else{
      mediaDivorciado = mediaDivorciado + idade;
      qtdDivorciado ++;
    }
    printf("Deseja digitar dados de outra pessoa (s/n)?: ");
    scanf("%c",&resposta);
    getchar();
  }
  mediaSolteiro = mediaSolteiro/qtdSolteiro;
  mediaCasado = mediaCasado/qtdCasado;
  mediaDivorciado = mediaDivorciado/qtdDivorciado;
  printf("A media da idade dos solteiros foi de %.2f\n",mediaSolteiro);
  printf("A media da idade dos casados foi de %.2f\n",mediaCasado); 
  printf("A media da idade dos divorciados foi de %.2f\n",mediaDivorciado);
  return 0;
}