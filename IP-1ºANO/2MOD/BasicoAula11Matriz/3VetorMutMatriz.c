#include <stdio.h>
#define SUCESSO 0
#define NLINHAS 5
#define NCOLUNAS 5
#define VETORMAX 5

void scanfM(int matriz[NLINHAS][NCOLUNAS])
{
    int i, j;
    printf("\nDigite valor para os elementos da matriz\n\n");

    for (i = 0; i < NLINHAS; i++)
        for (j = 0; j < NCOLUNAS; j++)
        {
            printf("\nElemento[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
}

void mutiplicacao(int matriz[NLINHAS][NCOLUNAS], int vetor[5])
{
    int i, j, x, resultado;
    for (i = 0; i < NLINHAS; i++)
        for (j = 0; j < NCOLUNAS; j++)
        {
            for (x = 0; x < VETORMAX; x++)
            {
                resultado= vetor[x]*matriz[i][j];
                printf("\nElemento[%d][%d]*vetor[%d] = ", i, j, x);
                printf("%d \n", resultado);
            }
        }
}
int main(int argc, char **argv)
{
    int matriz[NLINHAS][NCOLUNAS], vetor[VETORMAX], i;
    scanfM(matriz);

    for (i = 0; i < VETORMAX; i++)
    {
        printf("Digite o valor do elemento [%d] do vetor \n", i);
        scanf("%d", &vetor[i]);
    }

    mutiplicacao(matriz, vetor);
    return SUCESSO;
}