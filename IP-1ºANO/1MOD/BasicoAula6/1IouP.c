#include <stdio.h>
#include <math.h>
#define SUCESSO  0

int main(int argc, char ** argv) {

  int numero;
  numero = 1;

  printf("Insira um numero \n");
  scanf("%d", &numero);

  if ((numero %2 == 1)){
      printf("O numero eh impar");
  }
  else {
      printf("O numero eh par");
  }

  return SUCESSO;
}