#include <stdio.h>
#define SUCESSO 0 

int main(int argc, char ** argv) {
  float peso_total = 10;
  float nota_final = 0;
  float n1 = 0;
  float n2 = 0;
  float n3 = 0;
  printf ("Insira a nota da primeira prova");
  scanf("%f",&n1);
  printf ("Insira a nota da segunda prova");
  scanf("%f",&n2);
  printf ("Insira a nota da terceira prova");
  scanf("%f",&n3);
  
  nota_final = ((n1*4 + n2*3 +n2*3)/peso_total);

  printf ("A nota final foi de: %.2f", nota_final);

return SUCESSO;
}