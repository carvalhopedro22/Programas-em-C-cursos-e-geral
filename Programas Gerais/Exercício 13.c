#include <stdio.h>
int main() {
  int num;
  printf("Digite um numero entre 1 e 10: ");
  scanf("%d",&num);

  while(num < 1 || num > 10){
    printf("Digite um numero entre 1 e 10: ");
    scanf("%d",&num);
  }
  for(int i = 1; i <= 10; i++){
    printf("%d X %d = %d\n",num,i,(num*i));
  }
  return 0;
}