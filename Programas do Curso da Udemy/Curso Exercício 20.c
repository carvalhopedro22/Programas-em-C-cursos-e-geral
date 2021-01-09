#include <stdio.h>
int main(void) {
  float salarioHora,salarioLiquido,salarioBruto,salarioFamilia;
  int horas, qtdfilhos;
  printf("Digite o salario hora \n");
  scanf("%f",&salarioHora);
  printf("Digite a quantidade de horas trabalhadas \n");
  scanf("%d",&horas);
  printf("Digite a quantidade de filhos \n");
  scanf("%d",&qtdfilhos);

  salarioBruto = salarioHora * horas;
  
  if(salarioBruto<=700){
    salarioFamilia = qtdfilhos * 8.50;
  }else if(salarioBruto>700 && salarioBruto <= 1000){
    salarioFamilia = qtdfilhos * 6.50;
  }else{
    salarioFamilia = qtdfilhos * 2.50;
  }
  
  salarioLiquido = salarioBruto + salarioFamilia;

  printf("Salario Bruto : %.2f \n",salarioBruto);
  printf("Salario Familia : %.2f \n",salarioFamilia);
  printf("Salario Liquido : %.2f \n",salarioLiquido);

  return 0;
}