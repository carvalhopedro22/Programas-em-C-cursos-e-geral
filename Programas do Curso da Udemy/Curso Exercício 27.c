#include <stdio.h>
int main(void) {
  int numero, somapos = 0, somaneg = 0, zeros = 0;
  for (int i = 0; i < 20; i ++){
    printf("Digite um numero \n");
    scanf("%d",&numero);
    if (numero > 0){
      somapos = somapos + numero;
    }else if (numero < 0){
      somaneg = somaneg + numero;
    }else{
      zeros ++;
    }
  }
  printf("Soma dos positivos %d\n",somapos);
  printf("Soma dos negativos %d\n",somaneg);
  printf("Quantidade de zeros %d\n",zeros);
  return 0;
}