#include <stdio.h>
#define SUCESSO 0 

int main(int argc, char ** argv){
    int n1 = 0 ;
    int n2 = 0 ;
    int n3 = 0 ;
    int n4 = 0 ;
    int n5 = 0 ;
    int valor_total;
    
  printf("Digite o primeiro valor");
  scanf("%d",&n1);
  printf("Digite o segundo valor");
  scanf("%d",&n2);
  printf("Digite o terceiro valor");
  scanf("%d",&n3);
  printf("Digite o quarto valor");
  scanf("%d",&n4);
  printf("Digite o quinto valor");
  scanf("%d",&n5);
  

  valor_total = (n1 + n2 + n3 + n4 + n5);
  
  printf ("O valor total é: %.2d", valor_total);
  
  
  return SUCESSO;
}