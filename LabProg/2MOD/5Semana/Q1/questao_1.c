#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO_MAX_NOME 50 + 1
#define MIN_ESPACO 5



  void exercicio1()
{
/*
Quest ̃ao 1
Faca um programa em C para ler uma frase de no mınimo 5 palavras. O programa deve
mostrar a frase original e a frase INVERTIDA (de tr ́as para frente). Por exemplo:
Testando uma frase
esarf amu odnatset
*/
    char str[TAMANHO_MAX_NOME], str_inv[TAMANHO_MAX_NOME];
    int i, t, j, espaco = 0;

    //coleta de dados

    printf("Digite uma frase, com cinco ou mais espacos, para imprimi-la de tras para frente: \n");

    
    fgets(str, TAMANHO_MAX_NOME, stdin);

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            espaco++;
        }
        if (str[i] == '\n')
        {
            str[i] = str[i + 1];
           
        }
    }

    if (espaco >= MIN_ESPACO)
    {

        t = strlen(str);

        //procedimentos
        for (i = 0; i < t; i++)
        {

            j = t - i - 1;

            str_inv[i] = str[j];
            //printf("%d %c \n", i, str[j]);
        };
        //Removendo caracteres indesejados da string
        
        str_inv[t] = '\0';

        //resultados
        printf(" A string: '%s' \n"
               " A string invertida de tamanho %d : '%s'\n",
               str, t, str_inv);
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