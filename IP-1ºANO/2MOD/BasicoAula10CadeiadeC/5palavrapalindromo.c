#include <stdio.h>
#include <string.h>
#define SUCESSO  0

int main(int argc, char ** argv) {
    int i, aux, aux2, contador=0;
    char palavra[101], pala[101];

    printf("Digite uma palavra \n");
    fgets(palavra, 101, stdin);

    strcpy(pala, palavra);
    aux= strlen(palavra)-2;
    aux2= aux;
   

    for(i=0; palavra[i]!='\0'&& i<aux2; i++){   
        if(palavra[i] == pala[aux]){
            contador++;
        }
        aux--;
        
    }

    if (contador==aux2){
        printf("\n A palavra %s eh um palindromo!", palavra);
    }
    else{
        printf("\n A palavra %s nao eh um palindromo!", palavra);
    }
    
    
  return SUCESSO;
}