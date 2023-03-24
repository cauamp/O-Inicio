#include <stdio.h>
#include <string.h>
#define VMAX 99999
#define SUCESSO 0

char Triangulo(int hTriangulo)
{
    int i = 0, aux = 1, suporte = 0;
    char s[VMAX];
    for (i = 0; i <VMAX; i++)
    {
        s[i]='\0';
    }
    
    for (i = 0; i <= hTriangulo - aux; i++)
    {
        s[suporte] = '.';
        if (i >= hTriangulo - aux)
        {
            suporte++;
            s[suporte] = '\n';
            aux++;
            i = -1;
        }
        suporte++;
    }
    return (puts(s));
}

char Fsigno(int dia, int mes)
{
    int i, signo = 0;
    const char *s[] = {"Capricornio", "Aquario", "Peixes", "Aries", "Touro", "Gemeos", "Cancer", "Leao","Virgem", "Libra","Escorpiao","Sargitario"};

    for (i = 1; i <= 12; i++)
    {

        if (i == mes && mes == 1)
        {
            if (dia <= 20)
            {
                signo = 1;
            }
            else if (dia >= 21)
            {
                signo = 2;
            }
        }
        else if (i == mes && mes == 2)
        {
            if (dia <= 18)
            {
                signo = 2;
            }
            else if (dia >= 19)
            {
                signo = 3;
            }
        }
        else if (i == mes && mes == 3)
        {
            if (dia <= 20)
            {
                signo = 3;
            }
            else if (dia >= 21)
            {
                signo = 4;
            }
        }
        else if (i == mes && mes == 4)
        {
            if (dia <= 20)
            {
                signo = 4;
            }
            else if (dia >= 21)
            {
                signo = 5;
            }
        }
        else if (i == mes && mes == 5)
        {
            if (dia <= 20)
            {
                signo = 5;
            }
            else if (dia >= 21)
            {
                signo = 6;
            }
        }
        else if (i == mes && mes == 6)
        {
            if (dia <= 20)
            {
                signo = 6;
            }
            else if (dia >= 21)
            {
                signo = 7;
            }
        }
        else if (i == mes && mes == 7)
        {
            if (dia <= 22)
            {
                signo = 7;
            }
            else if (dia >= 23)
            {
                signo = 8;
            }
        }
        else if (i == mes && mes == 8)
        {
            if (dia <= 22)
            {
                signo = 8;
            }
            else if (dia >= 23)
            {
                signo = 9;
            }
        }
        else if (i == mes && mes == 9)
        {
            if (dia <= 22)
            {
                signo = 9;
            }
            else if (dia >= 23)
            {
                signo = 10;
            }
        }
        else if (i == mes && mes == 10)
        {
            if (dia <= 22)
            {
                signo = 10;
            }
            else if (dia >= 23)
            {
                signo = 11;
            }
        }
        else if (i == mes && mes == 11)
        {
            if (dia <= 21)
            {
                signo = 11;
            }
            else if (dia >= 22)
            {
                signo = 12;
            }
        }
        else if (i == mes && mes == 12)
        {
            if (dia <= 21)
            {
                signo = 12;
            }
            else if (dia >= 22)
            {
                signo = 1;
            }
        }
    }

    return printf("\nSeu signo eh: %s", s[signo - 1]);
}

float Compras(float produtos, float quantidade)
{
    int i = 0;
    float total = 0, resultado;
    if (produtos == 1)
    {
        produtos = 5.5;
    }
    else if (produtos == 2)
    {
        produtos = 3;
    }
    else if (produtos == 3)
    {
        produtos = 2.5;
    }
    else if (produtos == 4)
    {
        produtos = 1;
    }
    else if (produtos == 5)
    {
        produtos = 2;
    }
    else
    {
        produtos = 0;
    }

    total = total + (produtos * quantidade);
    if (produtos != 0)
    {
        return (total);
    }
    else if (produtos == 0)
    {
        resultado = quantidade;
        return (printf("\nTotal.....: R$%.2f\nC/Desconto: R$%.2f", resultado, (resultado * 0.93)));
    }
}


int main(int argc, char **argv)
{
    //Exercicio 1
    int escolha, hTriangulo;
    //Exercicio 2
    int dd, mm, aa;
    //Exercicio 3
    float produto = 0, quantidade = 0, total;
    int i, aux;
    do
    {
        printf("+---------------------------------------+\n| Bem-vindo a Prova/Trabalho Trimestral |\n+---------------------------------------+ ");

        printf("\nDigite o numero correspondente ao exercicio que voce deseja:\n");
        scanf("%d", &escolha);

        if (escolha > 3)
        {
            printf("\n \nNumero invalido");
        }
        if (escolha == 1)
        {
            printf("+-------------------------+\n\t Exercicio 1\t\n+-------------------------+ ");
            printf("\nDigite a altura do triangulo invertido\n");
            scanf("%d", &hTriangulo);

            Triangulo(hTriangulo);
        }
        if (escolha == 2)
        {
            printf("+-------------------------+\n\t Exercicio 2\t\n+-------------------------+ \n");
            printf("\nDigite sua data de nascimento (dd/mm/aa):\n");
            scanf("%d \n %d \n %d", &dd, &mm, &aa);

            Fsigno(dd, mm);
        }
        if (escolha == 3)
        {
            printf("+-------------------------+\n\t Exercicio 3\t\n+-------------------------+ \n");
            aux = VMAX;
            for (i = 0; produto < aux; i++)
            {

                printf("Cardapio:\n(1) Refrigerante.... R$ 5,50\n(2) Pao com manteiga R$ 3,00\n(3) Pao de queijo... R$ 2,50\n(4) Pingado......... R$ 1,00\n(5) Halls........... R$ 2,00\n(0) Total ");
                printf("\nDigite a opcao: ");
                scanf("%f", &produto);
                if (produto > 0)
                {
                    printf("Digite a quantidade: ");
                    scanf("%f", &quantidade);
                    total = total + (Compras(produto, quantidade));
                }

                if (produto <= 0)
                {
                    //Ao finalizar o programa a função ira enterpretar o que era quantidade como o total
                    Compras(produto, total);
                    aux = -1;
                }
            }
        }
        printf("\n  \n");

    } while (escolha != 0);

    return SUCESSO;
}