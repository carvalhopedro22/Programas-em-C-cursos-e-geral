#include <stdio.h>
int main() {
  int A,B,div;
  printf("Digite dois numeros \n");
  scanf("%d %d",&A,&B);
  if (A > B){
    div = A / B;
    printf("O resultado é : %d \n",div);
  }else{
    div = B / A;
    printf("O resultado é : %d \n",div);
  }
  return 0;
}