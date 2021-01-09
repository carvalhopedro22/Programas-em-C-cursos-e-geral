#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  int x,y,tam;
  char nome[30];
  printf("Digite uma palavra: ");
  fgets(nome,30,stdin);
  tam = strlen(nome);
  printf("\nA palavra de tras pra frente é: ");
  for (x = tam-1; x >= 0; x--){
     printf("%c",nome[x]);
  }
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
struct aluno{
  int matricula;
  char nome[50];
  double n1,n2,n3;
  double media;
};
int main(){
  struct aluno a[5];
  double maior = 0;
  int posaluno;
  for(int i = 0; i < 5; i++){
    printf("Digite a matricula: ");
    scanf("%d",&a[i].matricula);
    getchar();
    printf("Digite o nome do aluno: ");
    fgets(a[i].nome,50,stdin);
    printf("Digite as tres notas: ");
    scanf("%lf %lf %lf",&a[i].n1,&a[i].n2,&a[i].n3);
    a[i].media = (a[i].n1 + a[i].n2 + a[i].n3)/3;
    printf("Media: %.2lf\n",a[i].media);
    printf("\n");
  }
  for(int i = 0; i < 5; i++){
    if(i == 0){
      maior = a[i].media;
    }
    if(a[i].media > maior){
      maior = a[i].media; 
      posaluno = i;
    }
  }
  printf("Maior media foi do aluno %s com valor %.2lf\n",a[posaluno].nome,maior);
  return 0;
}