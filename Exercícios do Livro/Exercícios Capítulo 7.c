#include <stdio.h>
int main(void) {
  int matriz[3][3];
  int i,j,menor;
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      printf("Digite o elemento %d da matriz: %d: ",j+1,i+1);
      scanf("%d",&matriz[i][j]);
      }
    }
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      if (i == 0 && j == 0){
          menor=matriz[0][0];
      }
      if(matriz[i][j] < menor){
        menor = matriz[i][j];
      }
    }
  }
  printf("O menor elemento vale %d\n",menor);  
  return 0;
}


#include <stdio.h>
int main(void) {
  int matriz[3][3];
  int i,j,maior = matriz[0][0], posmaiori = 0, posmaiorj = 0;
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      printf("Digite o elemento [%d][%d] da matriz: ",i,j);
      scanf("%d",&matriz[i][j]);
    }
  }
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      if (i == 0 && j == 0){
          maior=matriz[0][0];
      }
      if(matriz[i][j] > maior){
        maior = matriz[i][j];
        posmaiori = i;
        posmaiorj = j;
      }
    }
  }
  printf("O maior elemento vale %d e esta localizado em %d %d\n",maior, posmaiori, posmaiorj);  
  return 0;
}


#include <stdio.h>
int main(void) {
  int matriz[3][3];
  int i,j;
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      printf("Digite o elemento [%d][%d] da matriz: ",i,j);
      scanf("%d",&matriz[i][j]);
    }
  }
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      printf("%d ",matriz[i][j]);
    }
    printf("\n");
  }
  return 0;
}


#include <stdio.h>
int main(void) {
  int matriz[3][3];
  int i,j,cont = 0;
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      printf("Digite o elemento [%d][%d] da matriz: ",i,j);
      scanf("%d",&matriz[i][j]);
    }
  }
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      if(matriz[i][j]>10){
        cont++;
      }
    }
  }
  printf("A quantidade é de %d\n",cont);
  return 0;
}


#include <stdio.h>
int main(void) {
  int matriz[3][3];
  int i,j,soma = 0;
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      printf("Digite o elemento [%d][%d] da matriz: ",i,j);
      scanf("%d",&matriz[i][j]);
    }
  }
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
     soma = matriz[0][0] + matriz[1][1] + matriz[2][2];
    }
  }
  printf("A soma é de %d\n",soma);
  return 0;
}


#include <stdio.h>
int main(void) {
  int matriz[3][3];
  int i,j,soma = 0;
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      printf("Digite o elemento [%d][%d] da matriz: ",i,j);
      scanf("%d",&matriz[i][j]);
    }
  }
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
     soma = matriz[0][2] + matriz[1][1] + matriz[2][0];
    }
  }
  printf("A soma é de %d\n",soma);
  return 0;
}


#include <stdio.h>
int main(void) {
  int A[3][3];
  int i,j;
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      printf("Digite o elemento [%d][%d] da matriz: ",i,j);
      scanf("%d",&A[i][j]);
    }
  }
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      if(i < j){
        A[i][j] = 2 * i + 7 * j - 2;
      }else if(i == j){
        A[i][j] = 3 * (i * i) - 1;
      }else if(i > j){
        A[i][j] = 4 * (i * i * i) + 5 * (j * j) + 1;
      }
      printf("%d ",A[i][j]);
    }
    printf("\n"); 
  }
  return 0;
}


#include <stdio.h>
int main(void) {
  int A[3][3];
  int i,j,vet1,vet2,vet3;
  int vetor[3] = {vet1,vet2,vet3};
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      printf("Digite o elemento [%d][%d] da matriz: ",i,j);
      scanf("%d",&A[i][j]);
    }
  }
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      vet1 = A[0][0] + A[1][0] + A[2][0];
      vet2 = A[0][1] + A[1][1] + A[2][1];
      vet3 = A[0][2] + A[1][2] + A[2][2];
    }
  }
    printf("O vetor resultante é %d %d %d ",vet1,vet2,vet3);
  return 0;
}


#include <stdio.h>
int main(void) {
  int A[3][3];
  int i, j, soma = 0;
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      printf("Digite as notas [%d][%d] da matriz: ",i,j);
      scanf("%d",&A[i][j]);
    }
  }
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      if(j > i){
        soma = soma + A[i][j];
      }
    }
  }
  printf("A soma dos elementos acima da diagonal é: %d ",soma);
  return 0;
}


#include <stdio.h>
int main(void) {
  int A[3][3];
  int i, j, soma = 0;
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      printf("Digite as notas [%d][%d] da matriz: ",i,j);
      scanf("%d",&A[i][j]);
    }
  }
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      if(i > j){
        soma = soma + A[i][j];
      }
    }
  }
  printf("A soma dos elementos abaixo da diagonal é: %d ",soma);
  return 0;
}


#include <stdio.h>
int main(void) {
  int A[3][3];
  int i, j, soma = 0;
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      printf("Digite as notas [%d][%d] da matriz: ",i,j);
      scanf("%d",&A[i][j]);
    }
  }
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      printf("%d ",A[i][j]);
    }
    printf("\n");
  }
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      if(i != j && i + j != 2){
        soma = soma + A[i][j];
      }
    }
  }
  printf("A soma dos elementos fora das diagonais é de: %d",soma);
  return 0;
}


#include <stdio.h>
int main(void) {
  int A[3][3];
  int i, j, soma1 = 0, soma2 = 0;
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      printf("Digite as notas [%d][%d] da matriz: ",i,j);
      scanf("%d",&A[i][j]);
    }
  }
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      printf("%d ",A[i][j]);
    }
    printf("\n");
  }
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      if(i == j || i + j == 2){
        soma1 = soma1 + A[i][j];
      }
    }
  }
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      if(i != j && i + j != 2){
        soma2 = soma2 + A[i][j];
      }
    }
  }
  printf("A soma dos elementos das diagonais é de: %d\n",soma1);
  printf("A soma dos elementos fora das diagonais é de: %d\n",soma2);
  return 0;
}


#include <stdio.h>
int main(void) {
  int A[3][3], B[3][3];
  int i, j, soma1 = 0, soma2 = 0;
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      printf("Digite as notas [%d][%d] da matriz: ",i,j);
      scanf("%d",&A[i][j]);
    }
  }
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      printf("%d ",A[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      B[i][j] = A[i][j] * A[i][j];
    }
  }
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      printf("%d ",B[i][j]);
    }
    printf("\n");
  }
  return 0;
}