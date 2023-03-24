#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define SUCESSO 0

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

void PreencheMatrizComRandon(int **matriz, int nLinhas, int nColunas)
{

    int i, j;

    for (i = 0; i < nLinhas; i++)
    {
        for (j = 0; j < nColunas; j++)
        {
            matriz[i][j] = rand() % 100;
        }
    }
}

void ImprimeMatriz(int **matriz, int nLinhas, int nColunas)
{

    int i, j;
    for (i = 0; i < nLinhas; i++)
    {
        for (j = 0; j < nColunas; j++)
        {
            printf("%.3d  ", matriz[i][j] + 0);
        }
        printf("\n");
    }
    printf("\n");
}

void SomaDasMatrizes(int **matriz1, int **matriz2, int **matriz3, int tamanhoDAmatriz)
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

void MultiplicacaoDasMatrizes(int **matriz1, int **matriz2, int **matriz3, int nLinhas, int nColunas)
{

    int i, j;

    for (i = 0; i < nLinhas; i++)
    {
        {
            for (j = 0; j < nColunas; j++)
                matriz3[i][j] = matriz1[i][j] * matriz2[i][j];
        }
    }
}

void MatrizTransposta(int **matriz, int **matriz_transposta, int nLinhas, int nColunas)
{

    int i, j;

    for (i = 0; i < nLinhas; i++)
    {

        for (j = 0; j < nColunas; j++)
        {

            matriz_transposta[j][i] = matriz[i][j];
        }
    }
}

void DetMatriz(int **matriz, int nLinhas)
{

    int i = 0, j = 0, k = 0;
    double fator = 0;
    double t = 0;
    int conta = 0;

    for (i = 0; i < nLinhas - 1; i++)
    {
        if (matriz[i][i] == 0)
        {
            for (k = i; k < nLinhas; k++)
            {
                if (matriz[k][i] != 0)
                {
                    for (j = 0; j < nLinhas; j++)
                    {
                        t = matriz[i][j];
                        matriz[i][j] = matriz[k][j];
                        matriz[k][j] = t;
                    }
                    k = nLinhas;
                }
            }
            conta++;
        }

        if (matriz[i][i] != 0)
        {
            for (k = i + 1; k < nLinhas; k++)
            {
                fator = -1.0 * matriz[k][i] / matriz[i][i];
                for (j = i; j < nLinhas; j++)
                {
                    matriz[k][j] = matriz[k][j] + (fator * matriz[i][j]);
                }
            }
        }
    }
    t = 1.0;

    for (i = 0; i < nLinhas; i++)
    {
        t *= matriz[i][i];
    }

    printf("\nDeterminante da matriz: ");
    if (conta % 2 == 0)
        printf("%8.3f \n", t);
    else
        printf("%8.3f \n", -1.0 * t);
}

void FreeMatriz(int **matriz, int nLinhas)
{

    int i;

    for (i = 0; i < nLinhas; i++)
    {

        free(matriz[i]);
    }

    free(matriz);
}

int main(int argc, char **argv)
{
    int n1, n2, m1, m2, **M1, **M2, operacao = 1, **Matriz_com_soma, **Matriz_produto, **Matriz_transposta;
    srand(time(NULL));

    do
    {
        printf("Digite o valor de n1 (2:4): ");
        scanf("%d", &n1);

        if (n1 < 2 || n1 > 4)
        {
            printf("VALOR INVALIDO!\n\n");
        }

    } while (n1 < 2 || n1 > 4);

    do
    {
        printf("Digite o valor de m1 (2:4): ");
        scanf("%d", &m1);

        if (m1 < 2 || m1 > 4)
        {
            printf("VALOR INVALIDO!\n\n");
        }

    } while (m1 < 2 || m1 > 4);

    do
    {
        printf("Digite o valor de n2 (2:4): ");
        scanf("%d", &n2);

        if (n2 < 2 || n2 > 4)
        {
            printf("VALOR INVALIDO!\n\n");
        }

    } while (n2 < 2 || n2 > 4);

    do
    {
        printf("Digite o valor de m2 (2:4): ");
        scanf("%d", &m2);

        if (m2 < 2 || m2 > 4)
        {
            printf("VALOR INVALIDO!\n\n");
        }

    } while (m2 < 2 || m2 > 4);

    M1 = AlocaMatrizInt(n1, m1);
    M2 = AlocaMatrizInt(n2, m2);

    PreencheMatrizComRandon(M1, n1, m1);
    PreencheMatrizComRandon(M2, n2, m2);

    do
    {
        setbuf(stdin, NULL);
        printf("\n---------------------------------------------MENU---------------------------------------------\n\n");
        printf("Digite o numero da operacao que deseja executar:\n(1) M1 + M2\n(2) M1 * M2\n(3) M2 * M1\n(4) M2^T\n(5) M1^T\n(6) det(M1)\n(7) det(M2)\n(0) Sair\n\n");
        scanf("%d", &operacao);
        printf("\n\n");
        system("cls");
        printf("\nOperacao %d:\n", operacao);
        switch (operacao)
        {
        case 0:
        {
            system("cls");
            printf("\n\nVoltando ao menu principal.");
            break;
        }
        case 1:

            printf("\nMatriz M1: \n");
            ImprimeMatriz(M1, n1, m1);
            printf("Matriz M2: \n");
            ImprimeMatriz(M2, n2, m2);

            if (n1 == n2 && m1 == m2 && n1 == m1 && n2 == m2)
            {

                Matriz_com_soma = AlocaMatrizInt(n1, m1);
                SomaDasMatrizes(M1, M2, Matriz_com_soma, n1);
                printf("A soma da Matriz M1 com a Matriz M2 eh:\n");
                ImprimeMatriz(Matriz_com_soma, n1, m1);
            }
            else
            {

                printf("\nAs matrizes digitadas nao sao quadradas! Impossivel realizar a soma.\n");
                break;
            }
            FreeMatriz(Matriz_com_soma, n1);
            break;
        case 2:
        {
            printf("\nMatriz M1: \n");
            ImprimeMatriz(M1, n1, m1);
            printf("Matriz M2: \n");
            ImprimeMatriz(M2, n2, m1);

            if (m1 == n2)
            {

                Matriz_produto = AlocaMatrizInt(n1, m2);
                MultiplicacaoDasMatrizes(M1, M2, Matriz_produto, n1, m2);
                printf("O produto de M1 com M2 eh:\n");
                ImprimeMatriz(Matriz_produto, n1, m1);
            }
            else
            {

                printf("\nAs matrizes digitadas nao podem ser multiplicadas uma pela outra.\n");
                break;
            }
            FreeMatriz(Matriz_produto, n1);
            break;
        }
        case 3:
        {
            printf("\nMatriz M1: \n");
            ImprimeMatriz(M1, n1, m1);
            printf("Matriz M2: \n");
            ImprimeMatriz(M2, n2, m1);

            if (m2 == n1)
            {

                Matriz_produto = AlocaMatrizInt(n2, m1);
                MultiplicacaoDasMatrizes(M1, M2, Matriz_produto, n2, m1);
                printf("O produto de M1 com M2 eh:\n");
                ImprimeMatriz(Matriz_produto, n1, m1);
            }
            else
            {

                printf("\nAs matrizes digitadas nao podem ser multiplicadas uma pela outra.\n");
                break;
            }
            FreeMatriz(Matriz_produto, n2);
            break;
        }
        case 4:
        {
            printf("\nMatriz M2:\n\n");
            ImprimeMatriz(M2, n2, m2);
            Matriz_transposta = AlocaMatrizInt(m2, n2);
            MatrizTransposta(M2, Matriz_transposta, n2, m2);
            printf("Matriz M2 transposta:\n\n");
            ImprimeMatriz(Matriz_transposta, m2, n2);
            FreeMatriz(Matriz_transposta, m2);
            break;
        }
        case 5:
        {
            printf("\nMatriz M1:\n\n");
            ImprimeMatriz(M1, n1, m1);
            Matriz_transposta = AlocaMatrizInt(m1, n1);
            MatrizTransposta(M1, Matriz_transposta, n1, m1);
            printf("Matriz M1 transposta:\n\n");
            ImprimeMatriz(Matriz_transposta, m1, n1);
            FreeMatriz(Matriz_transposta, m1);
            break;
        }
        case 6:
        {
            printf("\nMatriz M1: \n");
            ImprimeMatriz(M1, n1, m1);
            DetMatriz(M1, n1);
            break;
        }
        case 7:
        {

            printf("Matriz M2: \n");
            ImprimeMatriz(M2, n2, m2);
            DetMatriz(M2, n2);
            break;
        }

        default:
        {
            printf("Voce escolheu uma operacao invalida.\n");
        }
        }

        printf("\n\n----------------------------------------------------------------------------------------------\n\n\n\n\n");

    } while (operacao != 0);

    FreeMatriz(M1, n1);
    FreeMatriz(M2, n2);

    return SUCESSO;
}