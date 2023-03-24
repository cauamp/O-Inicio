#include <stdio.h>
#define SUCESSO 0
#define TAM_MAX_CHAR 49 + 1
typedef struct info_aluno
{
    char nome[TAM_MAX_CHAR];
    char curso[TAM_MAX_CHAR];
    int idade;
    float notas[3];
} alunos;

int main(int argc, char **argv)
{

    int i, bool;
    float media = 0;
    const char *situacao[] = {"Reprovado", "Aprovado"};
    alunos aluno1;
    printf("Digite seu nome:\n");
    fgets(aluno1.nome, TAM_MAX_CHAR, stdin);

    printf("Digite seu curso: \n");
    fgets(aluno1.curso, TAM_MAX_CHAR, stdin);

    printf("Digite sua idade: \n");
    scanf("%d", &aluno1.idade);

    for (i = 0; i < 3; i++)
    {
        printf("Digite a nota da prova %d:  ", i + 1);
        scanf("%f", &aluno1.notas[i]);
        media += aluno1.notas[i];
    }

    media = media / 3;
    if (media >= 60)
    {
        bool = 1;
    }
    else
    {
        bool = 0;
    }

    printf("-------------------------\n\nAluno: %s \nCurso: %s\nIdade: %d \n\nMedia: %.2f\n\nSituacao: %s\n\n-------------------------", aluno1.nome, aluno1.curso, aluno1.idade, media, situacao[bool]);
    return SUCESSO;
}