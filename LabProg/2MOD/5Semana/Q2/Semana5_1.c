#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#define SUCESSO 0

int main(int argc, char **argv)
{

    srand(time(NULL));

    float *vetor, *y, min = 1, max, aux;
    int i, j, N = 1, n = 1, posicoes;
    char nome_arquivo[] = "acumulador.txt";
    char modo[] = "w";
    FILE *file;

    // Define N
    do
    {
        printf("Digite um valor inteiro para N\n(Numero de posicoes)\n");
        scanf("%d", &N);
    } while (N < 1);
    max = ((N + 1) / 10);
    vetor = (float *)malloc(N * sizeof(float));

    // Define o vetor com base em N
    for (i = 0; i < N; i++)
    {
        vetor[i] = min + (rand() / (RAND_MAX / (max - min)));
    }

    // Printa o vetor
    printf("Valores do vetor alocado:\n");
    for (i = 0; i < N; i++)
    {
        printf("%9.3f ", vetor[i]);

        aux++;
        if (aux == 15)
        {
            printf("\n");
            aux=0;
        }
        
    }
    printf("\n\n");

    // Define n e o numero de elementos do acumulador
    do
    {
        printf("Digite um valor para n\n(Intervalo do acumulador)\n");
        scanf("%d", &n);
    } while (n > N);

    aux = (float)N / n;
    if ((aux) == floor(aux))
    {
        posicoes = floor(aux);
        printf("O acumulador tera %d posicoes, cada uma com a soma de %d elementos\n\n", posicoes, n);
    }
    else
    {
        posicoes = floor(aux) + 1;
        printf("O acumulador tera %d posicoes, os %d primeiros com a soma de %d elementos e o ultimo com a soma de %d elementos\n\n", posicoes, posicoes - 1, n, N - ((posicoes - 1) * n));
    }
    y = (float *)malloc(posicoes * sizeof(float));

    // Calcula os resultados do acumulador com base em n
    for (i = 0; i < posicoes; i++)
    {
        y[i] = 0;
        for (j = 0; j < n; j++)
        {
            if ((i * n + j) == N)
            {

                i += 10;
                j += 10;
                break;
            }
            else
            {
                y[i] += vetor[i * n + j];
            }
        }
    }

    // Printa os valores do acumulador
    printf("Resultado do acumulador\n");
    for (i = 0; i < posicoes; i++)
    {
        printf("y[%d] = %5.3f \n", i, y[i]);
    }

    if (N == 600 && n == 10)
    {
        file = (fopen(nome_arquivo, modo));

        if (file == NULL)
        {

            printf("Ocorreu algum erro ao abrir o arquivo!");
            
        }

        for (i = 0; i < posicoes; i++)
        {

            fprintf(file, "%f\n", y[i]);
        }

        fclose(file);
    }
    return SUCESSO;
}