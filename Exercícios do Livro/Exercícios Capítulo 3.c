#include <stdio.h>
int main(void) {
  int a, antecessor, sucessor;
  antecessor = a - 1;
  sucessor = a + 1;
  printf("Digite um numero\n");
  scanf("%d",&a);
  printf("O antecessor é %d \n", a -1);
  printf("O sucessot é %d \n", a +1);
  return 0;
}

#include <stdio.h>
int main(void) {
  float a;
  printf("Digite um numero\n");
  scanf("%f",&a);
  printf("A quinta parte é %f \n", a/5);
  return 0;
}

#include <stdio.h>
int main(void) {
  int a,b,c;
  printf("Digite três numeros\n");
  scanf("%d %d %d",&a,&b,&c);
  printf("A soma é %d \n", a+b+c);
  return 0;
}

#include <stdio.h>
int main(void) {
  float a,b,c,d;
  printf("Digite quatro numeros\n");
  scanf("%f %f %f %f",&a,&b,&c,&d);
  printf("A média é %f \n", (a+b+c+d)/4);
  return 0;
}

#include <stdio.h>
int main(void) {
  int idade;
  printf("Digite sua idade\n");
  scanf("%d",&idade);
  printf("O ano de seu nascimento é aproximadamente %d \n", 2020-idade);
  return 0;
}
#include <stdio.h>
int main(void) {
  int velocidade;
  printf("Digite uma velocidade em km/h\n");
  scanf("%d",&velocidade);
  printf("A velocidade em metros por segundo é aproximadamente %d\n",velocidade/36);
  return 0;
}

#include <stdio.h>
int main(void) {
  float valor;
  printf("Digite um valor em reais\n");
  scanf("%f",&valor);
  printf("O valor em dólar é aproximadamente %f",valor * 4.015);
  return 0;
}


#include <stdio.h>
int main(void) {
  int temperatura;
  printf("Digite uma temperatura em celsius\n");
  scanf("%d",&temperatura);
  printf("O valor da temperatura em Fahrenheit é %d",temperatura *(9/5)+32);
  return 0;
}


#include <stdio.h>
int main(void) {
  float angulo;
  printf("Digite um angulo em graus\n");
  scanf("%f",&angulo);
  printf("O valor do angulo em radianos é %f",angulo * (3.14/180));
  return 0;
}


#include <stdio.h>
int main(void) {
  int g1, g2, g3;
  g1 = 780000 * (46/100);
  g2 = 780000 * (32/100);
  g3 = 780000 * (22/100);
  printf("g1 ganhou %d\n", g1);
  printf("g2 ganhou %d\n", g2);
  printf("g3 ganhou %d\n", g3);
  return 0;
}

#include <stdio.h>
int main(void) {
  int raio;
  printf("digite o valor do raio\n");
  scanf("%d",&raio);
  printf("A area do circulo é %f", 3.14*(raio*raio));
  return 0;
}

#include <stdio.h>
int main(void) {
  int raio,altura;
  printf("digite o valor do raio e da altura\n");
  scanf("%d %d",&raio,&altura);
  printf("O volume do cilindro é %f", (3.14*(raio*raio)*altura));
  return 0;
}

#include <stdio.h>
#include <math.h>
int main(void) {
  int a,b;
  printf("digite o valor da medida dos catetos\n");
  scanf("%d %d",&a,&b);
  printf("O valor da hipotenusa é %f",sqrt((a*a)+b*b));
  return 0;
}

#include <stdio.h>
#include <math.h>
int main(void) {
  int a,b,c;
  printf("digite os tres numeros\n");
  scanf("%d %d %d",&a,&b,&c);
  printf("O valor invertido é %d %d %d",c,b,a);
  return 0;
}