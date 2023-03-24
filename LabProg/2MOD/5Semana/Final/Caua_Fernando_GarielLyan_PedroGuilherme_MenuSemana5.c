/*
    TURMA 205

    GRUPO:
    Cauã Magalhães Pereira;
    Fernando Alves de Freitas;
    Pedro Guilherme Andrade Salgado;
    Gabriel Lyan Barbosa de Assis.

*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <string.h>
#define SUCESSO 0
#define TAMANHO_MAX_FRASE 50 + 1

float *alocaVetores(int tamanho_vetor)
{
    float *v;
    v = (float *)(malloc(tamanho_vetor * sizeof(float)));
    return v;
}

void exercicio01()
{
    char string[TAMANHO_MAX_FRASE], copia[TAMANHO_MAX_FRASE], lixo;
    int i, tamanhoDigitado;
    printf("\nDigite uma frase para mostra-la invertida: ");
    getchar();
    fgets(string, TAMANHO_MAX_FRASE, stdin);

    tamanhoDigitado = strlen(string) - 1;
    string[tamanhoDigitado] = string[tamanhoDigitado + 1]; //Retiranndo 0 \n

    for (i = 0; i <= tamanhoDigitado; i++)
    {
        copia[i] = string[tamanhoDigitado - i - 1];
    }
    copia[tamanhoDigitado] = '\0'; //Inserindo sinalizador do fim da palavra

    printf("Frase digitada:  %s\n", string);
    printf("Frase invertida: %s\n", copia);
}

void exercicio02()
{

    float *vetor, *y, min = 1, max, aux = 0;
    int i, j, N = 1, n = 1, posicoes, sobrescrever;
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
            aux = 0;
        }
    }
    printf("\n\n");

    // Define n e o numero de elementos do acumulador
    do
    {
        printf("Digite um valor valido para n (n<N)\n(Intervalo do acumulador)\n");
        scanf("%d", &n);
        if (N == 600 && n == 10)
        {
            printf("\nO valor digitado para N (600) e n(10)  pode alterar o arquivo de texto gerado para o numero 3 dessa questao.\nDeseja alterar o arquivo criado?\n  [0]NAO         [1]SIM\n");
            scanf(" %d", &sobrescrever);

            if (sobrescrever > 1 || sobrescrever < 0)
            {
                sobrescrever = 0;
            }
        }

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

    if (N == 600 && n == 10 && sobrescrever == 1)
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
}

void exercicio03()
{

    char nome_arquivo[] = "dadosQuestao3.txt";
    char modo[] = "wt";
    float a = 0.8, b = 0.2, c = 0.5, d = 0.6, g = 0.5, k = 0.5, soma1 = 0, soma2 = 0;
    float *x, *y, *r;
    int n = 100, i, j, sobrescrever;
    FILE *file;

    printf("Digite um numero N qualquer: ");
    scanf("%d", &n);
    if (n == 100)
    {
        printf("\nO valor digitado para N (100) pode alterar o arquivo de texto gerado para a letra c) dessa questao.\nDeseja alterar o arquivo criado?\n  [0]NAO         [1]SIM\n");
        scanf("%d", &sobrescrever);

        if (sobrescrever > 1 || sobrescrever < 0)
        {
            sobrescrever = 0;
        }
    }

    x = alocaVetores(n);
    y = alocaVetores(n);
    r = alocaVetores(n);

    x[0] = 0;
    y[0] = 0;

    for (i = 1; i < n; i++)
    {

        r[i] = (float)rand() / (float)RAND_MAX;

        if (i < 20)
        {
            x[i] = 0;
        }
        else
        {
            x[i] = k * 2;
        }

        y[i] = g * (a * y[i - 1] + b * x[i] + c * x[i - 1] + d * r[i]);
    }

    for (i = 0; i < n; i++)
    {

        printf("X[%d] = %.2f || Y[%d] = %.2f\n", i + 1, x[i], i + 1, y[i]);
    }

    if (sobrescrever == 1)
    {

        file = (fopen(nome_arquivo, modo));

        if (file == NULL)
        {

            printf("Ocorreu algum erro ao abrir o arquivo!");
        }

        for (j = 0; j < n; j++)
        {

            fprintf(file, "%.2f %.2f \n", x[j], y[j]);
        }
    }
    for (j = 0; j < n; j++)
    {

        soma1 += x[j];
    }

    printf("\n\nValor medio do vetor x = %.2f", soma1 / n);

    for (j = 0; j < n; j++)
    {

        soma2 += y[j];
    }

    printf("\n\nValor medio do vetor y = %.2f", soma2 / n);

    fclose(file);
}

int main(int argc, char **argv)
{
    srand(time(NULL));
    int nExercicio = 1;

    do
    {
        printf("\n\nDigite o numero da secao que deseja executar (1:3) ou 0 para sair: ");
        scanf("%d", &nExercicio);
        printf("\n\n\n");

        switch (nExercicio)
        {
        case 0:
            printf("\n\nPrograma Encerrado.");
            break;
        case 1:
        {
            exercicio01();
            break;
        }
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
        default:
        {
            printf("Voce escolheu um exercicio invalido.\n");
        }
        }

        printf("\n\n\n");

    } while (nExercicio != 0);

    return SUCESSO;
}