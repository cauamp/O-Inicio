#include <stdio.h>
#define SUCESSO  0


int main(int argc, char ** argv) {
  
  int i=0, cont = 0;
  char string[50];

  printf("Digite uma frase \n");
  fgets(string, 50, stdin);



  while( string[i] !='\0'){
      if (string[i] == ' '){
          cont ++; 
      }
      i++;
  }

  printf("O numero de espacos em branco sao: %d", cont);

  return SUCESSO;
}