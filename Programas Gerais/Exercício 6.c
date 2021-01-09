#include <stdio.h>

int main() {
  int codigo, horas, excesso, salario, salarioexcedente, salariototal;

  printf("Digite o codigo do operario: ");
  scanf("%d",&codigo);
  printf("Digite a quantidade de horas trabalhadas: ");
  scanf("%d",&horas);

  if(horas <= 50){
    salariototal = horas * 10;
    printf("Salario total é de: %d",salariototal);
  }else{
    excesso = horas - 50;
    salario = (horas - excesso) * 10;
    salarioexcedente = excesso * 20;
    salariototal = salario + salarioexcedente;
    printf("Horas em excesso: %d\n",excesso);
    printf("Salario sem as horas excessivas: %d\n",salario);
    printf("Salario com apenas as horas excessivas: %d\n",salarioexcedente);
    printf("Salario total: %d",salariototal);
  }
  return 0;
}