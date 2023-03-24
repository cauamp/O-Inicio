#include <stdio.h>
#define SUCESSO  0

int main(int argc, char ** argv) {
  
  int numero1, numero2;

  printf("Insira os numeros que deseja comparar\n");
  scanf(" %d \n %d", &numero1, &numero2);

  if (numero1>numero2){
      printf("O primeiro numero eh maior");
  }

  else if (numero1<numero2){
      printf("O segundo numero eh mmaior");
  }

  else {
      printf("Os numeros tem o mesmo valor");
  }
  return SUCESSO;
}