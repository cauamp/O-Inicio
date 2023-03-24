#include <stdio.h>
#define SUCESSO  0

int main(int argc, char ** argv) {
    int i;
    char string[50];

    printf("Digite uma frase com todas letras minusculas \n");
    fgets(string, 50, stdin);

    string[0]= string[0]-32;

    for(i=0; string[i] !='\0'; i++){
        if(string[i]!=' '&& string[i-1]==' '){
            string[i]= string[i]-32;
        }
    }

    printf("\n %s", string);



  return SUCESSO;
}