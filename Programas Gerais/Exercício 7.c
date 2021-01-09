#include <stdio.h>
#include <math.h>

int main() {
  int n1,n2,n3,n4,q1,q2,q3,q4;
  printf("Digite os quatro numeros: ");
  scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
  q1 = pow(n1,2);
  q2 = pow(n2,2);
  q3 = pow(n3,2);
  q4 = pow(n4,2);
  if(q3 > 100){
    printf("Quadrado do terceiro numero: %d",q3);
  }else{
    printf("Quadrado do primeiro numero: %d\n",q1);
    printf("Quadrado do segudno numero: %d\n",q2);
    printf("Quadrado do terceiro numero: %d\n",q3);
    printf("Quadrado do quarto numero: %d\n",q4);
  }
  return 0;
}