#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO_MAX_FRASE 50 + 1
#define MIN_ESPACO 5



void exercicio1()
{
/*
Questao 1
Faca um programa em C para ler uma frase de no mınimo 5 palavras. O programa deve
mostrar a frase original e a frase INVERTIDA (de tr ́as para frente). Por exemplo:
Testando uma frase
esarf amu odnatset
*/
    char frase[TAMANHO_MAX_FRASE], frase_inv[TAMANHO_MAX_FRASE];
    int i, t, j, espaco = 0;

    //coleta de dados

    printf("Digite uma frase, com cinco ou mais espacos, para imprimi-la de tras para frente: \n");

    
    fgets(frase, TAMANHO_MAX_FRASE, stdin);

//verificando os espaços
    for (i = 0; i < strlen(frase); i++)
    {
        if (frase[i] == ' ')
        {
            espaco++;
        }
        if (frase[i] == '\n')
        {
            frase[i] = frase[i + 1];
           
        }
    }
//conferindo os espaços e iniciando os procedimentos
    if (espaco >= MIN_ESPACO)
    {

        t = strlen(frase);

        //procedimentos
        for (i = 0; i < t; i++)
        {

            j = t - i - 1;

            frase_inv[i] = frase[j];
            //printf("%d %c \n", i, str[j]);
        };
        //finalizando a frase
        
        frase_inv[t] = '\0';

        //resultados
        
        printf(" A frase digitada:  '%s' \n A frase invertida: '%s'\n Tamanho da frase: %d", frase,  frase_inv, t);
    }
    else
    {
        printf("A frase digitada possui menos de cinco espacos. Voltando para o menu de exercicios");
    }
}



int main(){
    exercicio1();
    return 0;
}