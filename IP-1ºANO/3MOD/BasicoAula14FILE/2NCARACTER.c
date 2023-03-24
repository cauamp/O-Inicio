#include <stdio.h>
#include <string.h>
#define SUCESSO 0
int conta_Nlinhas(FILE *arquivo)
{

    char linha = '\n';
    int count = 0, aux, i;
    char txt[200];

    fread(&txt, sizeof(char), 200, arquivo);

    aux = strlen(txt);

    for (i = 0; i < aux; i++)
    {
        if (txt[i] != '\n' && txt[i] != ' ')
        {
            count++;
        }
    }

    return (count);
}

int main(int argc, char **argv)
{

    FILE *arq;
    int nLinhas = 0;
    arq = fopen("Nlinha.txt", "r");

    if (arq == NULL)
    {
        fprintf(stderr, "Falha ao abrir Arquivo");
    }
    nLinhas = conta_Nlinhas(arq);

    printf("Numero de caracteres : %d\n", nLinhas);
    fclose(arq);
    return SUCESSO;
}