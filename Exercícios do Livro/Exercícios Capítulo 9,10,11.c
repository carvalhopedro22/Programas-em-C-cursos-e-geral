#include <stdio.h>
#include <stdlib.h>
float Hora(int hora, int min, int seg){
  return hora * 3600 + min * 60 + seg;
} 
int main(){
  float temp,hr,m,s;
  printf("Escreva as horas, minutos e segundos: ");
  scanf("%f %f %f",&hr,&m,&s);
  temp = Hora(hr,m,s); 
  printf("O tempo em segundos é aproximadamente %.2f\n",temp);
}

#include<stdio.h>
#include <stdlib.h>
float LEITURA (int *vetor){
int i,vet[10];
  for (i = 0; i < 10; i++){
    printf("Digite os valores: ");
    scanf("%d", &vet[i]);
  }
}

float SOMA (int *vet){
  int i,vetor[10];
  float soma = 0;
  for (i = 0; i < 10; i++)
    soma = soma + vet[i];
  return soma;
}

int main (void){
  float soma;
  int i,vetor[10],vet[10],l;
  l = LEITURA(&vetor[i]);
  soma = SOMA(&vetor); 
  printf ("soma = %.1f \n",soma);
  return 0;
}

#include <stdio.h>
int funcao(int *n){
  for(int i = 0; i < 5; i++){
    printf("%d- ",i+1); 
    scanf("%d", &n[i]);
  }
}
int main (void){
  int v[5];
  funcao(v);
  return 0; 
}

#include <stdio.h>
#include <stdlib.h>
int main(){
  int *p;
  int i,j,nlinhas,ncolunas;
  printf("\tDigite as dimensões da matriz: ");
  scanf("%d %d",&nlinhas,&ncolunas);
  p = (int *)malloc(nlinhas * ncolunas * sizeof(int));
  for(i = 0; i < nlinhas; i++){
    for(j = 0; j < ncolunas; j++){
      p[i * ncolunas + j] = i+ j;
    }
  }
  for(i = 0; i < nlinhas; i++){
    for(j = 0; j < ncolunas; j++){
      printf(" %d",p[i * ncolunas + j]);
    }
    printf("\n");
  }
  free(p);
  return 0;
}