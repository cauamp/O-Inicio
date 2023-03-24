#include <stdio.h>
#include <math.h>
#define SUCESSO  0

int main(int argc, char ** argv) {

    char operador;
	int numero1, numero2, soma, subtracao, multiplicacao, divisao;

    //printf("Digite os numeros");
    //scanf("%d \n %d", &numero1 , &numero2);
	
    printf("Qual operacao deseja fazer? (+, -,  *, /) \n");
	scanf("%c", &operador);
    printf("Digite um numero: \n");
	scanf("%d", &numero1);
	printf("Digite outro numero: \n");
	scanf("%d", &numero2); 
    
	soma = (numero1 + numero2);
    subtracao = (numero1 - numero2);
    multiplicacao = (numero1 * numero2);
    divisao = (numero1 / numero2);

    if(operador == '+') {
        printf("A soma dos numeros eh: %d", soma);
    }
    else if (operador == '-') {

		printf("A subtracao dos dois numeros eh: %d", subtracao);
	}
	else if (operador == '*') {		
		printf("A multiplicacao dos dois numeros eh: %d", multiplicacao);
	}
	else {		
		printf("A divisao entre os dois numeros eh: %d", divisao);
	}

  return SUCESSO;
}