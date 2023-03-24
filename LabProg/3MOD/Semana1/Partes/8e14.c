#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <string.h>
#define SUCESSO 0
#define tamanho_matriz 5

int **AlocaMatrizInt(int NumLinhas, int NumColunas)
{
    int **matriz;
    int i;

    matriz = (int **)(malloc(NumLinhas * sizeof(int *)));

    for (i = 0; i < NumLinhas; i++)
    {

        matriz[i] = (int *)(malloc(NumColunas * sizeof(int)));
    }
    return matriz;
}

void PreencheMatrizComRandon(int **matriz, int tamanhoDAmatriz)
{

    int i, j;

    for (i = 0; i < tamanhoDAmatriz; i++)
    {
        for (j = 0; j < tamanhoDAmatriz; j++)
        {
            matriz[i][j] = rand() % 100;
        }
    }
}

void ImprimeMatrizQuadrada(int **matriz, int tamanhoDAmatriz)
{

    int i, j;
    for (i = 0; i < tamanhoDAmatriz; i++)
    {
        for (j = 0; j < tamanhoDAmatriz; j++)
        {
            printf("%.3d  ", matriz[i][j] + 0);
        }
        printf("\n");
    }
    printf("\n");
}

void SomaDasMatriz(int **matriz1, int **matriz2, int **matriz3, int tamanhoDAmatriz)
{

    int i, j;
    for (i = 0; i < tamanhoDAmatriz; i++)
    {
        {
            for (j = 0; j < tamanhoDAmatriz; j++)
                matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void exercicio08()
{

    int **m1, **m2, **m3;
    int i, j, tam;
    tam = 0;
    do
    {
        printf("\nInsira um valor para o tamanho da matriz quadrada [2:10]:  ");
        scanf("%d", &tam);
        if (tam < 2 || tam > 10)
        {
            printf("\nVALOR INVALIDO\n");
        }
        
    } while (tam < 2 || tam > 10);

    m1 = AlocaMatrizInt(tam, tam);
    m2 = AlocaMatrizInt(tam, tam);
    m3 = AlocaMatrizInt(tam, tam);

    PreencheMatrizComRandon(m1, tam);
    PreencheMatrizComRandon(m2, tam);

    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            m3[i][j] = 0;
        }
    }

    printf("Matriz 1: \n\n");
    ImprimeMatrizQuadrada(m1, tam);
    printf("Matriz 2: \n\n");
    ImprimeMatrizQuadrada(m2, tam);
    printf("Matriz 3 (vazia): \n\n");
    ImprimeMatrizQuadrada(m3, tam);
    printf("\n");
    SomaDasMatriz(m1, m2, m3, tam);
    printf("Soma das matrizes 1 e 2 (matriz 3): \n\n");
    ImprimeMatrizQuadrada(m3, tam);

    for (i = 0; i < tam; i++)
    {
        free(m1[i]);
        free(m2[i]);
        free(m3[i]);
    }

    free(m1);
    free(m2);
    free(m3);
}

int *alocaVetoresInt(int tamanhoVetor)
{
    int *v;
    v = (int *)(malloc(tamanhoVetor * sizeof(int)));
    return v;
}

void *troca(int *v, int *u, int N)
{

    int i;

    for (i = N; i > 0; i--)
    {

        u[N - i] = v[i - 1];
    }
}

void exercicio14()
{

    int *v, *u, N, i;

    N = (rand() % 98) + 2;

    v = alocaVetoresInt(N);
    u = alocaVetoresInt(N);

    for (i = 0; i < N; i++)
    {

        v[i] = rand() % 100;
    }

    for (i = 0; i < N; i++)
    {

        u[i] = 0;
    }

    printf("Vetor u (com zeros): ");
    for (i = 0; i < N; i++)
    {
        printf("%d ", u[i]);
    }
    printf("\n\n");

    troca(v, u, N);

    printf("Vetor v: ");
    for (i = 0; i < N; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n\n");

    printf("Vetor u: ");
    for (i = 0; i < N; i++)
    {
        printf("%d ", u[i]);
    }
    printf("\n\n");
    free(v);
    free(u);
}

int main(int argc, char **argv)
{
    srand(time(NULL));

    int nExercicio = 1;

    do
    {
        printf("\n\nDigite o numero do exercicio que deseja executar (8 ou 14) ou 0 para sair: ");
        scanf("%d", &nExercicio);
        printf("\n\n\n");

        switch (nExercicio)
        {
        case 0:
            printf("\n\nPrograma Encerrado.");
            break;

        case 8:
        {
            exercicio08();
            break;
        }

        case 14:
        {
            exercicio14();
            break;
        }

        default:
        {
            printf("Voce escolheu um exercicio invalido.\n");
        }
        }

        printf("\n\n\n");

    } while (nExercicio != 0);

    return SUCESSO;
}