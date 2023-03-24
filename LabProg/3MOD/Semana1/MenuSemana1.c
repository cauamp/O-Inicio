/*
    TURMA 205

    GRUPO:
    Cauã Magalhães Pereira;
    Fernando Alves de Freitas;
    Pedro Guilherme Andrade Salgado;
    Gabriel Lyan Barbosa de Assis.

*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define SUCESSO 0
#define TAMANHO_MAXIMO_STRING 50 + 1
//--------------------------------------------------------------------------------------------------------------------------------------
void alocaVetorEntre2e10(float *v, int N)
{

    int i;
    float min = 2, max = 10;

    for (i = 0; i < N; i++)
    {
        v[i] = (float)min + rand() * (max - min) / RAND_MAX;
    }
}

float retornaMaiordoVetor(float *v, int N)
{
    int i;
    float maior = v[0];

    for (i = 0; i < N; i++)
    {
        if (v[i] > maior)
        {
            maior = v[i];
        }
    }

    return (maior);
}

void PreencheMatrizExercicio03(int **m, int N)
{
    int i, j;

    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= N; j++)
        {
            if ((i + j) % 2 == 1)
            {
                m[i - 1][j - 1] = i * i;
            }
            else
            {
                m[i - 1][j - 1] = j * j;
            }
        }
    }
}

void calcula_raizes(int a, int b, int c, double *raizes)
{

    double delta;

    delta = pow(b, 2) + (-4 * a * c);

    if (delta > 0)
    {
        raizes[0] = (-b + sqrt(delta)) / (2 * a);
        raizes[1] = (-b - sqrt(delta)) / (2 * a);
    }
    else
    {
        raizes[0] = 0;
        raizes[1] = 0;
    }
}

char **aloca_matriz_caracter(int tam)
{

    char **m;
    int i;
    m = (char **)malloc(tam * sizeof(char *));

    getchar();

    for (i = 0; i < tam; i++)
    {
        m[i] = (char *)malloc(TAMANHO_MAXIMO_STRING * sizeof(char));
    }

    return m;
}

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
            printf("%.3d  ", matriz[i][j]);
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
        for (j = 0; j < tamanhoDAmatriz; j++)
        {
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
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

//--------------------------------------------------------------------------------------------------------------------------------------
void exercicio01()
{
    int N, i;
    float *v;
    printf("Digite uma valor para N: \n  ");
    scanf("%d", &N);
    v = (float *)malloc(N * sizeof(float));

    alocaVetorEntre2e10(v, N);

    for (i = 0; i < N; i++)
    {
        printf("%.2f ", v[i]);
    }
    free(v);
}

void exercicio02()
{
    int N, i;
    float *v, maior;
    do
    {
        printf("Digite uma valor para N:\n[2:20] \n  ");
        scanf("%d", &N);
    } while (N < 2 || N > 20);

    v = (float *)malloc(N * sizeof(float));
    alocaVetorEntre2e10(v, N);

    printf("\n\nVetor alocado: \n");
    for (i = 0; i < N; i++)
    {
        printf("%.2f ", v[i]);
    }

    maior = retornaMaiordoVetor(v, N);
    printf("\n\nO maior valor do vetor eh:  %.2f", maior);

    free(v);
}

void exercicio03()
{
    int N, i, j, **m;

    do
    {
        printf("Digite uma valor para N:\n[2:20] \n  ");
        scanf("%d", &N);
    } while (N < 2 || N > 20);

    m = (int **)malloc(N * sizeof(int *));
    for (i = 0; i < N; i++)
    {
        m[i] = (int *)malloc(N * sizeof(int));
    }

    PreencheMatrizExercicio03(m, N);
    printf("\nMatriz alocada: \n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%5.d ", m[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < N; i++)
    {
        free(m[i]);
    }
    free(m);
}

void exercicio04()
{

    int a, b, c;
    double *raizes;

    raizes = (double *)malloc(2 * sizeof(double));

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);
    printf("\n\n");
    calcula_raizes(a, b, c, raizes);

    if (raizes[0] == 0 && raizes[1] == 0)
    {
        printf("Delta negativo!");
    }
    else
    {
        printf("\nAs raizes da equacao sao: x1 = %.2f e x2 = %.2f\n", raizes[0], raizes[1]);
    }
}

void exercicio06()
{
    char **string;
    int tamanho = 5, maior = 0, indice = 0, i;

    string = aloca_matriz_caracter(tamanho);

    for (i = 0; i < 5; i++)
    {
        printf("Digite a string numero %d: ", i + 1);
        fgets(string[i], TAMANHO_MAXIMO_STRING, stdin);
    }

    for (i = 0; i < 5; i++)
    {

        if ((int)strlen(string[i]) > maior)
        {
            maior = strlen(string[i]);
            indice = i;
        }
    }

    printf("\nA maior string eh: %s", string[indice]);

    for (i = 0; i < 5; i++)
    {
        free(string[i]);
    }

    free(string);
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

void exercicio14()
{

    int *v, *u, N, i;

    do
    {
        printf("\nInsira um valor para o tamanho do vetor [2:100]:  ");
        scanf("%d", &N);
        if (N < 2 || N > 100)
        {
            printf("\nVALOR INVALIDO\n");
        }
        
    } while (N < 2 || N > 100);  
    
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

    printf("\n\nVetor u (com zeros): ");
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

//--------------------------------------------------------------------------------------------------------------------------------------
int main(int argc, char **argv)
{
    srand(time(NULL));
    int nExercicio = 1;

    printf("TURMA 205\nGRUPO CFGP:\n    Caua Magalhaes Pereira;\n    Fernando Alves de Freitas;\n    Gabriel Lyan Barbosa de Assis;\n    Pedro Guilherme Andrade Salgado.\n\n");
    do
    {
        setbuf(stdin, NULL);
        printf("---------------------------------------------MENU---------------------------------------------\n");
        printf("Digite o numero do exercicio que deseja executar | 2 | 3 | 4 | 6 | 8 | 14 | ou 0 para sair: ");
        scanf("%d", &nExercicio);
        printf("\n\n");
        system("cls");
        printf("\nExercicio %d:\n\n", nExercicio);
        switch (nExercicio)
        {
        case 0:
            printf("\n\nPrograma Encerrado.");
            break;
        case 2:
        {
            exercicio02();
            break;
        }
        case 3:
        {
            exercicio03();
            break;
        }
        case 4:
        {
            exercicio04();
            break;
        }
        case 6:
        {
            exercicio06();
            break;
        }
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

        printf("\n\n----------------------------------------------------------------------------------------------\n\n\n\n\n");

    } while (nExercicio != 0);

    return SUCESSO;
}