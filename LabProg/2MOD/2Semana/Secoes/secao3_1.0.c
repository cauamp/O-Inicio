#include <stdio.h>
#include <math.h>
#include <string.h>
#define TAMANHO_MAX_NOME 100 + 1
#define SUCESSO 0

void exercicio25(){

    char string[TAMANHO_MAX_NOME], lixo;
	int i, ehpalindromo = 0;
	printf("Digite uma palavra para verificar se a mesma eh um palindromo: ");
	scanf("%c", &lixo);
	fgets(string, TAMANHO_MAX_NOME, stdin);
	int tamanhoDigitado = strlen(string) - 1;
	int verificador;
	for (i = 0; i < tamanhoDigitado; i++) {
		verificador = tamanhoDigitado - 1 - i;
		if (string[i] != string[verificador]) {
			break;
		}
		if (i == verificador) {
			ehpalindromo = 1;
			break;
		}
	}

	if (ehpalindromo == 1) {
		printf("\nA palavra digitada eh um palindromo!\n");
	}
	else {
		printf("\nA palavra digitada nao eh um palindromo!\n");
	}

}

void exercicio26(){

    int numero1, numero2, numero3, numero4, menor_numero, maior_numero;

	printf("Digite quatro numeros inteiros: ");
	scanf("%d%d%d%d", &numero1, &numero2, &numero3, &numero4);

	if (numero1 > numero2){

		maior_numero = numero1;
		menor_numero = numero2;

	} else{

		maior_numero = numero2;
		menor_numero = numero1;

	}

	if(numero3 > maior_numero){

		maior_numero = numero3;

	}

	if(numero3 < menor_numero){

		menor_numero = numero3;

	}

	if(numero4 > maior_numero){

		maior_numero = numero4;

	}

	if(numero4 < menor_numero){

		menor_numero = numero4;

	}

	printf("\nO maior numero digitado eh: %d\n", maior_numero);
	printf("O menor numero digitado eh: %d\n", menor_numero);

}

void exercicio27(){

    int numero[6], soma_dos_pares = 0, soma_dos_impares = 0, i;
	
	printf("Digite seis numeros inteiros: ");
	scanf("%d%d%d%d%d%d", &numero[0], &numero[1], &numero[2], &numero[3], &numero[4], &numero[5]);
	printf("\nOs numeros digitados foram: %d, %d, %d, %d, %d e %d\n", numero[0], numero[1], numero[2], numero[3], numero[4], numero[5]);

	for(i = 0; i < 6; i++){

		if(numero[i] % 2 == 0){

			soma_dos_pares = soma_dos_pares + numero[i];

		} else{

			soma_dos_impares = soma_dos_impares + numero[i];

		}

	}

	printf("A soma dos numeros pares digitados eh: %d\n", soma_dos_pares);
	printf("A soma dos numeros impares digitados eh: %d\n", soma_dos_impares);

}

void exercicio28(){

    int nota;
	
	printf("Digite um valor positivo entre 0 e 100: ");
	scanf("%d", &nota);

	if(nota >= 0 && nota <= 100){

		if(nota >= 90 && nota <= 100){

			printf("O conceito do aluno foi A!\n");

		} else if(nota >= 80 && nota < 90){

			printf("O conceito do aluno foi B!\n");

		} else if(nota >= 70 && nota < 80){

			printf("O conceito do aluno foi C!\n");

		} else if(nota >= 60 && nota < 70){

			printf("O conceito do aluno foi D!\n");

		} else if(nota < 60){

			printf("O conceito do aluno foi E (reprovado)!\n");

		}

	} else{

		printf("O numero digitado nao esta no intervalo solicitado, programa encerrado!\n");

	}

}

void exercicio29(){

    int i, fatorial = 1, numero;
	
	printf("Digite um numero inteiro para saber o seu fatorial: ");
	scanf("%d", &numero);
	
	for (i = numero; i > 0; i--) {
		fatorial = fatorial * i;
	}

	printf("O fatorial do numero digitado eh: %d", fatorial); 

}

void exercicio30(){

	float numerador, denominador, i, j = 0, S, equacao;

	numerador = 1;
	denominador = 1;

	for(i = 0; i < 50; i++){

		equacao = (numerador + j) / denominador + i;
		j = j + 2;
		S = S + equacao;

	}

	printf("S = %d\n", S);

}

void exercicio31(){

    float numerador = 2, denominador = 50, i, j = 50, S, equacao;

	for(i = 1; i < 50; i++){

		equacao = pow(numerador, i) / denominador - j;
		j--;
		S = S + equacao;

	}

	printf("S = %f\n", S);

}

void exercicio32(){

    float numerador1 = 37, numerador2 = 38, denominador = 1, i, S, equacao;

	for(i = 0; i < 37; i++){

		equacao = ((numerador1 - i) * (numerador2 - i)) / (denominador + i);
		S = S + equacao;

	}

	printf("S = %f\n", S);

}

void exercicio33(){

    float numerador = 1000, denominador = 1, i, j = 0, k = 1, S, equacao;

	for(i = 0; i < 50; i++){

		equacao = (numerador - j)/ (denominador + i);
		j = j + 3;
		S = S + (equacao * k);
		k = k * (-1);

	}

	printf("A soma dos 50 primeiros termos da serie eh: %f\n", S);

}

void exercicio34(){

	float numerador = 480, denominador = 10, i, j = 0, k = 1, S, equacao;

	for(i = 0; i < 30; i++){

		equacao = (numerador - j)/ (denominador + i);
		j = j + 5;
		S = S + (equacao * k);
		k = k * (-1);

	}

	printf("A soma dos 30 primeiros termos da serie eh: %f\n", S);

}

int main(int argc, char **argv)
{
	int opcao;
	opcao = 1;

	while (opcao != 0 && opcao < 12 && opcao > 0)
	{
		printf("\nEscolha qual exercicio deseja executar: \n\n (25) Exercicio 25 \n (26) Exercicio 26 \n (27) Exercicio 27 \n (28) Exercicio 28 \n (29) Exercicio 29 \n (30) Exercicio 30 \n (31) Exercicio 31 \n (32) Exercicio 32 \n (33) Exercicio 33 \n (34) Exercicio 34 \n (0) Sair \n\n");
		scanf("%d", &opcao);
		printf("\nOpcao selecionada: %d \n\n", opcao);

		switch (opcao)
		{

		case 0:
			printf("Programa encerrado!");
			break;

		case 25:
			exercicio25();
			opcao = 1;
			break;

		case 26:
			exercicio26();
			opcao = 1;
			break;

		case 27:
			exercicio27();
			opcao = 1;
			break;

		case 28:
			exercicio28();
			opcao = 1;
			break;

		case 29:
			exercicio29();
			opcao = 1;
			break;

		case 30:
			exercicio30();
			opcao = 1;
			break;

		case 31:
			exercicio31();
			opcao = 1;
			break;

		case 32:
			exercicio32();
			opcao = 1;
			break;

		case 33:
			exercicio33();
			opcao = 1;
			break;

		case 34:
			exercicio34();
			opcao = 1;
			break;

		default:
			opcao = 1;
			break;
		}
	}

	return SUCESSO;
}