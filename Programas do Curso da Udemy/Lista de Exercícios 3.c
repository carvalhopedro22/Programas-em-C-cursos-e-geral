#include <stdio.h>
#include <stdlib.h>
int main(){
    float matrizA[5][3], matrizB[5][3], matrizC[5][3];
    float soma;
    int i,j; 
    for(i = 0; i < 5; i++){ 
        for(j = 0; j < 3; j++){ 
            printf("Digite os valores %d da matriz A: %d: ",j+1,i+1);
            scanf("%f",&matrizA[i][j]);
        }
    }
    for(i = 0; i < 5; i++){ 
        for(j = 0; j < 3; j++){ 
            printf("Digite os valores %d da matriz B: %d: ",j+1,i+1);
            scanf("%f",&matrizB[i][j]);
        }
    }
    for(i = 0; i < 5; i++){
        soma = 0;
        for(j = 0; j < 3; j++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
    for(i = 0; i < 5; i++){
      for(j = 0; j < 3; j++){
        printf("A matriz soma foi de %.2f\n",matrizC[i][j]);
      }
    }
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
int main(){
    float matriz[6][6];
    int i,j;
    float soma; 
    for(i = 0; i < 6; i++){ 
        for(j = 0; j < 6; j++){ 
            printf("Digite os valores %d da matriz: %d: ",j+1,i+1);
            scanf("%f",&matriz[i][j]);
        }
    }
    for(i = 0; i < 6; i++){
      soma = 0; 
        for(j = 0; j < 6; j++){
          soma = matriz[0][0] + matriz[1][1] + matriz[2][2] + matriz[3][3] + matriz[4][4] + matriz[5][5];
        }
    }
    printf("A soma foi de %.2f\n",soma);         
    return 0;
}