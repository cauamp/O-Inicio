#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define SUCESSO 0
#define TAMANHO_MAX_NOME 50
const false = 0;
const true = 1;

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

void exercicio13()
{

	char str[TAMANHO_MAX_NOME], str_inv[TAMANHO_MAX_NOME], lixo[TAMANHO_MAX_NOME];
	int i, t, j, espaco = false;

	//coleta de dados

	printf("Digite uma string, sem espaco, para imprimi-la de tras para frente, logo depois digite uma letra qualquer: \n");

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
		printf("PROGRAMA ENCERRADO\n");
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

int main(int argc, char **argv)
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
	return SUCESSO;
}