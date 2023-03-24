#include <stdio.h>
#define SUCESSO 0

int main(int argc, char ** argv) {

	int escalar,i,x, mutiplicador;

	printf("Digite um escalar\n");
	scanf("%d", &mutiplicador);

	printf("Digite o tamanho do vetor\n");
	scanf("%d", &x);
	int reais[x];

	for(i=0; i<x; i++){
		printf("Digite um valor\n");
		scanf("%d", &reais[i]);
	}

	for(i=0;i<=x-1; i++){

		reais[i]= reais[i]*mutiplicador;
		printf("\n%d ", reais[i]);
	}

 
	return SUCESSO;
}