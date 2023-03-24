/*
    TURMA 205

    GRUPO:
    Cauã Magalhães Pereira;
    Fernando Alves de Freitas;
    Pedro Guilherme Andrade Salgado;
    Gabriel Lyan Barbosa de Assis.

*/

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

//--------------------------------------------------------------------------------------------------------------------------------------
int XOR(int num1, int num2)
{

    if (num1 == num2)
    {
        return 0;
    }
    else
    {
        return 1;
    };
}

int * alocaVetoresInt (int tamanhoVetor){
	int * v;
	v = (int *) (malloc (tamanhoVetor * sizeof (int)));
	return v;
}

int ** AlocaMatrizInt (int NumLinhas, int NumColunas){
	int ** matriz;
	int i;
	
	matriz = (int**)(malloc (NumLinhas * sizeof(int*)));
	
	for (i = 0; i < NumLinhas; i++){
		
		matriz[i] = (int*)(malloc(NumColunas * sizeof(int)));
		
	}
	return matriz;
}

char *alocaString(int tamanho_string){

    char *string;

    string = (char *) (malloc (tamanho_string * sizeof(char)));

    return string; 
}
//--------------------------------------------------------------------------------------------------------------------------------------
void exercicio01()
{

    printf("Hello World!\n");
}

void exercicio02()
{
    int inteiro;
    printf("Digite um valor inteiro\n");
    scanf("%d", &inteiro);
    printf("%d\n", inteiro);
}

void exercicio03()
{
    int inteiro;
    printf("Digite um valor inteiro\n");
    scanf("%d", &inteiro);

    printf("Inteiro Digitado: %d\n", inteiro);
}

void exercicio04()
{
    int inteiro, inteiro2, resultado;
    printf("Digite dois valores inteiros\n");
    scanf("%d%d", &inteiro, &inteiro2);
    resultado = inteiro + inteiro2;
    printf("%d\n", resultado);
}

void exercicio05()
{
    int inteiro, inteiro2, resultado;
    printf("Digite dois valores inteiros\n");
    scanf("%d%d", &inteiro, &inteiro2);

    resultado = inteiro + inteiro2;
    printf("A soma de %d com %d = %d\n", inteiro, inteiro2, resultado);
}

void exercicio06()
{
    int inteiro, inteiro2, resultado;
    float resto;
    printf("Digite dois valores inteiros\n");
    scanf("%d %d", &inteiro, &inteiro2);

    resultado = inteiro / inteiro2;
    resto = inteiro % inteiro2;
    printf("Resultado da divisao : %d \nResto da divisao: %.2f\n", resultado, resto);
}

void exercicio07()
{
    int inteiro, inteiro2;
    float resultado;

    printf("Digite dois valores inteiros\n");
    scanf("%d %d", &inteiro, &inteiro2);

    resultado = (float)inteiro / inteiro2;

    printf("%d/%d=%.3f \n", inteiro, inteiro2, resultado);
}

void exercicio08()
{
    char caractere, lixo; //A última variavel serve para armazena o \n acumulado no buffer
    printf("Digite um caractere\n");
    scanf("%c %c", &lixo, &caractere);

    printf("Codigo ASCII %d\n", caractere);
}

void exercicio09()
{

    char nome[TAMANHO_MAX_NOME], lixo; //A última variavel serve para armazena o \n acumulado no buffer
    int espaco = false, i;
    printf("\nDigite um nome, sem espacos!\n");
    getchar();
    fgets(nome, TAMANHO_MAX_NOME, stdin);

    for (i = 0; i < strlen(nome); i++)
    {
        if (nome[i] == ' ')
        {
            espaco = true;
            printf("\n\nA string digitada tem um espaco!\n");
            break;
        }
        if (nome[i] == '\n')
        {
            nome[i] = nome[i + 1];
        }
    }
    if (espaco == false)
    {
        printf("Nome: %s\n", nome);
    }
    else
    {
        printf("Voltando para o menu de exercicios");
    }
}

void exercicio10()
{

    char nome[TAMANHO_MAX_NOME], lixo; //A última variavel serve para armazena o \n acumulado no buffer
    printf("Digite um nome, com espacos!\n");
    scanf("%c", &lixo);
    fgets(nome, TAMANHO_MAX_NOME, stdin);

    printf("Nome: %s\n", nome);
}

void exercicio11()
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

void exercicio12()
{
    int inteiro, inteiro2, resultado;
    printf("Digite dois valores inteiros\n");
    scanf("%d%d", &inteiro, &inteiro2);

    resultado = pow(inteiro, inteiro2);
    printf("A %d elevado a %d = %d\n", inteiro, inteiro2, resultado);
}
//--------------------------------------------------------------------------------------------------------------------------------------
void exercicio13()
{

    char str[TAMANHO_MAX_NOME], str_inv[TAMANHO_MAX_NOME];
    int i, t, j, espaco = false;

    //coleta de dados

    printf("Digite uma string, sem espaco, para imprimi-la de tras para frente: \n");

    getchar();
    fgets(str, TAMANHO_MAX_NOME, stdin);

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            espaco = true;
            printf("A string digitada tem um espaco!\n");
            break;
        }
        if (str[i] == '\n')
        {
            str[i] = str[i + 1];
        }
    }

    if (espaco == false)
    {

        //scanf("%s", lixo);
        //tamanho da string digitada
        t = strlen(str);

        //procedimentos
        for (i = 0; i < t; i++)
        {

            j = t - i - 1;

            str_inv[i] = str[j];
            //printf("%d %c \n", i, str[j]);
        };
        //Removendo caracteres indesejados da string

        str_inv[t] = '\0';
        //resultados
        printf(" A string: '%s' \n"
               " A string invertida de tamanho %d : '%s'\n",
               str, t, str_inv);
    }
    else
    {
        printf("Voltando para o menu de exercicios");
    }
}

void exercicio14()
{

    char str[TAMANHO_MAX_NOME];
    int tan;

    //coleta de dados
    printf("Digite uma frase para saber seu numero de caracteres: \n");
    getchar();
    fgets(str, 50, stdin);

    //tamanho da string digitada
    tan = strlen(str) - 1; // -1 por causa do /o

    //resultados
    printf(" A frase digitada:\n  %s  \n  Possui %d caracteres, incluindo espacos. \n", str, tan);
}

void exercicio15()
{

    char str[TAMANHO_MAX_NOME];
    int i, tan, cont_esp = 0, cont_a = 0;

    //coleta de dados
    printf("Digite uma frase para saber seu numero de letras \"a\" e espacos:  ");
    getchar();
    fgets(str, 50, stdin);

    //tamanho da string digitada
    tan = strlen(str) - 2; //-2 por causa do /0 e do enter

    //procedimentos
    for (i = 0; i <= tan; i++)
    {

        if (str[i] == 'a')
        {

            cont_a++;
        }
        else if (str[i] == ' ')
        {

            cont_esp++;
        }
    }

    //Removendo o "new line" da frase

    str[tan + 1] = '\0';

    //resultados
    printf(" A frase digitada: \"%s\" possui %d letras \"a\" e %d espacos. \n", str, cont_a, cont_esp);
}

void exercicio16()
{

    int num;

    printf("Digite um numero para saber se ele eh impar ou par:");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("O numero %d eh par \n", num);
    }
    else
    {
        printf("O numero %d eh impar \n", num);
    }
}

void exercicio17()
{

    int num;

    printf("Digite um numero para saber se ele eh  positivo,negativo ou zero:");
    scanf("%d", &num);

    if (num * (-1) > 0)
    {
        printf("O numero %d eh negativo \n", num);
    }
    else if (num * (-1) < 0)
    {
        printf("O numero %d eh positivo \n", num);
    }
    else
    {
        printf("O numero %d eh zero \n", num);
    }
}

void exercicio18()
{

    int num1, num2;

    printf("Digite dois numeros para saber se o primeiro eh divisvel pelo segundo : \n");
    printf("X:");
    scanf("%d", &num1);
    getchar();
    printf("\nY:");
    scanf("%d", &num2);

    if (num1 % num2 == 0)
    {
        printf("O numero X: %d, eh divisivel por Y: %d \n", num1, num2);
    }
    else
    {
        printf("O numero X: %d, nao eh divisivel por Y: %d \n", num1, num2);
    }
}

void exercicio19()
{

    int num1, num2;

    printf("Digite dois numeros para saber se o segundo eh multiplo do primeiro: \n");
    printf("X:");
    scanf("%d", &num1);
    getchar();
    printf("\nY:");
    scanf("%d", &num2);

    if (num2 % num1 == 0)
    {
        printf("O numero Y: %d, eh multilpo de X: %d \n", num2, num1);
    }
    else
    {
        printf("O numero Y: %d, nao eh multiplo de X: %d \n", num2, num1);
    }
}

void exercicio20()
{

    int num;

    printf("Digite um numero da base x16 para ver seu correspondente na base x10: ");
    scanf("%x", &num);

    printf("Numero lido: \n"
           "Na base 16: %X \n"
           "Na base 10: %d \n",
           num, num);
}

void exercicio21()
{

    int num1, num2, numAND, numOR, numXOR;

    printf("Digite dois numeros inteiros para ver operacoes AND, OR e XOR entre eles. \n"
           "Primeiro numero:");
    scanf("%d", &num1);
    printf("Segundo numero:");
    scanf("%d", &num2);

    numAND = num1 && num2;
    numOR = num1 || num2;
    numXOR = XOR(num1, num2);

    printf("\n Resultados: \n"
           "Primeiro numero lido: %d\n"
           "Segundo numero lido: %d \n"
           "%d AND %d = %d \n"
           "%d OR %d  = %d \n"
           "%d XOR %d = %d \n",
           num1, num2, num1, num2, numAND, num1, num2, numOR, num1, num2, numXOR);
}

void exercicio22()
{

    int num1, num2, numAND, numOR, numXOR;

    printf("Digite dois numeros, na base x16, para ver operacoes AND, OR e XOR entre eles. \n"
           "Primeiro numero:");
    scanf("%x", &num1);
    printf("Segundo numero:");
    scanf("%x", &num2);

    numAND = num1 && num2;
    numOR = num1 || num2;
    numXOR = XOR(num1, num2);

    printf("\n Resultados: \n"
           "Primeiro numero lido: X16: %X X10: %d\n"
           "Segundo numero lido:  X16: %X X10: %d \n"
           "%X AND %X = X16: %X  X10: %d \n"
           "%X OR %X  = X16: %X  X10: %d\n"
           "%X XOR %X = X16: %X  X10: %d\n",
           num1, num2, num1, num2, num1, num2, numAND,
           numAND, num1, num2, numOR, numOR, num1, num2, numXOR, numXOR);
}

void exercicio23()
{

    int num1, num2, numAND, numOR, numXOR;

    printf("Digite dois numeros, na base x16, para ver operacoes AND, OR e XOR entre eles. \n"
           "Primeiro numero:");
    scanf("%x", &num1);
    printf("Segundo numero:");
    scanf("%x", &num2);

    numAND = num1 & num2;
    numOR = num1 | num2;
    numXOR = num1 ^ num2;

    printf("\n Resultados: \n"
           "Primeiro numero lido: X16: %X X10: %d\n"
           "Segundo numero lido:  X16: %X X10: %d \n"
           "%X AND %X = X16: %X  X10: %d \n"
           "%X OR %X  = X16: %X  X10: %d\n"
           "%X XOR %X = X16: %X  X10: %d\n",
           num1, num2, num1, num2, num1, num2, numAND,
           numAND, num1, num2, numOR, numOR, num1, num2, numXOR, numXOR);
}

void exercicio24()
{
    int cateto1, cateto2, hipo;

    printf("Digite os valores dos lados de um triangulo, para saber se eh possivel formar um triangulo com eles. \n"
           "O menor Lado: ");
    scanf("%d", &cateto1);
    printf("O lado mediano:");
    scanf("%d", &cateto2);
    printf("O maior Lado :");
    scanf("%d", &hipo);

    if (pow(hipo, 2) == pow(cateto1, 2) + pow(cateto2, 2))
    {
        printf("\n \nEh possivel montar um triangulo retangulo com os seguintes valores: \n"
               "Cateto1: %d \n"
               "Cateto2: %d \n"
               "Hipotenusa: %d \n",
               cateto1, cateto2, hipo);
    }
    else if (cateto1 < cateto2 + hipo && cateto2 < cateto1 + hipo && hipo < cateto1 + cateto2)
    {
        printf("\n \nEh possivel montar um triangulo com os seguintes valores para cada lado: \n"
               "Lado1: %d \n"
               "Lado2: %d \n"
               "Lado3: %d \n",
               cateto1, cateto2, hipo);
    }
    else
    {
        printf("\n \nNao eh possivel montar um triangulo com os seguintes valores para cada lado: \n"
               "Lado1: %d \n"
               "Lado2: %d \n"
               "Lado3: %d \n",
               cateto1, cateto2, hipo);
    }
}
//--------------------------------------------------------------------------------------------------------------------------------------
void exercicio25()
{

    char string[TAMANHO_MAX_NOME], lixo;
    int i, ehpalindromo = 0;
    printf("Digite uma palavra para verificar se a mesma eh um palindromo: ");
    scanf("%c", &lixo);
    fgets(string, TAMANHO_MAX_NOME, stdin);
    int tamanhoDigitado = strlen(string) - 1;
    int verificador;
    for (i = 0; i < tamanhoDigitado; i++)
    {
        verificador = tamanhoDigitado - 1 - i;
        if (string[i] != string[verificador])
        {
            break;
        }
        if (i == verificador)
        {
            ehpalindromo = 1;
            break;
        }
    }

    if (ehpalindromo == 1)
    {
        printf("\nA palavra digitada eh um palindromo!\n");
    }
    else
    {
        printf("\nA palavra digitada nao eh um palindromo!\n");
    }
}

void exercicio26()
{

    int numero1, numero2, numero3, numero4, menor_numero, maior_numero;

    printf("Digite quatro numeros inteiros: ");
    scanf("%d%d%d%d", &numero1, &numero2, &numero3, &numero4);

    if (numero1 > numero2)
    {

        maior_numero = numero1;
        menor_numero = numero2;
    }
    else
    {

        maior_numero = numero2;
        menor_numero = numero1;
    }

    if (numero3 > maior_numero)
    {

        maior_numero = numero3;
    }

    if (numero3 < menor_numero)
    {

        menor_numero = numero3;
    }

    if (numero4 > maior_numero)
    {

        maior_numero = numero4;
    }

    if (numero4 < menor_numero)
    {

        menor_numero = numero4;
    }

    printf("\nO maior numero digitado eh: %d\n", maior_numero);
    printf("O menor numero digitado eh: %d\n", menor_numero);
}

void exercicio27()
{

    int numero[6], soma_dos_pares = 0, soma_dos_impares = 0, i;

    printf("Digite seis numeros inteiros: ");
    scanf("%d%d%d%d%d%d", &numero[0], &numero[1], &numero[2], &numero[3], &numero[4], &numero[5]);
    printf("\nOs numeros digitados foram: %d, %d, %d, %d, %d e %d\n", numero[0], numero[1], numero[2], numero[3], numero[4], numero[5]);

    for (i = 0; i < 6; i++)
    {

        if (numero[i] % 2 == 0)
        {

            soma_dos_pares = soma_dos_pares + numero[i];
        }
        else
        {

            soma_dos_impares = soma_dos_impares + numero[i];
        }
    }

    printf("A soma dos numeros pares digitados eh: %d\n", soma_dos_pares);
    printf("A soma dos numeros impares digitados eh: %d\n", soma_dos_impares);
}

void exercicio28()
{

    int nota;

    printf("Digite um valor positivo entre 0 e 100: ");
    scanf("%d", &nota);

    if (nota >= 0 && nota <= 100)
    {

        if (nota >= 90 && nota <= 100)
        {

            printf("O conceito do aluno foi A!\n");
        }
        else if (nota >= 80 && nota < 90)
        {

            printf("O conceito do aluno foi B!\n");
        }
        else if (nota >= 70 && nota < 80)
        {

            printf("O conceito do aluno foi C!\n");
        }
        else if (nota >= 60 && nota < 70)
        {

            printf("O conceito do aluno foi D!\n");
        }
        else if (nota < 60)
        {

            printf("O conceito do aluno foi E (reprovado)!\n");
        }
    }
    else
    {

        printf("O numero digitado nao esta no intervalo solicitado, programa encerrado!\n");
    }
}

void exercicio29()
{

    int i, fatorial = 1, numero;

    printf("Digite um numero inteiro para saber o seu fatorial: ");
    scanf("%d", &numero);

    for (i = numero; i > 0; i--)
    {
        fatorial = fatorial * i;
    }

    printf("O fatorial do numero digitado eh: %d", fatorial);
}

void exercicio30()
{

    float numerador = 1, denominador = 1, i, j = 0, S = 0, equacao;

    for (i = 0; i < 50; i++)
    {

        equacao = (numerador + j) / (denominador + i);
        j = j + 2;
        S = S + equacao;
    }

    printf("S = %f\n", S);
}

void exercicio31()
{

    float numerador = 2, denominador = 50, i, j = 50, equacao;
    double S = 0;

    for (i = 1; i < 51; i = i + 1)
    {

        equacao = (float)(pow(numerador, i)) / (denominador - j);
        j = j - 1;
        S = S + equacao;
    }

    printf("S = %f\n", S);
    printf("O numero da soma foi grande demais para ser exibido e armazenado! Favor entrar em contato!\n");
}

void exercicio32()
{

    float numerador1 = 37, numerador2 = 38, denominador = 1, i, S = 0, equacao;

    for (i = 0; i < 37; i++)
    {

        equacao = ((numerador1 - i) * (numerador2 - i)) / (denominador + i);
        S = S + equacao;
    }

    printf("S = %f\n", S);
}

void exercicio33()
{

    float numerador = 1000, denominador = 1, i, j = 0, k = 1, S = 0, equacao;

    for (i = 0; i < 50; i++)
    {

        equacao = (numerador - j) / (denominador + i);
        j = j + 3;
        S = S + (equacao * k);
        k = k * (-1);
    }

    printf("A soma dos 50 primeiros termos da serie eh: %f\n", S);
}

void exercicio34()
{

    float numerador = 480, denominador = 10, i, j = 0, k = 1, S = 0, equacao;

    for (i = 0; i < 30; i++)
    {

        equacao = (numerador - j) / (denominador + i);
        j = j + 5;
        S = S + (equacao * k);
        k = k * (-1);
    }

    printf("A soma dos 30 primeiros termos da serie eh: %f\n", S);
}
//--------------------------------------------------------------------------------------------------------------------------------------
void exercicio35()
{

    float resultado = 0, resultado2 = 0, angulo = 0, aux1, aux2, aux3;

    printf("Tabela dos SENOS\n Angulo(rad)      Sen(Seq)          Sen(Sin)\n----------------------------------------------------\n\n");
    do
    {
        aux1 = (pow(angulo, 3)) / 6;
        aux2 = (pow(angulo, 5)) / 120;
        aux3 = (pow(angulo, 7)) / 5040;
        resultado = angulo - aux1 + aux2 - aux3;
        resultado2 = sin(angulo);
        printf("   %.2f %16.2f %16.2f\n", angulo, resultado, resultado2);

        angulo = angulo + 0.1;
    } while (angulo <= pi * 2);
}

void exercicio36()
{

    float pi_final = 4, i, diferenca;
    int j;

    for (i = 3, j = 1; i < 1534655; j++)
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

    diferenca = pi_final - pi;

    printf("Valor de pi com precisao 0.0001: %.4f\n\n", pi_final);
    printf("\n\nDiferenca eh igual: %.4f", diferenca);
}

void exercicio37()
{

    int i, j = 3;
    double t, angulo = 0.1 * pi, fatorial, variavel_qualquer = 0, valor_real = 0, valor_formula = 1;

    for (i = 2; i < 22; i++)
    {

        fatorial = 1;

        for (t = i; t > 0; t--)
        {

            fatorial = fatorial * t;
        }

        if (i % 2 == 0)
        {

            valor_formula = valor_formula - pow(angulo, i) / fatorial;
        }

        if (i % 2 == 1)
        {

            valor_formula = valor_formula + pow(angulo, i) / fatorial;
        }

        j++;
        fatorial = 0;
        angulo = angulo + 0.1 * pi;
    }

    printf("\nValor formula sem funcao sin(): %f\n", valor_formula);

    angulo = 0.1 * pi;

    for (i = 0; i < 20; i++)
    {

        variavel_qualquer = sin(angulo) / angulo;

        valor_real = valor_real + variavel_qualquer;

        angulo = angulo + 0.1 * pi;
    }

    printf("\n\nValor usando a funcao sin(): %f\n\n", valor_real);

    printf("Diferenca entre valores: %f\n\n", valor_formula - valor_real);
}

void exercicio38()
{

    int soma = 0, n, i;

    printf("insira um numero: ");
    scanf("%d", &n);

    for (i = -n; i <= n; i++)
    {

        if (2 * i - 1 == 0 || i + 2 == 0)
        { // condições para que se o numerador ou denominador forem == 0 o i++ incrementa para nao dar erro;
            i++;
        }

        soma = soma + (i + 2) / (2 * i - 1);
    }

    printf("Somatorio eh igual a: %d", soma);
}

void exercicio39()
{

    int n, x, i, t, fatorial = 1, soma = 0;

    printf("Digite um numero 'n' qualquer: ");
    scanf("%d", &n);
    printf("Digite um numero 'x' qualquer: ");
    scanf("%d", &x);

    for (i = 1; i <= n; i++)
    {

        fatorial = 1;

        for (t = i; t > 0; t--)
        {

            fatorial = fatorial * t;
        }

        soma = soma + (pow(x, i) / fatorial);
    }

    printf("\nSomatorio eh igual a: %d\n\n", soma);
}

void exercicio40()
{

    float n, y, i, t, fatorial = 1, soma = 0;

    printf("Digite um numero 'n' qualquer: ");
    scanf("%f", &n);
    printf("Digite um numero 'y' qualquer: ");
    scanf("%f", &y);

    for (i = 1; i <= n; i++)
    {

        fatorial = 1;

        for (t = i; t > 0; t--)
        {

            fatorial = fatorial * t;
        }

        soma = soma + (pow(y, -i) / fatorial);
    }

    printf("\nSomatorio eh igual a: %f \n\n", soma);
}

void exercicio41()
{

    float n, i, soma = 0, numerador, denominador;

    printf("Digite um numero: ");
    scanf("%f", &n);

    for (i = 1; i <= n; i++)
    {

        numerador = (i + 2 * pi);
        denominador = ((2 * i * pi) - 1);

        if (numerador == 0 || denominador == 0)
        {
            i = i + 1;
        }

        soma = soma + (numerador / denominador);
    }

    printf("O somatorio eh: %.2f", soma);
}
//--------------------------------------------------------------------------------------------------------------------------------------
void exercicio42()
{
    int N = 5, i = 0, j = 0;
    do
    {
        printf("Digite um valor para N (3:15)  \n");
        scanf("%d", &N);
        if (N > 15 || N < 3)
        {
            printf("Valor invalido!\n");
        }
    } while (N > 15 || N < 3);

    printf("\n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void exercicio43()
{
    int N = 5, i = 0, j = 0;
    do
    {
        printf("Digite um valor para N (3:15)  \n");
        scanf("%d", &N);
        if (N > 15 || N < 3)
        {
            printf("Valor invalido!\n");
        }
    } while (N > 15 || N < 3);

    printf("\n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", N);
        }
        printf("\n");
    }
}

void exercicio44()
{
    int N = 5, i = 0, j = 0;
    do
    {
        printf("Digite um valor para N (3:15)  \n");
        scanf("%d", &N);
        if (N > 15 || N < 3)
        {
            printf("Valor invalido!\n");
        }
    } while (N > 15 || N < 3);

    printf("\n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", j + 1);
        }
        printf("\n");
    }
}

void exercicio45()
{
    int N = 5, i = 0, j = 0;
    do
    {
        printf("Digite um valor para N (3:15)  \n");
        scanf("%d", &N);
        if (N > 15 || N < 3)
        {
            printf("Valor invalido!\n");
        }
    } while (N > 15 || N < 3);

    printf("\n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", N - j);
        }
        printf("\n");
    }
}

void exercicio46()
{
    int N = 5, i = 0, j = 0;
    do
    {
        printf("Digite um valor para N (3:15)  \n");
        scanf("%d", &N);
        if (N > 15 || N < 3)
        {
            printf("Valor invalido!\n");
        }
    } while (N > 15 || N < 3);

    printf("\n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void exercicio47()
{
    int N = 5, i = 0, j = 0;
    do
    {
        printf("Digite um valor para N (3:15)  \n");
        scanf("%d", &N);
        if (N > 15 || N < 3)
        {
            printf("Valor invalido!\n");
        }
    } while (N > 15 || N < 3);

    printf("\n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void exercicio48()
{
    int N = 5, i = 0, j = 0;
    do
    {
        printf("Digite um valor para N (3:15)  \n");
        scanf("%d", &N);
        if (N > 15 || N < 3)
        {
            printf("Valor invalido!\n");
        }
    } while (N > 15 || N < 3);

    printf("\n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N - i; j++)
        {
            printf("%d ", j + 1);
        }
        printf("\n");
    }
}

void exercicio49()
{
    int N = 5, i = 0, j = 0;
    do
    {
        printf("Digite um valor para N (3:15)  \n");
        scanf("%d", &N);
        if (N > 15 || N < 3)
        {
            printf("Valor invalido!\n");
        }
    } while (N > 15 || N < 3);

    printf("\n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N - i; j++)
        {
            printf("%d ", N - j);
        }
        printf("\n");
    }
}
//--------------------------------------------------------------------------------------------------------------------------------------
void exercicio50()
{
    int N = 0, i = 0, j = 0;

    printf("Digite um valor para N (3:15)  \n");
    scanf("%d", &N);

    printf("\n");

    for (i = 0; i < N; i++)
    {

        for (j = 0; j < N - i; j++)
        {
            printf("%d ", N - i - j);
        }
        printf("\n");
        j = 0;
    }
}

void exercicio51()
{
    int N = 0, i = 0, j = 0;

    printf("Digite um valor para N \n");
    scanf("%d", &N);

    printf("\n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
        j = 0;
    }
}

void exercicio52()
{
    int N = 5, i = 0, j = 0;

    printf("Digite um valor para N  \n");
    scanf("%d", &N);

    printf("\n");

    for (i = 0; i < (2 * N) - 1; i++)
    {
        if (i <= ((2 * N) - 1) / 2)
        {
            for (j = 0; j <= i; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (j = 0; j < ((2 * N) - 1) - i; j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}

void exercicio53()
{
    int N = 5, i = 0, j = 0;

    printf("Digite um valor para N  \n");
    scanf("%d", &N);

    printf("\n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j <= N + i; j++)
        {
            if (j < N - i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}

void exercicio54()
{
    int N = 5, i = 0, j = 0;
    do
    {
        printf("Digite um valor para N (1:20)  \n");
        scanf("%d", &N);
        if (N >= 20 || N < 1)
        {
            printf("Valor invalido!\n");
        }
    } while (N >= 20 || N < 1);

    printf("\n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i == 0 || i == N - 1 || j == 0 || j == N - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void exercicio55()
{
    int altura = 9, i = 0, j = 0, espacos, asteriscos = 1;

    espacos = (altura - 1) / 2;
    ;

    for (i = 0; espacos > 1; i++)
    {

        for (j = 1; j <= espacos; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= asteriscos; j++)
        {
            printf("*");
        }

        espacos--;
        asteriscos += 2;
        printf("\n");
    }
    for (i = 0; asteriscos > 0; i++)
    {

        for (j = 1; j <= espacos; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= asteriscos; j++)
        {
            printf("*");
        }

        asteriscos -= 2;
        espacos++;

        printf("\n");
    }
}

void exercicio56()
{
    int altura, i = 0, j = 0, espacos, asteriscos = 1;

    do
    {
        printf("Digite um valor impar para altura (1:19)");
        scanf("%d", &altura);

        if (altura % 2 == 0)
        {
            printf("VALOR INVALIDO\n\n");
        }

    } while (altura % 2 == 0 || altura > 19 || altura < 1);

    printf("\n\n");

    espacos = (altura - 1) / 2;
    ;

    for (i = 0; espacos > 1; i++)
    {

        for (j = 1; j <= espacos; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= asteriscos; j++)
        {
            printf("*");
        }

        espacos--;
        asteriscos += 2;
        printf("\n");
    }
    for (i = 0; asteriscos > 0; i++)
    {

        for (j = 1; j <= espacos; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= asteriscos; j++)
        {
            printf("*");
        }

        asteriscos -= 2;
        espacos++;

        printf("\n");
    }
}

void exercicio57()
{
    int N = 5, i = 0, j = 0, soma = 0;
    do
    {
        printf("Digite um valor para N (1:9)  \n");
        scanf("%d", &N);
        if (N > 9 || N < 1)
        {
            printf("Valor invalido!\n");
        }
    } while (N > 9 || N < 1);

    printf("\n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            printf("%d ", j + 1);
            soma += j + 1;
        }
        for (j = 0; j < 20 - (i * 2); j++)
        {
            printf(" ");
        }

        printf("%d \n", soma);
        soma = 0;
    }
}
//--------------------------------------------------------------------------------------------------------------------------------------
void exercicio58()
{

    int i, numero1, numero2, numero3, numero4, numero5, maior = 0, menor = __INT_MAX__;
    int vetor[5];

    printf("Digite 5 numeros inteiros: \n");
    scanf("%d%d%d%d%d", &numero1, &numero2, &numero3, &numero4, &numero5);

    vetor[0] = numero1;
    vetor[1] = numero2;
    vetor[2] = numero3;
    vetor[3] = numero4;
    vetor[4] = numero5;

    printf("\n\nVetor em linha: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d", vetor[i]);
    }

    printf("\n\nVetor em Coluna: \n");

    for (i = 0; i < 5; i++)
    {
        printf("%d \n", vetor[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }

        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }

    printf("\n\nO maior numero digitado eh: %d", maior);
    printf("\n\nO menor numero digitado eh: %d", menor);
}

void exercicio59()
{

    int i, tamanho, soma = 0, maior = 0, menor = __INT_MAX__, media;
    int *vetor;

    do {
    printf("Digite o tamanho do vetor a ser gerado: \n");
    scanf("%d", &tamanho);
    }while(tamanho > 20 || tamanho < 0);
    
    
    vetor = alocaVetoresInt(tamanho);

    for (i = 0; i < tamanho; i++)
    {

        vetor[i] = rand() % 100;
    }

    printf("Vetor gerado: \n");

    for (i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }

    for (i = 0; i < tamanho; i++)
    {

        soma = soma + vetor[i];
    }

    media = soma / tamanho;

    printf("\n\nA media dos valores contidos no vetor eh: %d", media);

    for (i = 0; i < tamanho; i++)
    {

        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }

        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }

    printf("\n\nMaior valor do vetor eh: %d", maior);
    printf("\n\nMenor valor do vetor eh: %d", menor);

    free(vetor);

}

void exercicio60()
{

    int matriz[4][4], numero, i, j;

    printf("Digite um numero qualquer: \n");
    scanf("%d", &numero);

    for (i = 0; i < 4; i++)
    {

        for (j = 0; j < 4; j++)
        {

            matriz[i][j] = rand() % numero;
        }
    }

    printf("\n");

    for (i = 0; i < 4; i++)
    {

        for (j = 0; j < 4; j++)
        {

            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }
}

void exercicio61()
{

    int m, n, i, j;
    int **matriz;
    printf("Digite a dimensao n da matriz: (no maximo 6)\n");
    scanf("%d", &n);
    printf("Digite a dimensao m da matriz: (no maximo 6)\n");
    scanf("%d", &m);

    

    matriz = AlocaMatrizInt(n, m);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            matriz[i][j] = i + j;
        }
    }

    for (i = 0; i < n; i++)
    { // for para imprimir a matriz para verificação da questão;
        for (j = 0; j < m; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    free(matriz);

}

void exercicio62()
{

    int n, m, i, j;
    int **matriz;

    do
    {
        printf("Digite a dimensao n da matriz: (no maximo 6)\n");
        scanf("%d", &n);
        printf("Digite a dimensao m da matriz: (no maximo 6)\n");
        scanf("%d", &m);

        if (n > 6 || m > 6)
        {
            printf("Valor digitado Invalido!\n\n");
        }

    } while (n > 6 || m > 6);


    matriz = AlocaMatrizInt(n, m);

    for (i = 0; i < n; i++)
    {

        for (j = 0; j < m; j++)
        {

            matriz[i][j] = rand() - (RAND_MAX / 2);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%7.d ", matriz[i][j]);
        }
        printf("\n");
    }

    free(matriz);

}

void exercicio63()
{

    int vetor[10], i, j, soma, mult;

    for (i = 1; i < 11; i++)
    {
        vetor[i - 1] = i;
    }

    printf("TABUADA DE SOMA | 1 a 10: \n\n");

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            soma = vetor[i] + vetor[j];
            printf("%d + %d = %d\n", vetor[i], vetor[j], soma);
        }
        printf("\n\n");
    }

    printf("\n\nTABUADA DE MULTIPLICACAO | 1 a 10: \n\n\n\n");

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            mult = vetor[i] * vetor[j];
            printf("%d * %d = %d\n", vetor[i], vetor[j], mult);
        }
        printf("\n\n");
    }
}

void exercicio64()
{

    int i, matriz[5], maior = 0, soma = 0;

    for (i = 0; i < 5; i++)
    {
        matriz[i] = rand();
    }

    for (i = 0; i < 5; i++)
    {

        if (matriz[i] >= maior)
        {
            maior = matriz[i];
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d \n", matriz[i]);
    }

    printf("\n\nA/As posicao/posicoes do vetor que contem o maior numero deste eh/sao: ");

    for (i = 0; i < 5; i++)
    {
        if (matriz[i] == maior)
        {
            printf("%d ", i);
        }
    }

    for (i = 0; i < 5; i++)
    {
        soma = soma + matriz[i];
    }

    printf("\n\nSoma dos elementos do vetor eh: %d", soma);
}

void exercicio65()
{

    int i, j, matriz[3][3], maior = 0, soma = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matriz[i][j] = rand();
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matriz[i][j] >= maior)
            {
                maior = matriz[i][j];
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n\nA/As posicao/posicoes do vetor que contem o maior numero deste eh/sao: ");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matriz[i][j] == maior)
            {
                printf("%d %d", i, j);
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            soma = soma + matriz[i][j];
    }

    printf("\n\nSoma dos elementos do vetor eh: %d", soma);
}

void exercicio66()
{

    int m, n, i, j, soma_Linha = 0, soma_Coluna = 0;
    int **matriz;

    do{
    printf("Digite a dimensao n da matriz: (no maximo 10)\n");
    scanf("%d", &n);
    printf("Digite a dimensao m da matriz: (no maximo 10)\n");
    scanf("%d", &m);

    if(n > 10 || m > 10){
        printf("Valor digitado invalido! \n\n");
    }

    }while(n > 10 || m > 10);

    matriz = AlocaMatrizInt(n, m);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            matriz[i][j] = i + j;
        }
    }

    for (i = 0; i < n; i++)
    {

        for (j = 0; j < m; j++)
        {
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }

    printf("\n\nSoma de linhas: \n\n");

    for (i = 0; i < n; i++)
    {

        for (j = 0; j < m; j++)
        {
            soma_Linha = soma_Linha + matriz[i][j];
        }

        printf("Soma Valores linha %d eh: %d\n", i+1, soma_Linha);
        soma_Linha = 0;
    }

    printf("\n\n");

    for (i = 0; i < m; i++)
    {

        for (j = 0; j < n; j++)
        {
            soma_Coluna = soma_Coluna + matriz[j][i];
        }

        printf("Soma Valores coluna %d eh: %d\n", i+1, soma_Coluna);
        soma_Coluna = 0;
    }

    free(matriz);

}

void exercicio67()
{

    int tamanho, i;
    char lixo;
    char *string;

    printf("Digite o tamanho da string a ser digitada: \n");
    scanf("%d", &tamanho);

    string = alocaString(tamanho);

    for (i = 0; i < tamanho; i++)
    {

        printf("Digite o caracter da posicao %i da string: \n", i);
        scanf("%c", &lixo);
        scanf("%c", &string[i]);
    }

    printf("\n\n");

    for (i = 0; i < tamanho; i++)
    {
        printf("%c", string[i]);
    }

    free (string);

}

void exercicio68()
{

    int i, tamanho = 100, vetor[100];

    for (i = 0; i < tamanho; i++)
    {

        vetor[i] = rand() % 200;
    }

    printf("Vetor gerado: \n");

    for (i = 0; i < tamanho; i++)
    {

        printf("%d ", vetor[i]);
    }

}
//--------------------------------------------------------------------------------------------------------------------------------------
void exercicio69()
{
    /*69. Considere a matriz Z, 3×3 dada abaixo.
Z =
2 3 −1
0 1 0
1 −1 1

A partir dessa matriz, fa¸ca um programa que calcule a soma σ dada por:
σ =3∑1  Zi2 + 3∑1 Z3 j
Os ´ındices considerados nos somat´orios s˜ao os da matem´atica. Obviamente deve-se
fazer a adapta¸c˜ao para o programa em C.
*/
    int Z[3][3], i, j, somal = 0, somacol = 0, somatotal;

    Z[0][0] = 2;
    Z[0][1] = 3;
    Z[0][2] = -1;
    Z[1][0] = 0;
    Z[1][1] = 1;
    Z[1][2] = 0;
    Z[2][0] = 1;
    Z[2][1] = -1;
    Z[2][2] = 1;

    // mostrando a matriz no terminal
    printf("Matriz inicial: \n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf(" %d ", Z[i][j]);
        }
        printf("\n");
        j = 0;
    }
    //Realizando a somatoria
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            somal = Z[2][j] + somal;
        }
        printf("\n");
        somacol = Z[i][1] + somacol;
    }

    somatotal = somal + somacol;

    printf("O resultado da somatoria Zi2(I de 1 a 3) + Z3j(j de 1 a 3) eh = %d \n", somatotal);
    getchar();
}

void exercicio70()
{
    /*70. Faca um programa para preencher uma matriz n × m (n e m s˜ao inteiros informados
pelo usu´ario. Ambos devem ser menor ou igual a 6) com a regra:

       M [i] [j] = 2 ∗ i+ j

Ap´os preencher a matriz o programa deve calcular a soma de cada linha e mostrar
o valor calculado. O programa deve tamb´em mostrar a matriz no formato matricial.
Ao preencher usando a regra deve-se considerar a nota¸c˜ao da linguagem C (isto ´e, a
primeira posi¸c˜ao da matriz ´e (0,0)).

    int lin=0, col=0, ilin, icol;

*/
    int lin = 0, col = 0, ilin, icol, soma = 0, **m;

    //Recebendo as variaveis referentes a linhas e colunas da matriz
    do
    {
        printf("\n Digite um numero, entre 1 e 6, para ser as linhas da matriz:");
        scanf("%d", &lin);
        getchar();
        printf("Digite um numero, entre 1 e 6, para ser as colunas da matriz:");
        scanf("%d", &col);
        getchar();
        if (lin > 6 || lin < 1 || col > 6 || col < 1)
        {
            printf("\n Numeros digitados estao fora do intervalo aceito para linha"
                   " e coluna !!! DIGITE NUMEROS ENTRE 1 E 6 \n ");
        }
    } while (lin > 6 || lin < 1 || col > 6 || col < 1);

    //declarando a matriz

    m = AlocaMatrizInt(lin, col);

    //Preenchendo a matriz  e printando ela
    printf("\nMatriz seguida da soma da soma de suas linhas: \n");

    for (ilin = 0; ilin < lin; ilin++)
    {

        for (icol = 0; icol < col; icol++)
        {
            //Dando valor as posições
            m[ilin][icol] = 2 * ilin + icol;

            //somando a posições das linhas
            soma = m[ilin][icol] + soma;

            //printando cada posição
            printf("  %d ", m[ilin][icol]);

            //printando a soma das linhas
            if (icol == col - 1)
            {

                printf("         %d", soma);
            }
        }
        printf("\n");
        icol = 0;
        soma = 0;
    }
}

void exercicio71()
{

    /*
71. Fa¸ca um programa para preencher um vetor de 10 posi¸c˜oes usando a regra dado abaixo.
v[i] = i^3
*/
    int v[10], i;

    printf("Vetor de 10 posicoes, com cada uma seguindo a seguinte regra: "
           "v[i] = i^3 \n\n");

    for (i = 0; i < 10; i++)
    {

        v[i] = pow(i, 3);
        printf(" %d ", v[i]);
    }
}

void exercicio72()
{
    /*72. Fa¸ca um programa para preencher um vetor de 10 posi¸c˜oes usando a regra dada abaixo.
v[i] = i/2 se i ´e par
        (i+1)/2+i se i ´e ´ımpar
*/
    int v[10], i;

    printf("Vetor de 10 posicoes, com cada posicao uma seguindo a seguinte regra: \n "
           "v[i] = i/2 se i eh par \n"
           "v[i] = (i+1)/2+i se i eh impar\n\n");

    for (i = 0; i < 10; i++)
    {

        if (i % 2 == 0)
        { //se é par ....
            v[i] = i / 2;
            printf(" %d ", v[i]);
        }
        else
        { //se não...
            // a função para numeros impares no pdf do exercicio estava:
            //(i+1)/2 + i, logo por (i+1)/(2+i) retorar um float eu ultilizei
            //ela assim ((i+1)/2)+i ps. dessa forma faz mais sentido.
            v[i] = ((i + 1) / 2) + i;
            printf(" %d ", v[i]);
        }
    }
}

void exercicio73()
{
    /*73. Fa¸ca um programa C para gerar duas matrizes 5×5 de inteiros, mostr´a-as, calcular e
mostrar a soma delas.
*/
    int m1[5][5], m2[5][5], m3[5][5], ilin, icol;

    printf("Gerando duas matrizes com valores aleatorios entre 0 e 5:\n\n");

    for (ilin = 0; ilin < 5; ilin++)
    {
        for (icol = 0; icol < 5; icol++)
        {
            // gerando valores aleatórios entre zero e 5 e inserindo eles nas matrizes 1 e 2
            m1[ilin][icol] = rand() % 5;
            m2[ilin][icol] = rand() % 5;
            //Somando m1 com m2 e jogando em m3
            m3[ilin][icol] = m1[ilin][icol] + m2[ilin][icol];
        }
    }

    printf("Primeira matriz aleatoria, 5x5, gerada: \n");

    for (ilin = 0; ilin < 5; ilin++)
    {
        for (icol = 0; icol < 5; icol++)
        {
            printf(" %d ", m1[ilin][icol]);
        }
        printf("\n");
    }
    printf("\n\n");

    printf("Segunda matriz aleatoria, 5x5, gerada: \n");

    for (ilin = 0; ilin < 5; ilin++)
    {
        for (icol = 0; icol < 5; icol++)
        {
            printf(" %d ", m2[ilin][icol]);
        }
        printf("\n");
    }
    printf("\n\n");

    printf("Soma da primeira com a segunda matriz: \n");

    for (ilin = 0; ilin < 5; ilin++)
    {
        for (icol = 0; icol < 5; icol++)
        {
            printf(" %d ", m3[ilin][icol]);
        }
        printf("\n");
    }
}

void exercicio74()
{
    /*74. Fa¸ca um programa que preencha uma matriz 6×6 num´erica, com o seguinte formato:
6 5 4 3 2 1
5 4 3 2 1 0
4 3 2 1 0 0
3 2 1 0 0 0
2 1 0 0 0 0
1 0 0 0 0 0
*/
    int m[6][6], ilin, icol, cont = 6;
    printf("\n Matriz triangular superior: \n");
    for (ilin = 0; ilin < 6; ilin++)
    {
        for (icol = 0; icol < 6; icol++)
        {

            m[ilin][icol] = cont - icol;

            if (m[ilin][icol] * -1 > 0)
            {
                m[ilin][icol] = 0;
            }
            printf(" %d ", m[ilin][icol]);
        }
        printf("\n");
        cont--;
    }
}

void exercicio75()
{
    /*75. Fa¸ca um programa para criar uma matriz 9 × 9 usando a mesma l´ogica do exerc´ıcio
anterior. Utilizando a matriz gerada, calcule e mostre:
(a) A soma de todos seus elementos.
(b) A soma dos elementos por linha.
(c) A soma dos elementos da diagonal principal e secund´aria.
*/
    int m[9][9], ilin, icol, cont = 9, somaall = 0, somalin[9], somadigp = 0, somadig2 = 0;

    printf("Matriz ultilizada para os calculos: \n");
    for (ilin = 0; ilin < 9; ilin++)
    {
        for (icol = 0; icol < 9; icol++)
        {

            m[ilin][icol] = cont - icol;

            if (m[ilin][icol] * -1 > 0)
            {
                m[ilin][icol] = 0;
            }
            printf(" %d ", m[ilin][icol]);
        }
        printf("\n");
        cont--;
    }

    //Zerando / limpando o vetor somalin[9]
    for (ilin = 0; ilin < 9; ilin++)
    {
        somalin[ilin] = 0;
    }

    //Realizando todas as somas;
    for (ilin = 0; ilin < 9; ilin++)
    {
        for (icol = 0; icol < 9; icol++)
        {
            //(A)A soma de todos seus elementos.
            somaall = m[ilin][icol] + somaall;

            //(b) A soma dos elementos por linha.
            somalin[ilin] = m[ilin][icol] + somalin[ilin];

            //(c) A soma dos elementos da diagonal principal e secund´aria.

            if (ilin == icol)
            {
                somadigp = m[ilin][icol] + somadigp;
            }
            if (ilin + icol == 8)
            {
                somadig2 = m[ilin][icol] + somadig2;
                printf("...");
            }
        }
    }
    //PRINTANDO AS SOMAS

    printf("\n Resultados: \n"
           "(a) A soma de todos seus elementos:......................... %d \n",
           somaall);
    printf("(b) A soma dos elementos por linha:.................Linha 1: %d \n"
           "....................................................Linha 2: %d \n"
           "....................................................Linha 3: %d \n"
           "....................................................Linha 4: %d \n"
           "....................................................Linha 5: %d \n"
           "....................................................Linha 6: %d \n"
           "....................................................Linha 7: %d \n"
           "....................................................Linha 8: %d \n"
           "....................................................Linha 9: %d \n",
           somalin[0], somalin[1], somalin[2], somalin[3], somalin[4], somalin[5], somalin[6], somalin[7], somalin[8]);
    printf("(c) A soma dos elementos da diagonal principal.............: %d \n"
           "... A soma dos elementos da diagonal secundaria............: %d \n",
           somadigp, somadig2);
}
//--------------------------------------------------------------------------------------------------------------------------------------
void exercicio76()
{

    int tamanho_int, tamanho_float, tamanho_double, tamanho_longint, tamanho_char;

    tamanho_int = sizeof(int);
    tamanho_float = sizeof(float);
    tamanho_double = sizeof(double);
    tamanho_longint = sizeof(long int);
    tamanho_char = sizeof(char);

    printf("\nTamanho em bytes de uma variavel int: %d\n", tamanho_int);
    printf("Tamanho em bytes de uma variavel float: %d\n", tamanho_float);
    printf("Tamanho em bytes de uma variavel double: %d\n", tamanho_double);
    printf("Tamanho em bytes de uma variavel long int: %d\n", tamanho_longint);
    printf("Tamanho em bytes de uma variavel char: %d\n", tamanho_char);
}

void exercicio77()
{

    int x, *px;
    float y, *py;

    px = &x;
    py = &y;

    printf("\nDigite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%f", &y);

    printf("\nO valor de x eh: %d e o valor de y eh: %f\n", x, y);
    printf("O endereco na RAM de x eh: %X e o endereco na RAM de y eh: %X\n", &x, &y);
    printf("O conteudo do endereco na RAM de x eh: %d e o conteudo do endereco na RAM de y eh: %f\n", *(&x), *(&y));
    printf("O endereco armazenado no ponteiro que aponta para x eh: %X e o endereco armazenado no ponteiro que aponta para y eh: %X\n", &px, &py);
    printf("O conteudo do endereco do ponteiro que aponta para x eh: %d e o conteudo do endereco do ponteiro que aponta para y eh: %f\n", *px, *py);
}

void exercicio78()
{

    int x, y, z, *px, *py, *pz;
    //int v[] = {6, 5, 4, 3, 2, 1, 0, -1}, i;
    x = 0x2;
    y = 0xABCD;
    z = 0x23;
    px = &x;
    py = &y;
    pz = &z;
    printf("\n*px = %X\n", *px);
    printf("px = %p\n", px);
    printf("*py = %X\n", *py);
    printf("py = %p\n", py);
    printf("*pz = %X\n", *pz);
    printf("pz = %p\n", pz);

    printf("*(px+1) = %X\n", *(px + 1));
    printf("(px+1) = %p\n", (px + 1));

    printf("*(px+2) = %X\n", *(px + 2));
    printf("(px+2) = %p\n", (px + 2));

    printf("*(px+3) = %X\n", *(px + 3));
    printf("(px+3) = %p\n", (px + 3));

    printf("*(px+10) = %X\n", *(px + 10));
    printf("(px+10) = %p\n\n", (px + 10));

    printf("x ocupa %d bytes\n", sizeof(x));
    printf("y ocupa %d bytes\n", sizeof(y));
    printf("z ocupa %d bytes\n\n", sizeof(z));

    printf("endereco de x: %X\n", &x);
    printf("endereco de y: %X\n", &y);
    printf("endereco de z: %X\n\n", &z);

    printf("conteudo de x: %X\n", x);
    printf("conteudo de y: %X\n", y);
    printf("conteudo de z: %X\n\n", z);

    printf("px ocupa %d bytes\n", sizeof(px));
    printf("py ocupa %d bytes\n", sizeof(py));
    printf("pz ocupa %d bytes\n\n", sizeof(pz));

    printf("conteudo de px: %X\n", *px);
    printf("conteudo de py: %X\n", *py);
    printf("conteudo de pz: %X\n\n", *pz);

    printf("endereco de px: %X\n", &px);
    printf("endereco de py: %X\n", &py);
    printf("endereco de pz: %X\n\n", &pz);
}
//--------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------
void secao01()
{
    int nExercicio = 1;

    do
    {
        printf("Secao 01\n\nDigite o numero do exercicio que deseja executar (1:12) ou 0 para sair para o menu de secoes: ");
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
}

void secao02()
{
    int nExercicio;

    do
    {

        printf("\n");
        printf("Secao 02\n\nDigite o numero do exercicio que deseja executar (13:24) ou 0 para sair para o menu de secoes: ");
        scanf("%d", &nExercicio);

        switch (nExercicio)
        {
        case 0:

            break;

        case 13:
            exercicio13();
            break;

        case 14:
            exercicio14();
            break;

        case 15:
            exercicio15();
            break;

        case 16:
            exercicio16();
            break;

        case 17:
            exercicio17();
            break;

        case 18:
            exercicio18();
            break;

        case 19:
            exercicio19();
            break;

        case 20:
            exercicio20();
            break;

        case 21:
            exercicio21();
            break;

        case 22:
            exercicio22();
            break;
        case 23:
            exercicio23();
            break;
        case 24:
            exercicio24();
            break;
        default:
            printf("Valor invalido!");
        }

        printf("\n\n\n");

    } while (nExercicio != 0);
}

void secao03()
{
    int nExercicio;

    do
    {

        printf("\n");
        printf("Secao 03\n\nDigite o numero do exercicio que deseja executar (25:34) ou 0 para sair para o menu de secoes: ");
        scanf("%d", &nExercicio);

        switch (nExercicio)
        {
        case 0:

            break;

        case 25:
        {
            exercicio25();

            break;
        }
        case 26:
        {
            exercicio26();

            break;
        }
        case 27:
        {
            exercicio27();

            break;
        }
        case 28:
        {
            exercicio28();

            break;
        }
        case 29:
        {
            exercicio29();

            break;
        }
        case 30:
        {
            exercicio30();

            break;
        }
        case 31:
        {
            exercicio31();

            break;
        }
        case 32:
        {
            exercicio32();

            break;
        }
        case 33:
        {
            exercicio33();

            break;
        }
        case 34:
        {
            exercicio34();

            break;
        }
        default:
        {

            printf("Valor invalido!");
        }
        }
        printf("\n\n\n");

    } while (nExercicio != 0);
}

void secao04()
{
    int nExercicio = 1;

    do
    {
        printf("\n");
        printf("Secao 04\n\nDigite o numero do exercicio que deseja executar (35:41) ou 0 para sair para o menu de secoes: ");
        scanf("%d", &nExercicio);

        switch (nExercicio)
        {

        case 0:
        {
            break;
        }
        case 35:
        {
            exercicio35();
            break;
        }
        case 36:
        {
            exercicio36();
            break;
        }
        case 37:
        {
            exercicio37();

            break;
        }
        case 38:
        {
            exercicio38();
            break;
        }
        case 39:
        {
            exercicio39();
            break;
        }
        case 40:
        {
            exercicio40();
            break;
        }
        case 41:
        {
            exercicio41();
            break;
        }
        default:
            printf("Valor invalido!");
        }

        printf("\n\n\n");

    } while (nExercicio != 0);
}

void secao05()
{
    int nExercicio = 1;

    do
    {
        printf("\n");
        printf("Secao 05\n\nDigite o numero do exercicio que deseja executar (42:49) ou 0 para sair para o menu de secoes: ");
        scanf("%d", &nExercicio);

        switch (nExercicio)
        {
        case 0:
            break;
        case 42:
        {
            exercicio42();
            break;
        }
        case 43:
        {
            exercicio43();
            break;
        }
        case 44:
        {
            exercicio44();
            break;
        }
        case 45:
        {
            exercicio45();
            break;
        }
        case 46:
        {
            exercicio46();
            break;
        }
        case 47:
        {
            exercicio47();
            break;
        }
        case 48:
        {
            exercicio48();
            break;
        }
        case 49:
        {
            exercicio49();
            break;
        }

        default:
        {
            printf("Voce escolheu um exercicio invalido.\n\n\n");
        }
        }
    } while (nExercicio != 0);
}

void secao06()
{
    int nExercicio = 1;

    do
    {
        printf("Secao 06\n\nDigite o numero do exercicio que deseja executar (50:57) ou 0 para sair para o menu de secoes: ");
        scanf("%d", &nExercicio);

        switch (nExercicio)
        {
        case 0:
            break;
        case 50:
        {
            exercicio50();
            break;
        }
        case 51:
        {
            exercicio51();
            break;
        }
        case 52:
        {
            exercicio52();
            break;
        }
        case 53:
        {
            exercicio53();
            break;
        }
        case 54:
        {
            exercicio54();
            break;
        }
        case 55:
        {
            exercicio55();
            break;
        }
        case 56:
        {
            exercicio56();
            break;
        }
        case 57:
        {
            exercicio57();
            break;
        }

        default:
        {
            printf("Voce escolheu um exercicio invalido.\n");
        }
        }

        printf("\n\n\n");

    } while (nExercicio != 0);
}

void secao07()
{
    int nExercicio = 1;
    do
    {

        printf("\n");
        printf("Secao 07\n\nDigite o numero do exercicio que deseja executar (58:68) ou 0 para sair para o menu de secoes: ");
        scanf("%d", &nExercicio);

        switch (nExercicio)
        {

        case 0:
            printf("Voltando ao menu de secoes!");
            break;
        case 58:
            exercicio58();
            printf("\n");
            break;

        case 59:
            exercicio59();
            printf("\n");
            break;

        case 60:
            exercicio60();
            printf("\n");

            break;

        case 61:
            exercicio61();
            printf("\n");
            break;

        case 62:

            exercicio62();
            printf("\n");
            break;

        case 63:
            exercicio63();
            printf("\n");
            break;

        case 64:
            exercicio64();
            printf("\n");
            break;

        case 65:
            exercicio65();
            printf("\n");
            break;

        case 66:
            exercicio66();
            printf("\n");
            break;

        case 67:
            exercicio67();
            printf("\n");
            break;

        case 68:
            exercicio68();
            printf("\n");
            break;

        default:
            printf("Valor invalido");
        }

    } while (nExercicio != 0);
}

void secao08()
{

    int nExercicio = 1;

    do
    {
        printf("Secao 08\n\nDigite o numero do exercicio que deseja executar (69:75) ou 0 para sair para o menu de secoes: ");
        scanf("%d", &nExercicio);

        switch (nExercicio)
        {
        case 0:
            printf("Voltando ao menu de secoes!");
            break;
        case 69:
        {
            exercicio69();
            break;
        }
        case 70:
        {
            exercicio70();
            break;
        }
        case 71:
        {
            exercicio71();
            break;
        }
        case 72:
        {
            exercicio72();
            break;
        }
        case 73:
        {
            exercicio73();
            break;
        }
        case 74:
        {
            exercicio74();
            break;
        }
        case 75:
        {
            exercicio75();
            break;
        }
        default:
        {
            printf("Voce escolheu um exercicio invalido.\n");
        }
        }

        printf("\n\n\n");

    } while (nExercicio != 0);
}

void secao09()
{

    int nExercicio = 1;

    do
    {
        printf("\n");
        printf("Secao 09\n\nDigite o numero do exercicio que deseja executar (76:78) ou 0 para sair para o menu de secoes: ");
        scanf("%d", &nExercicio);

        switch (nExercicio)
        {
        case 0:
            printf("Voltando ao menu de secoes!");
            break;
        case 76:
        {
            exercicio76();
            break;
        }
        case 77:
        {
            exercicio77();
            break;
        }
        case 78:
        {
            exercicio78();
            break;
        }
        default:
        {
            printf("Voce escolheu um exercicio invalido.\n\n\n");
        }
        }
    } while (nExercicio != 0);
}
//--------------------------------------------------------------------------------------------------------------------------------------
int main(int argc, char **argv)
{
    srand(time(NULL));
    int nExercicio = 1;

    do
    {
        printf("\n\nDigite o numero da secao que deseja executar (1:9) ou 0 para sair: ");
        scanf("%d", &nExercicio);
        printf("\n\n\n");

        switch (nExercicio)
        {
        case 0:
            printf("\n\nPrograma Encerrado.");
            break;
        case 1:
        {
            secao01();
            break;
        }
        case 2:
        {
            secao02();
            break;
        }
        case 3:
        {
            secao03();
            break;
        }
        case 4:
        {
            secao04();
            break;
        }
        case 5:
        {
            secao05();
            break;
        }
        case 6:
        {
            secao06();
            break;
        }
        case 7:
        {
            secao07();
            break;
        }
        case 8:
        {
            secao08();
            break;
        }
        case 9:
        {
            secao09();
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
//--------------------------------------------------------------------------------------------------------------------------------------