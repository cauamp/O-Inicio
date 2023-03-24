#include <stdio.h>
#define SUCESSO 0

int main(int argc, char ** argv) {
  float salario_atual = 0 ;
  float porcent = 0 ;
  float novo_salario = 0 ;
  float aumento = 0 ;

  printf("Insira o salario Atual");
  scanf("%f",&salario_atual);
  printf("Insira a porcentagem de aumento");
  scanf("%f",&porcent);

  novo_salario = (salario_atual + (salario_atual/porcent));
  aumento = (novo_salario - salario_atual);

  printf("O novo salario sera de: %.2f \n", novo_salario);

  printf("O aumento foi de %.2f",aumento);

return SUCESSO;
}