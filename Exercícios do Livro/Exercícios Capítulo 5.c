#include <stdio.h>
int main(void) {
  int N;
  scanf("%d",&N);
  for(int i = 0; i <= N; i++){
    printf("%d\n", i);
  }
  return 0;
}


#include <stdio.h>
int main(void) {
  int N;
  scanf("%d",&N);
  for(int i = N; i >= 0; i--){
    printf("%d\n", i);
  }
  return 0;
}


#include <stdio.h>
int main(void) {
  int N;
  scanf("%d",&N);
  for(int i = 0; i <= N; i++){
    printf("%d\n", 2 * i + 1);
  }
  return 0;
}


#include <stdio.h>
int main(void) {
  int N;
  scanf("%d",&N);
  for(int i = 0; i <= N; i++){
    printf("%d\n", 3 * i);
  }
  return 0;
}


int main(void) {
  int N = 0, soma = 0;
  for(int i = 0; i < 50; i++){
    soma = soma + N;
    N = N + 2;
  }
  printf("Soma %d\n",soma);
  return 0;
}


#include <stdio.h>
int main(void) {
  for(int i = 10; i >= 0; i--){
    printf("%d\n",i);
  }
  printf("FIM\n");
  return 0;
}


#include <stdio.h>
int main(void) {
  int N, i, soma = 0;
  for(i = 1; i <= 10; i++){
    printf("Digite um valor %d \n",i);
    scanf("%d",&N);
    soma = soma + N;
  } 
  printf("%d\n",soma);
  return 0;
}


#include <stdio.h>
int main(void) {
  int N, i, soma = 0, media;
  for(i = 1; i <= 10; i++){
    printf("Digite um valor %d \n",i);
    scanf("%d",&N);
    soma = soma + N;
    media = soma / 10;
  } 
  printf("%d\n",media);
  return 0;
}


#include <stdio.h>
int main(void) {
  int num = 0, menor = 0, maior = 0;
  for(int i = 1; i <= 10; i++){
    printf("Digite um valor %d \n",i);
    scanf("%d",&num);
    if (i == 1)
			maior = menor = num;
		else {
			if (num > maior)
				maior =  num;
			if (num < menor)
				menor = num;
		}
  } 
  printf("%d\n",menor);
  printf("%d\n",maior);
  return 0;
}


#include <stdio.h>
int main(void) {
  int num = 0, media = 0, soma = 0;
  for(int i = 1; i <= 10; i++){
    printf("Digite um valor %d \n",i);
    scanf("%d",&num);
    soma = soma + num;
    media = soma /10;
  } 
  printf("%d\n",media);
  return 0;
}


#include <stdio.h>
int main(void) {
  int num;
  printf("Digite um valor \n");
  scanf("%d",&num);
  for(int i = 1; i <= num; i++){
    if (num % i == 0){
       printf("É divisor %d \n", i);
    }
  }
   return 0;
}


#include <stdio.h>
int main(void) {
  int num,soma = 0;
  printf("Digite um valor \n");
  scanf("%d",&num);
  for(int i = 1; i <= num; i++){
    if (num % i == 0){
       soma = soma + i;
       printf("É divisor %d \n", i);
    }
  }
   printf("Soma de %d\n",soma - num);
   return 0;
}


#include <stdio.h>
int main(void) {
  int soma = 0;
  for(int i = 0; i < 1000; i++){
    if (i % 3 == 0 || i % 5 == 0){
       soma = soma + i;
    }
  }
  printf("Soma de %d\n",soma);
   return 0;
}

#include <stdio.h>
int main(void) {
  int num, soma = 0, fib1 = 1, fib2 = 1;
  printf("Digite a quantidade de termos da serie \n");
  scanf("%d",&num);
  for(int i = 1; i <= num; i = i + 1){
    soma = fib1 + fib2;
    fib1 = fib2;
    fib2 = soma;
    printf("%d\n",fib2);
  }
  return 0;
}


#include <stdio.h>
int main(void) {
  int num, maior, menor;
  printf("Digite um numero \n");
  scanf("%d",&num);
  menor = maior = num;
  while(num > 0){
    printf("Digite um numero \n");
    scanf("%d",&num);
    if (num < menor && num > 0){
      menor = num;
    }else if (num > maior){
      maior = num;
    }
  }
  printf("Maior %d\n",maior);
  printf("Menor %d\n",menor);
  return 0;
}


#include <stdio.h>
int main(){
  int n = 0; 
  double soma = 0;
  double i;
  printf("Digite a quantidade de termos \n");
  scanf("%d",&n);
  for(i = 1; i < n; i++){
    soma = soma + 1/i;
  }
  printf("%lf",soma);
  return 0;
}


#include <stdio.h>
int main(){
  int i, j, n, cont = 1;
  printf("Digite a quantidade de linhas \n");
  scanf("%d",&n);
  for ( i = 1; i<=n ; i++){
    for( j = 1; j<=i; j++){
      cont ++;
      printf("%d ",cont);
    }
    printf("\n");
  }
  return 0;
}


#include <stdio.h>
int main(){
  int i, num;
  int div = 0; 
  printf("Digite um número inteiro e positivo: ");
  scanf("%d", &num);
  for (i = 1; i <= num; i++){
    if (num % i == 0) { 
     div++;
    }
  } 
  if (div == 2)
    printf("O número %d é primo!", num);
  else
    printf("O número %d não é primo!", num);
  return 0;
}