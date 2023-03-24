#include <stdio.h>
#include <math.h>
#define SUCESSO 0
#define TAMANHO_MAX_NOME 50
#define true 1
#define false 0
/*
    
    Aluno: Cauã Magalhães Pereira
    Nimero de matricula: 2020951805
    Turma: 205
    
 */

void exercicio42()
{
    int N = 5, i = 0, j = 0;
    do
    {
        printf("Digite um valor para N (3:15)  \n");
        scanf("%d", &N);
        if (N > 15 || N < 3)
        {
            printf("Valor invalido!\n");
        }
    } while (N > 15 || N < 3);

    printf("\n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void exercicio43()
{
    int N = 5, i = 0, j = 0;
    do
    {
        printf("Digite um valor para N (3:15)  \n");
        scanf("%d", &N);
        if (N > 15 || N < 3)
        {
            printf("Valor invalido!\n");
        }
    } while (N > 15 || N < 3);

    printf("\n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", N);
        }
        printf("\n");
    }
}

void exercicio44()
{
    int N = 5, i = 0, j = 0;
    do
    {
        printf("Digite um valor para N (3:15)  \n");
        scanf("%d", &N);
        if (N > 15 || N < 3)
        {
            printf("Valor invalido!\n");
        }
    } while (N > 15 || N < 3);

    printf("\n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", j + 1);
        }
        printf("\n");
    }
}

void exercicio45()
{
    int N = 5, i = 0, j = 0, par;
    float metadeDoLado = 0;
    do
    {
        printf("Digite um valor para N (3:15)  \n");
        scanf("%d", &N);
        if (N > 15 || N < 3)
        {
            printf("Valor invalido!\n");
        }
    } while (N > 15 || N < 3);

    metadeDoLado = (float)N / 2;

    printf("\n");

    for (i = 0; i < N; i++)
    {

        for (j = 0; j < N; j++)
        {
            if (i < ceil(metadeDoLado))
            {
                printf("%d ", N - j);
            }
            else
            {
                printf("%d ", j + 1);
            }
        }

        printf("\n");
    }
}

void exercicio46()
{
    int N = 5, i = 0, j = 0;
    do
    {
        printf("Digite um valor para N (3:15)  \n");
        scanf("%d", &N);
        if (N > 15 || N < 3)
        {
            printf("Valor invalido!\n");
        }
    } while (N > 15 || N < 3);

    printf("\n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void exercicio47()
{
    int N = 5, i = 0, j = 0;
    do
    {
        printf("Digite um valor para N (3:15)  \n");
        scanf("%d", &N);
        if (N > 15 || N < 3)
        {
            printf("Valor invalido!\n");
        }
    } while (N > 15 || N < 3);

    printf("\n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void exercicio48()
{
    int N = 5, i = 0, j = 0;
    do
    {
        printf("Digite um valor para N (3:15)  \n");
        scanf("%d", &N);
        if (N > 15 || N < 3)
        {
            printf("Valor invalido!\n");
        }
    } while (N > 15 || N < 3);

    printf("\n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N - i; j++)
        {
            printf("%d ", j + 1);
        }
        printf("\n");
    }
}

void exercicio49()
{
    int N = 5, i = 0, j = 0;
    do
    {
        printf("Digite um valor para N (3:15)  \n");
        scanf("%d", &N);
        if (N > 15 || N < 3)
        {
            printf("Valor invalido!\n");
        }
    } while (N > 15 || N < 3);

    printf("\n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N - i; j++)
        {
            printf("%d ", N - j);
        }
        printf("\n");
    }
}

int main(int argc, char **argv)
{

    int nExercicio = 1;

    do
    {
        printf("Digite o numero do exercicio que deseja executar (42:49) ou 0 para sair: ");
        scanf("%d", &nExercicio);

        switch (nExercicio)
        {
        case 0:
            break;
        case 1:
        {
            exercicio42();
            break;
        }
        case 2:
        {
            exercicio43();
            break;
        }
        case 3:
        {
            exercicio44();
            break;
        }
        case 4:
        {
            exercicio45();
            break;
        }
        case 5:
        {
            exercicio46();
            break;
        }
        case 6:
        {
            exercicio47();
            break;
        }
        case 7:
        {
            exercicio48();
            break;
        }
        case 8:
        {
            exercicio49();
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
