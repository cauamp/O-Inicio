#include <stdio.h>
#define SUCESSO  0

int main(int argc, char ** argv) {
  int x, y, z;

  printf("Insira os valoresdos 3 comprimentos \n");
  scanf(" %d \n %d \n %d", &x, &y, &z);

  if( (x < y + z) && (y < z + x) && (z < x + y)){
      printf("Eh um triangulo !");
  }
  else
  {
      printf("Nao eh um triangulo");
  }
  

  return SUCESSO;
}