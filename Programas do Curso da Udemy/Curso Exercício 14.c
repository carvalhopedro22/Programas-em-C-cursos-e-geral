#include <stdio.h>
int main() {
  int n1,n2;
  printf("Digite os dois valores \n");
  scanf("%d %d",&n1,&n2);
  if (n1 > n2){
    printf("O valor 1 é maior que o valor 2");
  }else{
    printf("O valor 2 é maior que o valor 1");
  }
  return 0;
}