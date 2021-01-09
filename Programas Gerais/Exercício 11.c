#include <stdio.h>

int main() {
  int i;
  int valor, maior = -999, menor = 999, soma = 0, media;
  for(i = 0; i < 10; i++){
    printf("Informe o valor: ");
    scanf("%d",&valor);
    if(valor > 0){
      if(valor > maior){
        maior = valor;
      }
      if(valor < menor){
        menor = valor;
      }
      soma = soma + valor;
    }else{
      i --;
    }
  }
  media = soma / 10;
  printf("O maior numero é: %d\n",maior);
  printf("O menor numero é: %d\n",menor);
  printf("A media dos numeros é: %d",media);
  return 0;
}