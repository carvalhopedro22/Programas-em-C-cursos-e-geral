#include <stdio.h>
#include <stdlib.h>
int main() {
  char resposta = 's';
  float nota1,nota2,nota3,media;

  while(resposta == 's'){
    printf("Digite a primeira nota \n");
    scanf("%f",&nota1);
    printf("Digite a segunda nota \n");
    scanf("%f",&nota2);
    printf("Digite a terceira nota \n");
    scanf("%f",&nota3);
    getchar();
    
    media = (nota1 + nota2 + nota3) / 3;
    printf("A media foi de %.2f \n",media);
    if (media >= 6.00){
      printf("APROVADO \n");
    }else{
      printf("REPROVADO \n");
    }
    
    printf("\nDeseja digitar nota de outro aluno (s/n)? \n");
    scanf("%c",&resposta);
    getchar();
  }
  return 0;
}