#include <stdio.h>
#define SUCESSO  0

int main(int argc, char ** argv) {
    int i=0, aux=0, len, contador = 0, len2;
    char frase[50], copia[50];

    printf("Digite uma frase \n");
    fgets(frase, 50, stdin);

    

    printf("\n");

//tirando os espaços:
   for(i=0; i < strlen(frase); i++){
        if(frase[i] == ' ') {
            for(aux=i; aux < strlen(frase); aux++)
                frase[aux] = frase[aux+1];
        }
   }

   //analisando se é palindromo
   
   strcpy(copia, frase);
   len= strlen(frase)-2;
    len2= len;

   for(i=0; frase[i]!='\0'&& i<len2; i++){
        if(frase[i] == copia[len]){
            contador++;
        }
        len--;
        
    }

    if (contador==len2){
        printf("\n Eh um palindromo!");
    }
    else{
        printf("\n Nao eh um palindromo!");
    }



  return SUCESSO;
}