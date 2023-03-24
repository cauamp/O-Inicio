#include <stdio.h>
#include <math.h>
#define SUCESSO 0
#define TAMANHO_MAX_NOME 50
/*
    
    Aluno: Cauã Magalhães Pereira
    Nimero de matricula: 2020951805
    Turma: 205
    
 */

void exercicio01(void)
{

    printf("Hello World!\n");
}

void exercicio02(void)
{
    int inteiro;
    printf("Digite um valor inteiro\n");
    scanf("%d", &inteiro);
    printf("%d\n", inteiro);
}

void exercicio03(void)
{
    int inteiro;
    printf("Digite um valor inteiro\n");
    scanf("%d", &inteiro);

    printf("Inteiro Digitado: %d\n", inteiro);
}

void exercicio04(void)
{
    int inteiro, inteiro2, resultado;
    printf("Digite dois valores inteiros\n");
    scanf("%d%d", &inteiro, &inteiro2);
    resultado = inteiro + inteiro2;
    printf("%d\n", resultado);
}

void exercicio05(void)
{
    int inteiro, inteiro2, resultado;
    printf("Digite dois valores inteiros\n");
    scanf("%d%d", &inteiro, &inteiro2);

    resultado = inteiro + inteiro2;
    printf("A soma de %d com %d = %d\n", inteiro, inteiro2, resultado);
}

void exercicio06(void)
{
    int inteiro, inteiro2, resultado;
    float resto;
    printf("Digite dois valores inteiros\n");
    scanf("%d %d", &inteiro, &inteiro2);

    resultado = inteiro / inteiro2;
    resto = inteiro % inteiro2;
    printf("Resultado da divisao : %d \nResto da divisao: %.2f\n", resultado, resto);
}

void exercicio07(void)
{
    int inteiro, inteiro2;
    float resultado;

    printf("Digite dois valores inteiros\n");
    scanf("%d %d", &inteiro, &inteiro2);

    resultado = (float)inteiro / inteiro2;

    printf("%d/%d=%.3f \n", inteiro, inteiro2, resultado);
}

void exercicio08(void)
{
    char caractere, lixo; //A última variavel serve para armazena o \n acumulado no buffer
    printf("Digite um caractere\n");
    scanf("%c %c", &lixo, &caractere);

    printf("Codigo ASCII %d\n", caractere);
}

void exercicio09(void)
{

    char nome[TAMANHO_MAX_NOME], lixo; //A última variavel serve para armazena o \n acumulado no buffer
    printf("\nDigite um nome, sem espacos!\n");
    scanf("%c %s", &lixo, &nome);
    
    printf("Nome: %s\n", nome);
    
}

void exercicio10(void)
{

    char nome[TAMANHO_MAX_NOME], lixo; //A última variavel serve para armazena o \n acumulado no buffer
    printf("Digite um nome, com espacos!\n");
    scanf("%c", &lixo);
    fgets(nome, TAMANHO_MAX_NOME, stdin);

    printf("Nome: %s\n", nome);
}

void exercicio11(void)
{
    int inteiro;
    float numero;
    char caractere, palavra[TAMANHO_MAX_NOME], lixo; //A última variavel serve para armazena o \n acumulado no buffer

    printf("Digite um numero inteiro\n");
    scanf("%d", &inteiro);

    printf("Digite um caractere!\n");
    scanf("%c %c", &lixo, &caractere);

    printf("Digite uma numero real (float)\n");
    scanf("%f", &numero);

    printf("Digite uma palavra, sem espacos!\n");
    scanf("%s", &palavra);

    printf("\n\n inteiro: %d\n char: %c\n float: %.3f\n string: %s", inteiro, caractere, numero, palavra);
}

void exercicio12(void)
{
    int inteiro, inteiro2, resultado;
    printf("Digite dois valores inteiros\n");
    scanf("%d%d", &inteiro, &inteiro2);

    resultado = pow(inteiro, inteiro2);
    printf("A %d elevado a %d = %d\n", inteiro, inteiro2, resultado);
}

int main(int argc, char **argv)
{

    int nExercicio = 1;

    do
    {
        printf("Digite o numero do exercicio que deseja executar (1:12) ou 0 para sair: ");
        scanf("%d", &nExercicio);

        switch (nExercicio)
        {
        case 0:
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
        default:
        {
            printf("Voce escolheu um exercicio invalido.\n");
        }
        }

        
        printf("\n\n\n");

    } while (nExercicio != 0);

    return SUCESSO;
}
