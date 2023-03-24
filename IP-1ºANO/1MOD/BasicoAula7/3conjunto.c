#include <stdio.h>
#define SUCESSO  0

int main(int argc, char ** argv) {
  
  int conjunto, menor, maior;
  menor = __INT_MAX__;
  
  while (conjunto >0)
  {
      printf("Insira um numero \n");
      scanf("%d", &conjunto);

      if (conjunto < menor && conjunto >0)
      {
          menor = conjunto;
      }

      else if (conjunto > maior) {
          maior = conjunto;
      }
    
      
  }

  printf("O maior numero do conjunto eh: %d e o menor eh: %d", maior, menor);
  
  return SUCESSO;
}
