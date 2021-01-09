#include <stdio.h>
int main(){
  printf("Inicio do programa\nFim do programa\n");
  return 0;
}


#include <stdio.h>
int main(){
  int x;
  printf("digite um valor para x\n");
  scanf ("%d", &x);
  printf("O valor de x é: %d\n",x);
}


#include <stdio.h>
int main(){
  int x;
  scanf ("%d", &x);
  printf("Valor lido: %d\n",x);
}


#include <stdio.h>
int main(){
  double x;
  printf("digite um valor \n");
  scanf("%lf", &x);
  printf("Valor lido em notação científica: %e\n",x);
  return 0;
}


#include <stdio.h>
int main(void) {
    char c = '1';
    printf("%d", (c - '0') + 1); // + 1 só p/ mostrar que virou numérico mesmo e faz a soma
}


#include <stdio.h>
int main(){
  int x,y;
  printf("digite dois valores (x,y)\n");
  scanf("%d %d",&x,&y);
  printf("os valores invertidos são: %d %d",y,x);
  return 0;
}


#include <stdio.h>
int main(){
  int dia, mes, ano;
  printf("Digite um dia, um mes e um ano\n");
  scanf("%d %d %d",&dia,&mes,&ano);
  printf("A data é: %d / %d / %d",dia,mes,ano);
  return 0;
}


#include <stdio.h>
#define PI 3.1415
int main (){
  printf("%f",PI);
  return 0;
}


#include <stdio.h>
int main (){
  const int a = 10;
  printf("Valor da constante %d\n",a);
  return 0;
}


#include <stdio.h>
int main (){
  char letter;
    printf("Digite um caractere qualquer: ");
    scanf("%c", &letter);
    printf("O caractere digitado foi \"%c\"\n", letter);
}


#include <stdio.h>
int main (){
  char x,y,z;
  printf("Digite tres caracteres\n");
  scanf("%c %c %c",&x,&y,&z);
  printf("%c\n%c\n%c\n",x,y,z);
  return 0;
}


#include <stdio.h>
int main (){
  int x;
  float y;
  char z;
  printf("Digite os tres valores\n");
  scanf("%d %f %c",&x, &y, &z);
  printf("%d %f %c",x,y,z);
  printf("\n%d\n%f\n%c\n",x,y,z);
  return 0;
}