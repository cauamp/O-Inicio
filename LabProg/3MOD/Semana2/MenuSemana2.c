#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define SUCESSO 0

//--------------------------------------------------------------------------------------------------------------------------------------

struct endereco
{
    char rua[50];
    int numero;
    char bairro[20];
    char cidade[30];
    char sigla_estado[3];
    long int CEP;
};

struct tipo_endereco
{
    char rua[50];
    int numero;
    char bairro[20];
    char cidade[30];
    char sigla_estado[3];
    long int CEP;
};
struct ficha_pessoal
{
    char nome[50];
    long int telefone;
    struct tipo_endereco endereco;
};

struct AlunoExercicio03 //Nome trocado pois "Aluno" se repete em exemplos adiante
{
    int *ptr;   // ponteiro para ponteiro
    char *nome; // ponteiro para char (string!)
} a1;

struct student
{
    int id;         // numero matricula
    char nome[30];  // string com primeiro nome
    float notaTRI1; // nota total no trimestre 1
};

struct nome
{
    int a;
    float b;
};

union job
{ // define a Union
    char name[32];
    float salary;
    int worker_no;
} u; // define a variavel u

struct job1
{ // define a Struct
    char name[32];
    float salary;
    int worker_no;
} s; // define a variavel s

union jobExercicio08
{
    char nome[32];
    int idade;
    int id;
} uExercicio08; // Nome da variável e da struct foram trocada pois havia duas variaveis "u" e duas unions "job")

struct
{
    unsigned int TRUE;
    unsigned int FALSE;
} data1;

struct // estrutura tipo bit - fields
{
    unsigned int TRUE : 1;
    unsigned int FALSE : 1;
} data2;

struct databits
{
    int b1 : 1; int b2 : 1; int b3 : 1; int b4 : 4; 
    int b5 : 9; int b6 : 9; int b7 : 7;
//  int b8 : 1;
} data3;

enum dias_da_semana
{
    domingo,
    segunda,
    terca,
    quarta,
    quinta,
    sexta,
    sabado
};

typedef struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} Book;

struct aluno
{
    char nome[20];
    int idade;
};
typedef struct aluno Aluno;
void FuncaoPassaPorReferencia(Aluno *);
void FuncaoPassaPorReferencia(Aluno *p)
{

    strcpy((*p).nome, "Albert Einstein"); // pode-se usar p -> nome
    p->idade = 50;
}

Aluno FuncaoPassaPorValor(Aluno);
Aluno FuncaoPassaPorValor(Aluno aa)
{

    Aluno bb;

    printf("Dentro da aluno.nome = %s e idade = %i \n", aa.nome, aa.idade);
    strcpy(bb.nome, "Isaac Newton");
    bb.idade = 30;

    return (bb);
}

//--------------------------------------------------------------------------------------------------------------------------------------
void exercicio01()
{

    struct endereco b;
    strcpy(b.rua, " Av. Antonio Carlos ");
    b.numero = 6627;
    printf("o Coltec fica na %s no numero %d \n ", b.rua, b.numero);
}

void exercicio02()
{

    struct ficha_pessoal ficha;
    strcpy(ficha.nome, "Luiz Osvaldo Silva");
    ficha.telefone = 4921234;
    strcpy(ficha.endereco.rua, "Rua das Flores");
    ficha.endereco.numero = 10;
    strcpy(ficha.endereco.bairro, "Cidade Velha");
    strcpy(ficha.endereco.cidade, "Belo Horizonte");
    strcpy(ficha.endereco.sigla_estado, "MG");
    ficha.endereco.CEP = 31340230;
}

void exercicio03()
{

    int turma = 20;
    a1.ptr = &turma;
    a1.nome = "Albert";

    printf("\n Numero de Alunos na Turma : %d", *a1.ptr);
    printf("\n Nome do Aluno : %s", a1.nome);
}

void exercicio04()
{

    int i;
    struct student T204[2];
    // criando um vetor do tipo struct student

    // primeiro estudante
    T204[0].id = 1;
    strcpy(T204[0].nome, " Mane ");
    // usando a funcao da biblioteca string . h

    // para copiar o nome para dentro da string
    T204[0].notaTRI1 = 16.5;

    // segundo estudante
    T204[1].id = 2;
    strcpy(T204[1].nome, " Zeca ");
    T204[1].notaTRI1 = 22.5;

    for (i = 0; i < 2; i++)
    {
        printf("\nAluno numero %i da T204 : \n ", i + 1);
        printf("Id : %d \n ", T204[i].id);
        printf("Nome : %s \n", T204[i].nome);
        printf("Nota Tri 1: %f\n ", T204[i].notaTRI1);
    }
}

void exercicio05()
{
    int i;
    struct ficha_pessoal ficha[10];
    // 10 registros do tipo ficha_pessoal
    // declarados como sendo a variavel ficha []
    strcpy(ficha[0].nome, " Jose Bonito ");
    ficha[0].telefone = 4921234;
    strcpy(ficha[0].endereco.rua, " Rua das Flores ");
    ficha[0].endereco.numero = 10;
    strcpy(ficha[0].endereco.bairro, " Cidade Velha ");
    strcpy(ficha[0].endereco.cidade, " Belo Horizonte ");
    strcpy(ficha[0].endereco.sigla_estado, " MG ");
    ficha[0].endereco.CEP = 123456;
    strcpy(ficha[0].endereco.rua, " Rua das Flores ");
    ficha[0].endereco.numero = 10;
    strcpy(ficha[0].endereco.bairro, " Cidade Velha ");
    strcpy(ficha[0].endereco.cidade, " Belo Horizonte ");
    strcpy(ficha[0].endereco.sigla_estado, " MG ");
    ficha[0].endereco.CEP = 123456;
    strcpy(ficha[1].nome, " Maria Linda ");
    ficha[1].telefone = 4921234;
    strcpy(ficha[1].endereco.rua, " Rua dos Ventos ");
    ficha[1].endereco.numero = 11;
    strcpy(ficha[1].endereco.bairro, " Nova Velha ");
    strcpy(ficha[1].endereco.cidade, " Belo Horizonte ");
    strcpy(ficha[1].endereco.sigla_estado, " MG ");
    ficha[1].endereco.CEP = 123456;
    for (i = 0; i < 2; i++)
        printf("nome do registro numero % i: %s \n", i + 1, ficha[i].nome);
}

void exercicio06()
{
    struct nome *ptr, p; // qual a outra forma de declarar essa estrutra ?

    ptr = &p; /* ponteiro ptr recebe endereco de p */

    printf("Entre com um numero inteiro: ");
    scanf("%d", &(*ptr).a);

    printf("Entre com um numero float: ");
    scanf("%f", &(*ptr).b);

    printf("\n Numeros Digitados: ");
    printf("%d e %3.2f ", (*ptr).a, (*ptr).b);
    printf("\n-----------------------------------\n ");
    printf("Numeros Digitados Outra vez: ");
    printf("%d e %3.2f ", ptr->a, ptr->b);
}

void exercicio07()
{
    printf(" usando o sizeof ( tamanho de :) \n");
    printf(" size of union = %lu", (long unsigned int)sizeof(u));
    printf(" \n size of structure = %lu", (long unsigned int)sizeof(s));
}

void exercicio08()
{

    printf("Nome: ");
    scanf("%s", uExercicio08.nome);
    printf("Idade: ");
    scanf("%i", &uExercicio08.idade);
    printf("Dados do Empregado \n");
    printf("Nome do empregado: %s \n", uExercicio08.nome);
    printf("Idade : % i ", uExercicio08.idade);
    printf("\n --------------------\n");
    printf("Idade: ");
    scanf("%i", &uExercicio08.idade);
    printf("Nome: ");
    scanf(" %s", uExercicio08.nome);
    printf("Dados do Empregado \n");
    printf("Nome do empregado : %s \n ", uExercicio08.nome);
    printf("Idade : % i ", uExercicio08.idade);
}

void exercicio09()
{

    printf("  Memoria ocupada por data1 : %lu bytes \n ", (long unsigned int)sizeof(data1));

    printf(" Memoria ocupada por data2 : %lu bytes \n ", (long unsigned int)sizeof(data2));

    printf(" Memoria ocupada por data3 : %lu bytes \n", (long unsigned int)sizeof(data3));
}

void exercicio10()
{

    enum dias_da_semana d1;

    for (d1 = segunda; d1 < sabado; d1++)
    {
        printf(" Dias uteis % i \n", d1);
    }
}

void exercicio11()
{
    // cria um array de ponteiros

    const char *dias[] = {" domingo ", " segunda ", " terca ", " quarta ", " quinta ", " sexta ", " sabado "};

    enum dias_da_semana d1;

    for (d1 = domingo; d1 <= sabado; d1++)
    {
        if (d1 > 0 && d1 < 6)
            printf("Dias uteis Dia %2d : %5s- feira \n", d1, dias[d1]);
        else
            printf("Final de semana ..: %5s \n", dias[d1]);
    }
}

void exercicio12()
{
    Book book;
    strcpy(book.title, " C Programming ");
    strcpy(book.author, " Nuha Ali ");
    strcpy(book.subject, " C Programming Tutorial ");
    book.book_id = 6495407;
    printf(" Book title...: %s \n", book.title);
    printf(" Book author..: %s \n ", book.author);
    printf("Book subject.: %s\n ", book.subject);
    printf("Book book_id.: %d\n ", book.book_id);
}

void exercicio13()
{

    Aluno a1;
    Aluno *ptr;
    char aux[20];
    int idd;

    strcpy(a1.nome, "Alberto Aisten");
    a1.idade = 18;

    ptr = &a1; // ponteiro para a1

    printf("\nNome antes de chamar a funcao = %s\n", a1.nome);
    printf("Idade antes de chamar a funcao = %d \n", a1.idade);
    printf("Nome antes (usando ponteiro) = %s\n", ptr->nome);
    printf("Idade antes (usando ponteiro) = %d \n", ptr->idade);

    printf("\n------------------------------------------------------------\n\n");
    FuncaoPassaPorReferencia(ptr);

    strcpy(aux, a1.nome);
    idd = a1.idade;
    printf("Nome depois de chamar a funcao = %s \n", aux);
    printf("Idade depois de chamar a funcao = %d \n", idd);

    strcpy(aux, ptr->nome);
    idd = ptr->idade;
    printf("Nome depois (usando ponteiro) = %s\n", aux);
    printf("Idade depois (usando ponteiro)= %d\n", idd);
}

void exercicio14()
{

    Aluno a1, a2;

    strcpy(a1.nome, "Alberto Aisten");
    a1.idade = 18;
    printf("Nome de a1 = %s \n", a1.nome);
    printf("Idade de a1 = %d \n", a1.idade);
    printf("\n------------------------------------------------------------\n\n");
    a2 = FuncaoPassaPorValor(a1);
    printf("\n------------------------------------------------------------\n\n");
    printf("Nome de a2 = %s \n", a2.nome);
    printf("Idade de a2 = %d\n\n", a2.idade);
}

//--------------------------------------------------------------------------------------------------------------------------------------
int main(int argc, char **argv)
{
    int nExercicio = 1;

    printf("TURMA 205\nGRUPO CFGP:\n    Caua Magalhaes Pereira;\n    Fernando Alves de Freitas;\n    Gabriel Lyan Barbosa de Assis;\n    Pedro Guilherme Andrade Salgado.\n\n");
    do
    {
        setbuf(stdin, NULL);
        printf("---------------------------------------------MENU---------------------------------------------\n");
        printf("Digite o numero do exercicio que deseja executar [1:14] ou 0 para sair:\n    Executar exemplo 11.");
        scanf("%d", &nExercicio);
        printf("\n\n");
        system("cls");
        printf("\nExercicio 11.%d:\n\n", nExercicio);
        setbuf(stdin, NULL);
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
        case 4:
        {
            exercicio04();
            break;
        }
        case 5:
        {
            exercicio05();
            break;
        }
        case 6:
        {
            exercicio06();
            break;
        }
        case 7:
        {
            exercicio07();
            break;
        }
        case 8:
        {
            exercicio08();
            break;
        }
        case 9:
        {
            exercicio09();
            break;
        }
        case 10:
        {
            exercicio10();
            break;
        }
        case 11:
        {
            exercicio11();
            break;
        }
        case 12:
        {
            exercicio12();
            break;
        }
        case 13:
        {
            exercicio13();
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