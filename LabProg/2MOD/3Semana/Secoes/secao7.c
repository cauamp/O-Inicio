#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define SUCESSO 0

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

	printf("Digite o tamanho do vetor a ser gerado: \n");
	scanf("%d", &tamanho);

	int vetor[tamanho];

	srand(time(NULL));

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
}

void exercicio60()
{

	int matriz[4][4], numero, i, j;

	srand(time(NULL));

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

	printf("Digite a dimensao n da matriz: (no maximo 6)\n");
	scanf("%d", &n);
	printf("Digite a dimensao m da matriz: (no maximo 6)\n");
	scanf("%d", &m);

	int matriz[n][m];

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
}

void exercicio62()
{

	int n, m, i, j, matriz[6][6], aux;
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
}

void exercicio63()
{

	int vetor[10], i, j, soma, subtracao, mult;

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

	srand(time(NULL));

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

	srand(time(NULL));

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

	printf("Digite a dimensao n da matriz: (no maximo 10)\n");
	scanf("%d", &n);
	printf("Digite a dimensao m da matriz: (no maximo 10)\n");
	scanf("%d", &m);

	int matriz[n][m];

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

		printf("Soma Valores linha %d eh: %d\n", i, soma_Linha);
		soma_Linha = 0;
	}

	printf("\n\n");

	for (i = 0; i < m; i++)
	{

		for (j = 0; j < n; j++)
		{
			soma_Coluna = soma_Coluna + matriz[j][i];
		}

		printf("Soma Valores coluna %d eh: %d\n", i, soma_Coluna);
		soma_Coluna = 0;
	}
}

void exercicio67()
{

	int tamanho, i;
	char lixo;

	printf("Digite o tamanho da string a ser digitada: \n");
	scanf("%d", &tamanho);

	char string[tamanho];

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
}

void exercicio68()
{

	int i, tamanho = 100;

	int vetor[tamanho];

	srand(time(NULL));

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

int main(int argc, char **argv)
{

	srand(time(NULL));

	int nExercicio;

	do
	{

		printf("\n");
		printf("Secao 07\n\nDigite o numero do exercicio que deseja executar (58:68) ou 0 para sair para o menu de secoes: ");
		scanf("%d", &nExercicio);

		switch (nExercicio)
		{

		case 0:
			printf("Programa encerrado!");
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

	return SUCESSO;
}
