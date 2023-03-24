#include <stdio.h>
#define SUCESSO  0


int main(int argc, char ** argv) {
    int i=0;
    char frase[50];

    printf("Digite uma frase \n");
    fgets(frase, 50, stdin);
    printf("\n");
    while(frase[i]!='\0'){
        if(frase[i]!=' '){
            printf("%c", frase[i]);
        }
        i++;
    }
  return SUCESSO;
}