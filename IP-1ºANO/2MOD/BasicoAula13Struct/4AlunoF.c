#include <stdio.h>
#define SUCESSO 0
#define TAM_MAX_CHAR 49 + 1
typedef struct info_aluno
{
    char nome[TAM_MAX_CHAR], curso[TAM_MAX_CHAR];
    int idade;
    float notas[3];
    float media;
    unsigned char bool;
} infoAlunos;

void clearStdin(void)
{

    int c;

    while ((c = getchar()) != '\n' && (c != EOF))
        ;
}

int main(int argc, char **argv)
{

    int i, N, aux;
    float media = 0, MediaGlobal = 0;
    const char *situacao[] = {"Reprovado", "Aprovado"};
    infoAlunos *aluno;

    printf("Digite o numero de Alunos:\n");
    scanf("%d", &N);

    aluno = (infoAlunos *)malloc(N * sizeof(infoAlunos));
    for (i = 0; i < N; i++)
    {

        printf("Digite o nome do aluno %d : \n", i + 1);
        //fgets(aluno[i].nome, TAM_MAX_CHAR, stdin); Compilador tem algum bug ao ultilizar 2 fgets seguidos para pointer de structs.
        scanf(" %49[^\n]s", &aluno[i].nome);
        clearStdin();

        printf("Digite o curso do aluno %d : \n", i + 1);
        //fgets(aluno[i].curso, TAM_MAX_CHAR, stdin); Compilador tem algum bug ao ultilizar 2 fgets seguidos para pointer de structs.
        scanf(" %49[^\n]s", &aluno[i].curso);
        clearStdin();

        printf("Digite a idade do aluno %d: \n", i + 1);
        scanf("%d", &aluno[i].idade);

        for (aux = 0; aux < 3; aux++)
        {
            printf("Digite a nota da prova %d:  \n", aux + 1);
            scanf("%f", &aluno[i].notas[aux]);
            media += aluno[i].notas[aux];
        }
        aux = 0;

        aluno[i].media = media / 3;
        media = 0;
        if (aluno[i].media >= 60)
        {
            aluno[i].bool = 1;
        }
        else
        {
            aluno[i].bool = 0;
        }
        printf("\n\n");
    }

    for (i = 0; i < N; i++)
    {

        for (aux = 0; aux < N - i - 1; aux++)
        {

            if (aluno[aux].media > aluno[aux + 1].media)
            {

                infoAlunos temp = aluno[aux];
                aluno[aux] = aluno[aux + 1];
                aluno[aux + 1] = temp;
            }
        }
    }

    for (i = 0; i < N; i++)
    {
        MediaGlobal += aluno[i].media;
        printf("\n\nFicha do Aluno %d \n(Reorganizado) \n", i + 1);
        printf("-------------------------\n\nAluno: %s \nCurso: %s\nIdade: %d \nMedia: %.2f\nSituacao: %s\n\n-------------------------\n\n", aluno[i].nome, aluno[i].curso, aluno[i].idade, aluno[i].media, situacao[aluno[i].bool]);
    }
    MediaGlobal = MediaGlobal / N;
    printf("-------------------------\nMedia da sala: %.2f\n-------------------------", MediaGlobal);

    free(aluno);
    return SUCESSO;
}