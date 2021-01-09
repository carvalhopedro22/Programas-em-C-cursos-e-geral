#include <stdio.h>
int main(){
  int n1,n2;
  printf("Digite dois numeros \n");
  scanf("%d %d",&n1,&n2);
  if (n1 > n2){
    printf("n1 é maior \n");
  } else {
    printf("n2 é maior \n");
  }
  return 0;
}


#include <stdio.h>
int main(){
  int n1,n2;
  printf("Digite dois numeros \n");
  scanf("%d %d",&n1,&n2);
  if (n1 > n2){
    printf("n1 é maior \n");
  } else if (n2 > n1){
    printf("n2 é maior \n");
  } else {
    printf("sao iguais \n");
  }
  return 0;
}


#include <stdio.h>
int main(){
  int numero;
  printf("Digite um numero \n");
  scanf("%d",&numero);
  if (numero % 2 == 0 ){
    printf("Numero par \n");
  } else{
    printf("Numero impar");
  }
  return 0;
}


#include <stdio.h>
int main(){
  float salario,prestacao;
  printf("Digite seu salario e a prestação de emprestimo \n");
  scanf("%f %f",&salario,&prestacao);
  if (prestacao > salario * 0.2){
    printf("Emprestimo nao concedido \n");
  } else{
    printf("Emprestimo concedido \n");
  }  
  return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
  float numero;
  printf("Digite um numero \n");
  scanf("%f",&numero);
  if (numero > 0){
    printf("Numero ao quadrado: %.2f \n",numero * numero);
    printf("Raiz do numero: %.2f \n",sqrt(numero));
  }else{
    printf("Nao é numero positivo");
  }
  return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
  float h,peso;
  char sexo;
  printf("Digite sua altura \n");
  scanf("%f",&h);
  getchar();
  printf("Digite seu sexo [F] ou [M] \n");
  scanf("%c",&sexo);
  if(sexo == 'M'){
    peso = (62.1 * h) - 44.7;
    printf("Seu peso ideal é %.2f \n",peso);
  }else if (sexo == 'F'){
    peso = (72.7 * h) - 58;
    printf("Seu peso ideal é %.2f \n",peso);
  }
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  float valor,precomg,precosp,precorj,precoms;
  char estado[3];
  printf("Insira o valor do produto \n");
  scanf("%f",&valor);
  getchar();
  printf("Digite um estado \n");
  fgets(estado,3,stdin);
 
  if(strcmp(estado,"MG")==0){  
    precomg = valor + (valor * 0.07);
    printf("O preço do produto sera de: %.2f \n",precomg);
  } else if (strcmp(estado,"SP")==0){   
    precosp = valor + (valor * 0.12);
    printf("O preço do produto sera de: %.2f \n",precosp);
  } else if (strcmp(estado,"RJ")==0){
    precorj = valor + (valor * 0.15);
    printf("O preço do produto sera de: %.2f \n",precorj);
  } else if (strcmp(estado,"MS")==0){
    precoms = valor + (valor * 0.08);
    printf("O preço do produto sera de: %.2f \n",precoms);
  } else{
    printf("INVALIDO \n");
  }
  return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  int idade;
  printf("Digite a idade do nadador \n");
  scanf("%d",&idade);
  if (idade >= 5 && idade <=7){
    printf("INFANTIL A \n");
  } else if (idade >= 8 && idade <= 10){
    printf("INFANTIL B \n");
  } else if (idade >= 11 && idade <=13){
    printf("JUVENIL A \n");
  } else if (idade >= 14 && idade <= 17){
    printf("JUVENIL B \n");
  } else {
    printf("SENIOR \n");
  }
  return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  float altura,peso;
  printf("Digite a altura \n");
  scanf("%f",&altura);
  printf("Digite o peso \n");
  scanf("%f",&peso);

  if(altura < 1.20 && peso <=60){
    printf("Categoria A \n");
  } else if(altura < 1.20 && peso>=60 && peso <=90){
    printf("Categoria D \n");
  } else if(altura < 1.20 && peso > 90){
    printf("Categoria G \n");
  } else if(altura > 1.20 && altura <= 1.70 && peso <=60){
    printf("Categoria B \n");
  } else if(altura > 1.20 && altura <= 1.70 && peso>=60 && peso <=90){
    printf("Categoria E \n");
  } else if(altura > 1.20 && altura <= 1.70 && peso>90){
    printf("Categoria H \n");
  } else if(altura > 1.70 && peso <=60){
    printf("Categoria C \n");
  } else if(altura > 1.70 && peso>=60 && peso <=90){
    printf("Categoria F \n");
  } else{
    printf("Categoria I \n");
  }
  return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  int n1,n2,n3,codigo,geometrica,ponderada,harmonica,aritmetica;
  printf("Digite os tres numeros \n");
  scanf("%d %d %d",&n1,&n2,&n3);
  printf("Digite o codigo \n");
  scanf("%d",&codigo);

  if(codigo == 1){
    geometrica = n1 * n2 *n3;
    printf("GEOMETRICA: %d \n",geometrica);
  }else if(codigo == 2){
    ponderada = (n1 + n2 * 2 + n3 * 3)/6;
    printf("PONDERADA: %d \n",ponderada);
  }else if(codigo == 3){
    harmonica = 1/(1/n1 + 1/n2 + 1/n3);
    printf("HARMONICA: %d \n",harmonica);
  }else{
    aritmetica = (n1 + n2 + n3)/3;
    printf("ARITMETICA: %d \n",aritmetica);
  }
  return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  int num;
  printf("Digite um numero de 1 a 12 \n");
  scanf("%d",&num);
  switch(num){
    case 1: printf("JANEIRO \n"); break;
    case 2: printf("FEVEREIRO \n"); break;
    case 3: printf("MARÇO \n"); break;
    case 4: printf("ABRIL \n"); break;
    case 5: printf("MAIO \n"); break;
    case 6: printf("JUNHO \n"); break;
    case 7: printf("JULHO \n"); break;
    case 8: printf("AGOSTO \n"); break;
    case 9: printf("SETEMBRO \n"); break;
    case 10: printf("OUTUBRO \n"); break;
    case 11: printf("NOVEMBRO \n"); break;
    case 12: printf("DEZEMBRO \n"); break;
    default: printf("INVALIDO \n");
  }
  return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  int num;
  printf("Digite um numero de 1 a 7 \n");
  scanf("%d",&num);
  switch(num){
    case 1: printf("DOMINGO \n"); break;
    case 2: printf("SEGUNDA \n"); break;
    case 3: printf("TERÇA\n"); break;
    case 4: printf("QUARTA \n"); break;
    case 5: printf("QUINTA \n"); break;
    case 6: printf("SEXTA \n"); break;
    case 7: printf("SABADO\n"); break;
    default: printf("INVALIDO \n");
  }
  return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  int n1,n2,resultado;
  char ch[2];
  printf("Digite dois numeros \n");
  scanf("%d %d",&n1,&n2);
  getchar();
  printf("Digite uma operaçao matematica (+,-,*,/) \n");
  fgets(ch,2,stdin);
  if(strcmp(ch,"+")==0){
    resultado = n1 + n2;
    printf("Resposta %d \n",resultado);
  }else if(strcmp(ch,"-")==0){
    resultado = n1 - n2;
    printf("Resposta %d \n",resultado);
  }else if(strcmp(ch,"*")==0){
    resultado = n1 * n2;
    printf("Resposta %d \n",resultado);
  }else if(strcmp(ch,"/")==0){
    resultado = n1 / n2;
    printf("Resposta %d \n",resultado);
  }else{
    printf("Invalido \n");
  }
  return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  int num;
  printf("Digite um numero \n");
  scanf("%d",&num);

  if(num % 3 == 0){
    printf("DIVISIVEL POR 3 \n");
  } else{
    printf("NAO E DIVISIVEL POR 3 \n");
  }
  
  if(num % 5 == 0){
    printf("DIVISIVEL POR 5 \n");
  } else{
    printf("NAO E DIVISIVEL POR 5 \n");
  }

  if(num % 3 == 0 && num % 5 == 0){
    printf("INVALIDO \n");
  }
  return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
  int a,b,c,delta,raiz1,raiz2;
  printf("Digite os coeficientes da equação \n");
  scanf("%d %d %d",&a,&b,&c);

  delta = (b*b)-4 * a * c;
  raiz1 = (-b + sqrt(delta))/ (2 * a);
  raiz2 = (-b - sqrt(delta))/ (2 * a);
  if(delta == 0){
    printf("RAIZ UNICA \n");
    printf("A raiz é %d \n",raiz1);
  }else if(delta > 0){
    printf("DUAS RAIZES \n");
    printf("As raizes sao %d %d \n",raiz1,raiz2);
  }else{
    printf("NAO EXISTE RAIZ \n");
  }
}