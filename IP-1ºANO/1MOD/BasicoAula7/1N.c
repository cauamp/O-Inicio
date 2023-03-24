#include <stdio.h>
#define SUCESSO  0

int main(int argc, char ** argv) {
  
  int N, fatorial, result=1;
  
  printf("Insira o valor de N \n");
  scanf("%d", &N);

  fatorial = N;

  printf("O valor de %d! = ", fatorial);

  do { 
    printf("%d *  ", N);

    N--;
  } while (N >= 1);

  do{
    result = fatorial * result;
    fatorial --;
  } while (fatorial>=1);

  printf("= %d", result);
  
  
  return SUCESSO;
}