//by the crias to crias😳🤡
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#define SUCESSO 0

float *alocaVetoresfloat(int tamanhoVetor)
{
    float *v2;

    v2 = (float *)(malloc(tamanhoVetor * sizeof(float)));
    return v2;
}

float modulo(float *v, int tam)
{
    int i;
    float soma;

    for (i = 0; i < tam; i++)
    {
        soma = pow(v[i], 2) + soma;
    }

    soma = sqrt(soma);

    return (soma);
}

float *adicao(float *v, float *u, int tam)
{
    float *soma;
    int i;

    soma = alocaVetoresfloat(tam);

    //realiza a soma
    for (i = 0; i < tam; i++)
    {
        soma[i] = v[i] + u[i];
    };

    return (soma);
}

float produto_escalar(float *v, float *u, int tam)
{
    int i;
    float produto_final = 0.0;
    float *prod;

    prod = alocaVetoresfloat(tam);

    //multiplicação
    for (i = 0; i < tam; i++)
    {
        prod[i] = v[i] * u[i];
    }
    //somatorio
    for (i = 0; i < tam; i++)
    {
        produto_final = produto_final + prod[i];
    }

    free(prod);
    return (produto_final);
}

void exercicio04()
{

    int exercicio = 1, funcao = 1, tam = 1, i;
    float produto, modv, modu;
    float *v, *u, *soma;
    /*Pirmeiro "do" para posibilitar o usuario preencher os vetores varias vezes,
atraves da opcao 5 do menu*/
    do
    {
        /*Recebe o tamanho dos vetores, enquanto o tamanho 
      digitado não estiver entre 1 e 10*/
        do
        {
            printf("\nDigite o tamanho, entre 1 e 10, dos vetores v e u: ");
            scanf("%d", &tam);
            if (tam < 1 || tam > 10)
            {
                printf("Digite um valor entre 1 e 10!");
            };

        } while (tam < 1 || tam > 10);
        system("cls");

        /*Aloca os vetores*/
        v = alocaVetoresfloat(tam);
        u = alocaVetoresfloat(tam);

        /*Preenche os vetores com zeros*/
        for (i = 0; i < tam; i++)
        {
            u[i] = 0;
        }
        for (i = 0; i < tam; i++)
        {
            v[i] = 0;
        }

        /*recebe os valores de cada posicao dos vetores*/
        printf("\nDigite os %d valores inteiros do vetor v.\n", tam);
        getchar();

        for (i = 0; i < tam; i++)
        {
            printf(" %d valor: ", i + 1);
            scanf(" %f", &v[i]);
            getchar();
        }

        printf("\nDigite os %d valores inteiros do vetor u.\n", tam);

        for (i = 0; i < tam; i++)
        {
            printf(" %d valor: ", i + 1);
            scanf(" %f", &u[i]);
            getchar();
        }

        /*Exibe os vetores preenchidos para o usuario conferir*/
        printf("\nv: \n");

        for (i = 0; i < tam; i++)
        {
            printf(" %.2f", v[i]);
        }

        printf("\nu:  \n");

        for (i = 0; i < tam; i++)
        {
            printf(" %.2f", u[i]);
        }

        //Menu principal do exercicio 5
        do
        {
            printf("\n\nDigite o numero da funcao que deseja executar: \n"
                   "(1) - Modulo do PRIMEIRO vetor (v). \n"
                   "(2) - Modulo do SEGUNDO vetor (u). \n"
                   "(3) - Produto escalar (u . v). \n"
                   "(4) - Adicao (u + v). \n"
                   "(5) - Reescrever os vetores. \n"
                   "(0) - Sair. \n"
                   "Opcao:  ");
            scanf("%d", &funcao);
            printf("\n\n\n");
            system("cls");
            switch (funcao)
            {
            case 0:
                printf("\n\nPrograma Encerrado.");
                exercicio = 0;
                break;

            case 1:
            {
                modv = modulo(v, tam);
                printf("\nv: \n");

                for (i = 0; i < tam; i++)
                {
                    printf(" %.2f", v[i]);
                }

                printf("\nO modulo do vetor v eh: %.2f", modv);

                break;
            }
            case 2:
            {
                modu = modulo(u, tam);

                printf("\n\nu:  \n");

                for (i = 0; i < tam; i++)
                {

                    printf(" %.2f", u[i]);
                }

                printf("\nO modulo do vetor u eh: %.2f", modu);
                break;
            }
            case 3:
            {
                produto = produto_escalar(v, u, tam);

                //print dos vetores e o resultado da operação
                printf("\nv: \n");

                for (i = 0; i < tam; i++)
                {

                    printf(" %.2f", v[i]);
                }

                printf("\n\nu:  \n");

                for (i = 0; i < tam; i++)
                {

                    printf(" %.2f", u[i]);
                }

                printf("\n\nO produto escalar entre os vetores v e u eh: %.2f", produto);

                break;
            }
            case 4:
            {
                soma = adicao(v, u, tam);

                //print dos vetores e o resultado da operação
                printf("\nv: \n");

                for (i = 0; i < tam; i++)
                {

                    printf(" %.2f", v[i]);
                }

                printf("\n\nu:  \n");

                for (i = 0; i < tam; i++)
                {

                    printf(" %.2f", u[i]);
                }

                printf("\n\nResultado da adicao dos vetores v e u:  \n");
                for (i = 0; i < tam; i++)
                {

                    printf(" %.2f", soma[i]);
                }

                break;
            }
            case 5:
            {
                funcao = 0;
                break;
            }
            default:
            {
                printf("Voce escolheu um exercicio invalido.\n");
            }
            }

            printf("\n\n\n");

        } while (funcao != 0);
    } while (exercicio != 0);
    free(soma);
    free(v);
    free(u);
}

int main(int argc, char **argv)
{
    exercicio04();
    return SUCESSO;
}