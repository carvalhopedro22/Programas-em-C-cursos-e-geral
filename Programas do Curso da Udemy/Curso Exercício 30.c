#include <stdio.h>
int main(){
  int numero = 77, somapos = 0, somaneg = 0;
  while (numero !=0){
    printf("Digite um numero \n");
    scanf("%d",&numero);
    if (numero > 0){
    somapos = somapos + numero;
    } else {
    somaneg = somaneg + numero;
    }
  }
  printf("Soma de positivos %d \n",somapos);
  printf("Soma de negativos %d \n",somaneg);
  return 0;
}