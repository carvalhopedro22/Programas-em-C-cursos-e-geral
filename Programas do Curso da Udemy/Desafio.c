#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int idade = 0, maioridade = 0, menoridade = 0, qtdmulheres = 0, idademenorsalario = 0, qtdhabitantes = 0;
  float salario = 0, media, menorsalario, somasalario = 0;
  char sexo, sexomenorsalario;
  while(idade >= 0){
    printf("Informe a idade \n");
    scanf("%d",&idade);
    getchar();
    if (idade < 0){
      break;
    }
    printf("sexo 'M/F' \n");
    scanf("%s",&sexo);
    getchar();
    printf("Salario \n");
    scanf("%f",&salario);
    if(sexo == 'F'){
      qtdmulheres = qtdmulheres + 1;
    }
    if(salario >= 0){
      somasalario = somasalario + salario;
      qtdhabitantes = qtdhabitantes + 1;
    }
    if(idade > maioridade){
      maioridade = idade;
    }
    if(idade < menoridade){
      menoridade = idade;
    }
    if(salario < menorsalario){
      menorsalario = salario;
      idademenorsalario = idade;
      sexomenorsalario = sexo;
    }
  }
  printf("\n\t Fim programa \n");
  printf("\n Media dos salarios do grupo: R$ %f \n",somasalario /qtdhabitantes);
  printf(" Menor idade: %d anos \n",menoridade);
  printf(" Maior idade: %d anos \n",maioridade);
  printf("\n A quantidade de mulheres na regiao = %d ",qtdmulheres);
  printf("\n A idade da pessoa e o sexo do que possui o menor salario, foi : %d anos , do sexo :%c \n",idademenorsalario,sexomenorsalario);
  return 0;
}