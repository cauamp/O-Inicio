#include <stdio.h>
#define SUCESSO 0
#define NLINHAS 3
#define NCOLUNAS 3

void scanfM(float matriz[NLINHAS][NCOLUNAS])
{
    int i, j;
    printf("\nDigite valor para os elementos da matriz\n\n");

    for (i = 0; i < NLINHAS; i++)
        for (j = 0; j < NCOLUNAS; j++)
        {
            printf("\nElemento[%d][%d] = ", i, j);
            scanf("%f", &matriz[i][j]);
        }
}

void somaEimprimeMatriz(float matriz[NLINHAS][NCOLUNAS])
{
    int i, j;
    float soma;
    for (i = 0; i < NLINHAS; i++)
    {
        for (j = 0; j < NCOLUNAS; j++)
        {
            soma = soma + matriz[i][j];
        }
    }
    printf("\n\n********************** Resultado ************************ \n\n");
    printf("%.2f", soma);
}
int main(int argc, char **argv)
{
    float matriz[NLINHAS][NCOLUNAS];

    scanfM(matriz);

    somaEimprimeMatriz(matriz);

    return SUCESSO;
}