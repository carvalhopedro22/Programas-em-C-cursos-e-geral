#include <stdio.h>
int main(void) {
  int codigo;
  printf("Digite o codigo do produto \n");
  scanf("%d",&codigo);
  switch (codigo){
    case 1:
      printf("Panela \n");
      break;
    case 2:
      printf("Chaleira \n");
      break;
    case 3:
      printf("Prato \n");
      break;
    default: printf("Invalido \n"); break;
  }
  return 0;
}