#include <stdio.h>
int main(void) {
  int codigo;
  printf("Digite um codigo \n");
  scanf("%d",&codigo);
  if(codigo == 1 || codigo == 0){
    printf("Codigo valido \n");
  }else{
    printf("Codgio invalido \n");
  }
  return 0;
}