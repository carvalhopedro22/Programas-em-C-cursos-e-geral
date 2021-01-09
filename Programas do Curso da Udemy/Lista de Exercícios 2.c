#include <stdio.h>
int main(void) {
  int vetorA [5], vetorB[5];
  for(int i = 0; i < 5; i++){
    printf("Digite os valores do vetor A \n");
    scanf("%d",&vetorA[i]);
    printf("O vetor A é %d \n",vetorA[i]);
    vetorB[i] = vetorA[i] * vetorA[i];
    printf("O veotr B é %d \n",vetorB[i]);
  }
  return 0;
}


#include <stdio.h>
int main(void) {
  int vetorA [5], vetorB[5], vetorC[10];
  for(int i = 0; i < 5; i++){
    printf("Digite os valores do vetor A \n");
    scanf("%d",&vetorA[i]);
    printf("O vetor A é %d \n",vetorA[i]);
    vetorC[i] = vetorA[i];
  }  
  for(int j = 0; j < 5; j++){ 
    printf("Digite os valores do vetor B \n");
    scanf("%d",&vetorB[j]);
    printf("O vetor B é %d \n",vetorB[j]);
    vetorC[j + 5] = vetorB[j];
}
  for(int x = 0; x < 10; x++){  
    printf("O vetor C é %d \n",vetorC[x]);   
  }
  return 0;
}


#include <stdio.h>
int main(void) {
  int vetorA [10], num;
  for(int i = 1; i <= 10; i++){
    printf("Digite um numero \n");
    scanf("%d",&num);
    vetorA[i] = num * i; 
    printf("O vetor A é formado por %d * %d = %d\n",num,i,vetorA[i]); 
  }   
  return 0;
}

#include <stdio.h>
int main(void) {
  int vetorA[5],vetorB[5];
  for(int i = 0; i < 5; i++){
    printf("Digite os valores do vetor A \n");
    scanf("%d",&vetorA[i]);
    vetorB[5-i] = vetorA[i];
    printf("O vetor B é %d\n",vetorB[i]);  
  }    
  return 0;
}