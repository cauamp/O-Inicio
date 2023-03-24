#include <stdio.h>
#include <math.h>
#define SUCESSO  0

int main(int argc, char ** argv) {
  
  float E=1, resultado=0;
  int N , i;
  

  printf("Insira o valor de N \n");
  scanf("%d", &N);


  for(i=1; N>=i; i++){
    E = E / i;
    resultado = E + resultado;
  }

  printf("E= %.4f", resultado);

  return SUCESSO;
}