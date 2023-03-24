#include <stdio.h>
#include <string.h>
#define SUCESSO  0

int main(int argc, char ** argv) {
    int i=0; 
    int vogais = 0;
    char string[51];
    
    printf("Digite uma frase \n");
    fgets(string, 51, stdin);

    for(i=0; i<51; i++){
      if ( string[i] == 'i'|| string[i] == 'a' || string[i] == 'e' || string[i] == 'o'|| string[i] == 'u' ){
          vogais++ ;
      }
      }
      
    printf("\nO numero de vogais sao: %i",vogais);

  return SUCESSO;
}