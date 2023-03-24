#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define SUCESSO 0
#define TAMANHO_MAX_NOME 50 + 1
#define pi atan(1) * 4
#define __INT_MAX__ 2147483647
const false = 0;
const true = 1;

int calculaFatorial(int N)
{
    int i = N, y = 1;

    for (i = N; i > 0; i--)
    {
        y = y * i;
    }

    return y;
}

int retornaMaiorValor(int x, int y, int z)
{
    int maior = x;

    if (y > x && y > z)
    {
        maior = y;
        return maior;
    }
    if (z > x && z > y)
    {
        maior = z;
        return maior;
    }
    else
    {
        return maior;
    }
}

int retornaMenorValor(int x, int y, int z)
{
    int maior = x;

    if (y < x && y < z)
    {
        maior = y;
        return maior;
    }
    if (z < x && z < y)
    {
        maior = z;
        return maior;
    }
    else
    {
        return maior;
    }
}

float retornaDelta(float a, float b, float c)
{
    float delta;

    delta = pow(b, 2) + (-4 * a * c);

    return delta;
}

void printaRaizDoPolinomio2Grau(float a, float b, float c, float raiz[2])
{

    float delta;
    delta = pow(b, 2) + (-4 * a * c);

    if (delta < 0)
    {
        printf("Nao ha raizes reais para a equacao \n");
    }
    else
    {
        raiz[0] = ((-1 * b) + sqrt(delta)) / (2 * a);
        raiz[1] = ((-1 * b) - sqrt(delta)) / (2 * a);

        printf("\n\nRaizes:\n x' = %4.f \n x'' = %3.f", raiz[0], raiz[1]);
    }
}

float retornaExponenciacao(float x, float y)
{

    int z;

    z = pow(x, y);

    return z;
}

float retornaPiEmFuncaoDaPrecisao(int precisao)
{

    float pi_final = 4, i;
    int j;

    for (i = 3, j = 1; i < precisao; j++)
    {

        if (j % 2 == 0)
        {
            pi_final = pi_final + (4 / i);
        }
        if (j % 2 == 1)
        {
            pi_final = pi_final - (4 / i);
        }

        i = i + 2;
    }

    return pi_final;
}

int retornaSomatorioDoExercicio90(int n, int m)
{

    int i;
    float somatorio = 0;

    for (i = (n * -1); i < m; i++)
    {

        if (i == 3 || i == -2)
        {
            i++;
        }

        somatorio += (float)(2 + i) / (i - 3);
    }

    return somatorio;
}

int retornaMaiorValorDoVetor(int *vetor, int tamanho_do_vetor)
{

    int i, maior = 0;

    i = tamanho_do_vetor;

    for (i = 0; i < tamanho_do_vetor; i++)
    {

        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }

    return maior;
}

void exercicio83()
{
    int inteiro, fatorial;

    do
    {
        printf("Digite um valor inteiro, maior do que zero\n");
        scanf("%d", &inteiro);
    } while (inteiro <= 0);

    fatorial = calculaFatorial(inteiro);

    printf(" %d! = %d\n", inteiro, fatorial);
}

void exercicio84()
{
    int valor1, valor2, valor3, resultado;
    printf("Digite tres valores inteiros\n");
    scanf("%d%d%d", &valor1, &valor2, &valor3);
    resultado = retornaMaiorValor(valor1, valor2, valor3);
    printf("Entre os tres valores digitados, o maior eh: %d\n", resultado);
}

void exercicio85()
{
    int valor1, valor2, valor3, resultado;
    printf("Digite tres valores inteiros\n");
    scanf("%d%d%d", &valor1, &valor2, &valor3);
    resultado = retornaMenorValor(valor1, valor2, valor3);
    printf("Entre os tres valores digitados, o menor eh: %d\n", resultado);
}

void exercicio86()
{
    float a, b, c, resultado1, resultado2, delta;
    printf("Digite tres valores para a equacao: \n('a' 'b' e 'c')  \n");
    scanf("%f%f%f", &a, &b, &c);
    delta = retornaDelta(a, b, c);

    if (delta < 0)
    {
        printf("Nao ha raizes reais para a equacao \n");
    }
    else
    {
        resultado1 = ((-1 * b) + sqrt(delta)) / (2 * a);
        resultado2 = ((-1 * b) - sqrt(delta)) / (2 * a);

        printf("\n\nRaizes:\n x' = %4.f \n x'' = %3.f", resultado1, resultado2);
    }
}

void exercicio87()
{
    float a, b, c, raiz[2];
    printf("Digite tres valores para a equacao: \n('a' 'b' e 'c')  \n");
    scanf("%f%f%f", &a, &b, &c);

    printaRaizDoPolinomio2Grau(a, b, c, raiz);
}

void exercicio88()
{

    float x, y, z;
    printf("Digite um numero x: \n");
    scanf("%f", &x);
    printf("Digite um numero y: \n");
    scanf("%f", &y);

    z = retornaExponenciacao(x, y);

    printf("O resultado de %.2f elevado a %.2f eh: %.2f\n\n", x, y, z);
}

void exercicio89()
{

    int precisao;
    float pifunc;
    printf("\nDigite o valor da precisa0 do valor de pi:\n(Numero de somas a serem realizadas) \n");
    scanf("%d", &precisao);

    pifunc = retornaPiEmFuncaoDaPrecisao(precisao);
    printf("\n\nO valor de pi com a precisao %d eh: %.5f\n", precisao, pifunc);

    printf("\n");
}

void exercicio90()
{

    int m90, n90;
    float somatorio;
    do
    {
        printf("Digite um valor positivo de n para ser usado no somatorio: \n");
        scanf("%d", &n90);
        printf("Digite um valor positivo de m para ser usado no somatorio: \n");
        scanf("%d", &m90);
    } while (n90 <= 0 || m90 <= 0);

    somatorio = retornaSomatorioDoExercicio90(n90, m90);

    printf("Somatorio eh: %.2f\n\n", somatorio);
}

void exercicio91()
{

    int maior, vetor[10] = {1, 43, 22, 77, 23, 61, 79, 90, 11, 17};

    maior = retornaMaiorValorDoVetor(vetor, 10);
    printf("\nMaior numero do vetor predfinido eh: %d\n", maior);
}

int main(int argc, char **argv)
{

    int nExercicio = 1;

    do
    {
        printf("\nSecao 01\n\nDigite o numero do exercicio que deseja executar (83:91) ou 0 para sair para o menu de secoes: ");
        scanf(" %d", &nExercicio);

        switch (nExercicio)
        {
        case 0:
            printf("\nVoltando ao menu de secoes!");
            break;
        case 83:
        {
            exercicio83();
            break;
        }
        case 84:
        {
            exercicio84();
            break;
        }
        case 85:
        {
            exercicio85();
            break;
        }
        case 86:
        {
            exercicio86();
            break;
        }
        case 87:
        {
            exercicio87();
            break;
        }
        case 88:
        {
            exercicio88();
            break;
        }
        case 89:
        {
            exercicio89();
            break;
        }
        case 90:
        {
            exercicio90();
            break;
        }
        case 91:
        {
            exercicio91();
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
//--