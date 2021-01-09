#include <stdio.h>
int main(void) {
  float salarioBruto,taxa,salarioNovo,valorDesconto;
  printf("Insira seu salario Bruto \n");
  scanf("%f",&salarioBruto);
  if(salarioBruto <=1317.07){
    taxa = 8;
    printf("O desconto INSS foi de: %.2f%% \n",taxa);
  }else if(salarioBruto > 1317.07 && salarioBruto <= 2195.12){
    taxa = 9;
    printf("O desconto INSS foi de: %.2f%% \n",taxa);
  }else{
    taxa = 11;
    printf("O desconto INSS foi de: %.2f%% \n",taxa);
  }
  salarioNovo= salarioBruto - (salarioBruto *(taxa/100));
  valorDesconto = salarioBruto - salarioNovo;
  printf("O valor do salario novo foi de: %.2f \n",salarioNovo);
  printf("O valor do desconto é de: %.2f \n",valorDesconto);
  return 0;
}