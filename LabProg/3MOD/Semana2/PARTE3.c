

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <string.h>
#define SUCESSO 0

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

void exercicio09()
{

    printf("  Memoria ocupada por data1 : % lu bytes \n ", sizeof(data1));

    printf(" Memoria ocupada por data2 : % lu bytes \n ", sizeof(data2));

    printf(" Memoria ocupada por data3 : % lu bytes \n", sizeof(data3));
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
            printf("Dias uteis Dia %2d : %5s - feira \n", d1, dias[d1]);
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
    printf(" Book title...: % s \n", book.title);
    printf(" Book author..: % s \n ", book.author);
    printf("Book subject.: % s\n ", book.subject);
    printf("Book book_id.: % d\n ", book.book_id);
}

int main(int argc, char **argv)
{

    int nExercicio = 1;

    do
    {
        printf("\n\nDigite o numero do exemplo que deseja executar (9 a 12) ou 0 para sair: ");
        scanf("%d", &nExercicio);
        printf("\n\n\n");

        switch (nExercicio)
        {
        case 0:
            printf("\n\nPrograma Encerrado.");
            break;

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
        default:
        {
            printf("Voce escolheu um exercicio invalido.\n");
        }
        }

        printf("\n\n\n");

    } while (nExercicio != 0);

    return SUCESSO;
}