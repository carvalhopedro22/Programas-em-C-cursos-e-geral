#include <stdio.h>

int main() {
  char nome;
  char senha;

  printf("Digite seu nome: ");
  getc(stdin);

  printf("Digite sua senha: ");
  getc(stdin);

  while(!strcmp(&nome,&senha)){
    printf("Nome de usuario e senha devem ser diferentes: ");
    printf("Escreva o nome: ");
    getc(stdin);
    printf("Digite sua senha: ");
    getc(stdin);
  }
  return 0;
}