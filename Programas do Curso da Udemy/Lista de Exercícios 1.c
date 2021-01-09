#include <stdio.h>
int main(void) {
  int A,B,C;
  printf("Digite os valores do lado do triangulo \n");
  scanf("%d %d %d",&A,&B,&C);
  if(A<B+C &&  B<A+C && C<A+B){
    printf("Os lados não formam um triangulo\n");
  }else if (A==B||A==C||B==C){
    printf("Triangulo isosceles \n");
  }else if (A != B && B != C ){
    printf("Triangulo escaleno \n");
  }else{
    printf("Triangulo equilatero \n");
  }
  return 0;
}


#include <stdio.h>
int main(void) {
  int x,y;
  scanf("%d %d",&x,&y);
  if(x > 0 && y > 0){
    printf("Primeiro quadrante \n");
  }else if(x > 0 && y < 0){
    printf("Quarto quadrante \n");
  }else if(x < 0 && y < 0){
    printf("Terceiro quadrante \n");
  }else{
    printf("Segundo quadrante \n");
  }
  return 0;
}


#include <stdio.h>
int main(void) {
  int coeficiente;
  scanf("%d",&coeficiente);
  if(coeficiente >= 0 && coeficiente <30){
    printf("Acefalo \n");
  }else if(coeficiente >= 30 && coeficiente < 50){
    printf("Debil mental \n");
  }else if(coeficiente >= 50 && coeficiente < 70){
    printf("Regular \n");
  }else if(coeficiente >= 70 && coeficiente < 100){
    printf("Normal \n");
  }else{
    printf("Genio \n");
  }
  return 0;
}


#include <stdio.h>
int main(void) {
  int n1,n2,n3,media;
  scanf("%d %d %d",&n1,&n2,&n3);
  media = (n1 + n2 + n3)/3;
  if (media >= 0 && media < 4){
    printf("Reprovado \n");
  }else if(media >= 4 && media <6){
    printf("Recuperação \n");
  }else if(media >=6 && media <9){
    printf("Satisfatorio \n");
  }else{
    printf("plenamente satisfatorio \n");
  }
  return 0;
}