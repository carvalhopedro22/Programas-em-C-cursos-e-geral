#include <stdio.h>
#include <stdlib.h>
int main() {
  int codigo,contpa = 0,contcha = 0,contvas = 0;
  do{
    printf("\nmenu de opções \n");
    printf("0 : encerrar o programa \n");
    printf("1 : incluir uma panela no estoque \n");
    printf("2 : incluir uma chaleira no estoque \n");
    printf("3 : incluir uma vassoura no estoque \n");
    printf("4 : relatorio de inclusoes \n");
    printf("Escolha uma opção: ");
    scanf("%d",&codigo);

    switch(codigo){
      case 0:
        printf("Encerrando o programa \n");
        break;
      case 1:
        printf("Incluindo uma panela no estoque \n");
        contpa ++;
        break;
      case 2:
        printf("Incluindo uma chaleira no estoque \n");
        contcha ++;
        break;
      case 3:
        printf("Incluindo uma vassoura no estoque \n");
        contvas ++;
        break;
      case 4:
        printf("Relatorio de inclusoes \n");
        printf("Quantidade de panelas %d\n",contpa);
        printf("Quantidade de chaleiras %d\n",contcha);
        printf("Quantidade de vassouras %d\n",contvas);
        break;
      default:
        printf("Opcao invalida \n");
        break;

    }
  }while(codigo != 0);
  return 0;
}