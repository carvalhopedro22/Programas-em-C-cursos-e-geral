#include <stdio.h>
#include <stdlib.h>
int main() {
  int codigo, disponivel = 5, entrada = 0, saida = 0;
  do{
    printf("\nmenu de opções \n");
    printf("0 : encerrar o programa \n");
    printf("1 : entrar uma pessoa no restaurante \n");
    printf("2 : sair uma pessoa do restaurante \n");
    printf("3 : mostrar o total de lugares disponiveis no restaurante \n");
    printf("4 : mostrar o total de pessoas que entraram do restaurante \n");
    printf("5 : mostrar o total de pessoas que sairam do restaurante \n");
    printf("Escolha uma opção: ");
    scanf("%d",&codigo);

    switch(codigo){
      case 0:
        printf("Encerrando o programa \n");
        break;
      case 1:
        if (disponivel > 0){
          printf("Incluindo uma pessoa no restaurante \n");
          entrada ++;
          disponivel --;
        }else{
          printf("Aguarde, restaurante lotado \n");
        }
        break;
      case 2:
        if (disponivel == 5){
          printf("Restaurante vazio \n");
        }else{
          printf("saindo uma pessoa do restaurante \n");
          saida ++;
          disponivel ++;
        }
        break;
      case 3:
        printf("Total de lugares disponiveis no restaurante \n");
        printf("Disponivel no restaurante %d\n",disponivel);
        break;
      case 4:
        printf("Total de entradas de pessoas no restaurante \n");
        printf("Total de entradas %d\n",entrada);
        break;
      case 5:
        printf("Total de saidas de pessoas do restaurate \n");
        printf("Total de saida %d\n",saida);
        break;
      default:
        printf("Opcao invalida \n");
        break;
    }
  }while(codigo != 0);
  return 0;
}