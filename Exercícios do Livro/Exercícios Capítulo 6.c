#include <stdio.h>
int main() {
  int valores[6];
  for(int i = 0; i < 6; i++){
    printf("Digite o %d valores do vetor\n",i+1);
    scanf("%d",&valores[i]);
  }
  for(int i = 0; i < 6; i++){
    printf("O vetor é %d\n",valores[i]);
  }
  return 0;
}


#include <stdio.h>
int main() {
  int vetorA[6],vetorB[6];
  for(int i = 0; i < 6; i++){
    printf("Insira o valor %d do vetor A\n",i+1);
    scanf("%d",&vetorA[i]);
  }
  for(int i = 0; i < 6; i++){
    vetorB[5-i] = vetorA[i];
  }
  for(int i = 0; i < 6; i++){
    printf("O elemento do vetor B é: %d\n",vetorB[i]);
  }
  return 0;
}


#include <stdio.h>
int main() {
  int valores[5],soma = 0, media = 0;
  for(int i = 0; i < 5; i++){
    printf("Insira os valores do vetor\n");
    scanf("%d",&valores[i]);
  }
  for(int i = 0; i < 5; i++){
    soma = soma + valores[i];
    media = soma / 5;
  }
  printf("A media é de %d",media);
  return 0;
}


#include <stdio.h>
int main() {
  int A[6],soma = 0;
  for(int i = 0; i < 6; i++){
    printf("Insira o valor %d do vetor\n",i+1);
    scanf("%d",&A[i]);
  }
  for(int i = 0; i < 6; i++){
    soma = A[0] + A[1] + A[5];
  }
  printf("A soma é de %d\n",soma);
  for(int i = 0; i < 6; i++){
    printf("O elemento %d do vetor é: %d\n",i+1,A[i]);
  }
  return 0;
}


#include <stdio.h>
int main() {
  int vetorA[8],X ,Y, soma = 0;
  for(int i = 0; i < 8; i++){
    printf("Insira o valor %d do vetor A\n",i+1);
    scanf("%d",&vetorA[i]);
  }
  for(int i = 0; i < 8; i++){
    X = vetorA[2];
    Y = vetorA[6];
    soma = X + Y;
  }
    printf("A soma é: %d\n",soma);
  return 0;
}


#include <stdio.h>
int main() {
  int vetorA[10], vetorpar[10], vetorimpar[10],impar = 0,par = 0;
  for(int i = 0; i < 10; i++){
    printf("Insira o valor %d do vetor A\n",i+1);
    scanf("%d",&vetorA[i]);
    if(vetorA[i] % 2 == 0){
      vetorpar[par] = vetorA[i];
      par++;
    }else{
      vetorimpar[impar] = vetorA[i];
      impar++;
    }
  }
  for(int i = 0; i < par; i++){ 
    printf("Os numeros pares sao %d\n",vetorpar[i]);
  }
  for(int i = 0; i < impar; i++){
    printf("Os numeros impares sao %d\n",vetorimpar[i]);
  }
  return 0;
}


#include <stdio.h>
int main() {
  int X[10],maior = 0,menor = 0;
  for(int i = 0; i < 10; i++){
    printf("Insira o valor %d do vetor X\n",i+1);
    scanf("%d",&X[i]);
    if(i == 0){
      maior = X[i]; menor = X[i];
    }
    if(X[i] > maior){
      maior = X[i];
    }
  }for(int i = 0; i < 10; i++){
    if(X[i] < menor){
      menor = X[i];
    }
  } 
  printf("O maior valor é %d\n",maior);
  printf("O menor valor é %d\n",menor);
  return 0;
}


#include <stdio.h>
int main() {
  int X[10], neg = 0, pos = 0, soma = 0, qtdneg = 0;
  for(int i = 0; i < 10; i++){
    printf("Insira o valor %d do vetor X\n",i+1);
    scanf("%d",&X[i]);
    
    if(X[i] > 0){
      soma = soma + X[i];
    }else if(X[i] < 0){
      qtdneg ++;
    }
  } 
  printf("A soma dos positivos é %d\n",soma);
  printf("A quantidade de negativos é %d\n",qtdneg);
  return 0;
}


#include <stdio.h>
int main() {
  int A[10], B[10], C[10];
  for(int i = 0; i < 10; i++){
    printf("Insira o valor %d do vetor A\n",i+1);
    scanf("%d",&A[i]);
  }
  for(int i = 0; i < 10; i++){
    printf("Insira o valor %d do vetor B\n",i+1);
    scanf("%d",&B[i]);
  }
  for(int i = 0; i < 10; i++){
    C[i] = A[i] - B[i];
    printf("Os elementos %d do vetor C sao %d\n",i+1,C[i]);
  }
  return 0;
}


#include <stdio.h>
int main(void) {
  int vetorA [5], vetorB[5];
  for(int i = 0; i < 5; i++){
    printf("Digite os valores do vetor A \n");
    scanf("%d",&vetorA[i]);
  }  
  for(int i = 0; i <5; i++){
    vetorB[i] = vetorA[i] * vetorA[i];
  }
  for(int i = 0; i <5; i++){
    printf("O vetor A é %d \n",vetorA[i]);
  }
  for(int i = 0; i <5; i++){
    printf("O veotr B é %d \n",vetorB[i]);
  }
  return 0;
}