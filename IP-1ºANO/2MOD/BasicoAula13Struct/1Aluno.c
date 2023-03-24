#include <stdio.h>
#define SUCESSO 0
#define TAM_MAX_CHAR 50

typedef struct info_aluno{
    char nome[TAM_MAX_CHAR];
    char curso[TAM_MAX_CHAR];
    int idade;
}alunos;

int main(int argc, char **argv){
    
    alunos aluno1;
    printf("Digite seu nome:\n");
    fgets(aluno1.nome, TAM_MAX_CHAR, stdin);

    printf("Digite se curso: \n");
    fgets(aluno1.curso, TAM_MAX_CHAR, stdin);

    printf("Digite sua idade: \n");
    scanf("%d", &aluno1.idade);

    printf("-------------------------\n\nAluno: %s \nCurso: %s\nIdade: %d\n\n-------------------------", aluno1.nome, aluno1.curso, aluno1.idade);
    return SUCESSO;
}