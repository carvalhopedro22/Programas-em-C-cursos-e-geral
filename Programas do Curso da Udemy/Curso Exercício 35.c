#include <stdio.h>
#include <stdlib.h>
int main() {
  int codigo, disponivel = 0, entrada = 0, saida = 0;
  do{
    printf("\nmenu de opções \n");
    printf("0 : encerrar o programa \n");
    printf("1 : incluir uma unidade no estoque \n");
    printf("2 : excluir uma unidade no estoque \n");
    printf("3 : mostrar o total disponivel no estoque \n");
    printf("4 : mostrar o total de entradas no estoque \n");
    printf("5 : mostrar o total de saidas no estoque \n");
    printf("Escolha uma opção: ");
    scanf("%d",&codigo);

    switch(codigo){
      case 0:
        printf("Encerrando o programa \n");
        break;
      case 1:
        printf("Incluindo uma unidade no estoque \n");
        entrada ++;
        disponivel ++;
        break;
      case 2:
        if(disponivel == 0){
          printf("Nao pode excluir porque o estoque está vazio \n");
        }else{
          printf("excluir uma unidade no estoque \n");
          saida ++;
          disponivel --;
        }
        break;
      case 3:
        printf("Total disponivel no estoque \n");
        printf("Disponivel no estoque %d\n",disponivel);
        break;
      case 4:
        printf("Total de entradas no estoque \n");
        printf("Total de entradas %d\n",entrada);
        break;
      case 5:
        printf("Total de saidas do estoque \n");
        printf("Total de saida %d\n",saida);
        break;
      default:
        printf("Opcao invalida \n");
        break;

    }
  }while(codigo != 0);
  return 0;
}