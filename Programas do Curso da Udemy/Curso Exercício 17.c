#include <stdio.h>
int main() {
  int receita,despesa;
  printf("Digite a receita e a despesa da empresa \n");
  scanf("%d %d",&receita,&despesa);
  if(receita > despesa){
    printf("LUCRO");
  }else{
    printf("PREJUIZO");
  }
  return 0;
  }