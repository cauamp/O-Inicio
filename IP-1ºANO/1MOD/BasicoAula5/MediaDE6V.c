#include <stdio.h>
#define SUCESSO 0 

int main(int argc, char ** argv){
    float n1 = 0 ;
    float n2 = 0 ;
    float n3 = 0 ;
    float n4 = 0 ;
    float n5 = 0 ;
    float n6 = 0 ;
    float media_total = 0;
    
  printf("Digite o primeiro valor");
  scanf("%f",&n1);
  printf("Digite o segundo valor");
  scanf("%f",&n2);
  printf("Digite o terceiro valor");
  scanf("%f",&n3);
  printf("Digite o quarto valor");
  scanf("%f",&n4);
  printf("Digite o quinto valor");
  scanf("%f",&n5);
  printf("Digite o sexto valor");
  scanf("%f",&n6);
  

  media_total= ((n1 + n2 + n3 + n4 + n5 + n6 )/6);
  
  printf ("A media eh de: %.f", media_total);
  
  
  return SUCESSO;
}