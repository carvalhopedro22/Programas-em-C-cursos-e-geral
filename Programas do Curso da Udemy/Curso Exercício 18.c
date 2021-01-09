#include <stdio.h>
int main(){
  float salario,reajuste,novoSalario;
  printf("Digite o valor de seu salario \n");
  scanf("%f",&salario);
  if(salario <= 1000){
    reajuste = 15;
    printf("O reajuste sera de: %.2f%% \n",reajuste);
  }else if (salario > 1000 && salario <= 2000){
    reajuste = 10;
    printf("O reajuste sera de: %.2f%% \n",reajuste);
  }else{
    reajuste = 5;
    printf("O reajuste sera de: %.2f%% \n", reajuste);
  } 
  novoSalario = salario + (salario * (reajuste/100));
  printf("O salario antigo era de: %.2f \n", salario);
  printf("O salario novo é de: %.2f \n",novoSalario);
  return 0;
}