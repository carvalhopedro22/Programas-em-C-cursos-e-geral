#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10],i,pos,ult,aux;
    int menor = 0,entre = 0,maior = 0;
    for(i = 0; i < 10; i++){
        printf("Digite as idades dos alunos \n");
        scanf("%d",&vetor[i]);
    }
    pos = 0;
    ult = 20;
    while(ult != 0){
        while(pos != ult){
            if(vetor[pos] > vetor[pos + 1]){
                aux = vetor[pos];
                vetor[pos] = vetor[pos + 1];
                vetor[pos + 1] = aux;
            }
            pos = pos + 1;
        }
        pos = 0;
        ult = ult - 1;
    }
    for(i = 0; i < 10; i++){
        if(vetor[i] < 13){
            menor ++;
        }else if(vetor[i] >= 13 && vetor[i] < 15){
            entre ++;
        }else{
            if(vetor[i] >= 15){
                maior ++;
            }
        }
        printf("Elemento %d do vetor tem o valor %d\n",i,vetor[i]);
    }
    printf("Quantidade de menores de 13 anos %d\n",menor);
    printf("Quantidade de idades entre 13 e 15 %d\n",entre);
    printf("Quantidade de maiores de 15 anos %d\n",maior);
    return 0;
}