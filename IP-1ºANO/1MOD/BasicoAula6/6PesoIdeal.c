#include <stdio.h>
#define SUCESSO  0

int main(int argc, char ** argv) {

  float altura, seu_peso, peso_idealM, peso_idealF;
  char sexo;

  printf("Insira seu sexo (H ou M) \n");
  scanf("%c", &sexo);
  printf("Insira sua altura \n");
  scanf("%f", &altura);
  printf("Insira seu peso \n");
  scanf("%f", &seu_peso);

  peso_idealM = ((72.7*altura)-58);
  peso_idealF = ((62.1*altura)-44.7); 

  
   if (sexo = 'H' && seu_peso > peso_idealM){
      printf("Voce esta acima do peso ideal");
  }
  else if (sexo = 'H' && seu_peso < peso_idealM){
      printf("Voce esta abaixo do peso ideal");
  }
 
  else if (sexo = 'M' && seu_peso < peso_idealF){
      printf("Voce esta abaixo do peso ideal");
  }
  else if (sexo = 'M' && seu_peso > peso_idealF){
      printf("Voce esta acima do peso ideal");
  }
  else{
      printf("Voce esta no peso ideal!");
  }
  
  return SUCESSO;
}