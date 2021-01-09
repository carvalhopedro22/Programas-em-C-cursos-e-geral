#include <stdio.h>
int main(void) {
  int receita,despesa,lucro;
  printf("Qual foi a receita da empresa?: \n");
  scanf("%d",&receita);
  printf("Qual foi a despesa da empresa?: \n");
  scanf("%d",&despesa);
  lucro = receita - despesa;
  printf("O lucro da empresa foi de: %d \n",lucro);
  return 0;
}