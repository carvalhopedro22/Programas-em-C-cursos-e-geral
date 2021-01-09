#include <stdio.h>
int main(void){
  float n1,n2,n3,media;
  printf("Digite as notas do aluno: \n");
  scanf("%f %f %f",&n1,&n2,&n3);
  media = (n1 + n2 + n3)/3;
  printf("A media do aluno foi de: %f \n",media);
  return 0;
}