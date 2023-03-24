#include <stdio.h>
#include <string.h>
#include <math.h>
#define SUCESSO 0
#define TAM_MAX_CHAR 29 + 1

typedef struct registro
{
    char nome[TAM_MAX_CHAR];
    float nota[2];
    float media, desvio, variancia;
} aluno_t;

int conta_NAlunos(FILE *arquivo)
{
    int count = 0, aux, i;
    char txt[5000];

    fread(&txt, sizeof(char), 200, arquivo);

    aux = strlen(txt);

    for (i = 0; i < aux; i++)
    {
        if (txt[i] == '\n')
        {
            count++;
        }
    }

    fseek(arquivo, 0, SEEK_SET);
    count = (count + 1) / 3;
    return (count);
}

float calcula_Variancia(float media, float n1, float n2)
{
    float resultado;
    int aux1, aux2;
    if (n1 > n2)
    {
        n1 = n1 - media;
        n2 = media - n2;
        n1 = n1 * n1;
        n2 = n2 * n2;
    }
    else if (n2 > n1)
    {
        n1 = media - n1;
        n2 = n2 - media;
        n1 = n1 * n1;
        n2 = n2 * n2;
    }
    else
    {
        n1 = n1 * n1;
        n2 = n2 * n2;
    }

    resultado = (n1 + n2);
    resultado = resultado / 1;
    return (resultado);
}

float calcula_Desvio(float media, float n1, float n2)
{
    float resultado;

    resultado = calcula_Variancia(media, n1, n2);
    resultado = sqrt(resultado);

    return (resultado);
}

/*
    O usuario, deve digitar no arquivo de origem o nome do aluno em uma linha, e as duas notas respectivas, nas duas linhas seguidas.
    Desvio Padrão e variancia foram calculados considerando valores de amostra.
*/

int main(int argc, char **argv)
{
    int i = 0;
    FILE *arqv, *arqv2;
    int N_alunos;

    arqv = fopen("AlunoEntrada.txt", "r");
    arqv2 = fopen("AlunoSaida2.txt", "w");

    if (arqv == NULL || arqv2 == NULL)
    {
        fprintf(stderr, "Erro ao abrir Arquivo");
    }

    N_alunos = conta_NAlunos(arqv);
    aluno_t *aluno;
    aluno = (aluno_t *)(malloc(N_alunos * sizeof(aluno_t)));

    printf("Os dados de cada aluno devem estar organizados da seguinte forma no arquivo de origem:\nO nome do aluno em uma linha, e as suas notas nas duas linhas seguidas. Nao devem haver linhas vazias.\n\n");
    for (i = 0; i < N_alunos; i++)
    {

        fgets(aluno[i].nome, TAM_MAX_CHAR, arqv);
        fscanf(arqv, "%f", &aluno[i].nota[0]);
        fscanf(arqv, "%f", &aluno[i].nota[1]);

        aluno[i].media = (aluno[i].nota[0] + aluno[i].nota[1]) / 2;
        fseek(arqv, 2, SEEK_CUR);

        aluno[i].variancia = calcula_Variancia(aluno[i].media, aluno[i].nota[0], aluno[i].nota[1]);
        aluno[i].desvio = calcula_Desvio(aluno[i].media, aluno[i].nota[0], aluno[i].nota[1]);
    }
    for (i = 0; i < N_alunos; i++)
    {
        fprintf(arqv2, "Aluno:            %10s", aluno[i].nome);
        fprintf(arqv2, "Nota 1:         %10.2f\n", aluno[i].nota[0]);
        fprintf(arqv2, "Nota 2:         %10.2f\n", aluno[i].nota[1]);
        fprintf(arqv2, "Media :         %10.2f\n", aluno[i].media);
        fprintf(arqv2, "Desvio Padrao : %10.2f\n", aluno[i].desvio);
        fprintf(arqv2, "Variancia :     %10.2f\n\n", aluno[i].variancia);
    }

    fprintf(arqv2, "ATENÇÃO\nDesvio Padrão e variancia foram calculados considerando valores de amostra. ");

    fclose(arqv);
    fclose(arqv2);
    free(aluno);
    return SUCESSO;
}