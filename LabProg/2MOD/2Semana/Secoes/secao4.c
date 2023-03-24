
#include <stdio.h>
#define SUCESSO  0
#define _USE_MATH_DEFINES
#include <math.h>
#define pi atan(1)*4

void questao35(){

	float resultado=0, resultado2=0, angulo=0, aux1, aux2, aux3;

	printf("Tabela dos SENOS\n Angulo(rad)      Sen(Seq)          Sen(Sin)\n----------------------------------------------------\n\n");
	do{
	aux1 = (pow(angulo, 3))/6;
	aux2 = (pow(angulo, 5))/120;
	aux3 = (pow(angulo, 7))/5040;
	resultado= angulo - aux1 + aux2 -aux3;
	resultado2 = sin(angulo);
	printf("   %.2f %16.2f %16.2f\n", angulo, resultado, resultado2);

	angulo = angulo + 0.1;
	} while(angulo<=pi*2);
    
}

void questao36(){

	float pi_final=4, i, diferenca;
	int j;

	for(i=3, j=1; i<1534655;j++){
			
			if(j%2 == 0){
				pi_final = pi_final + (4/i); 
			}
			if(j%2 == 1){
				pi_final = pi_final - (4/i);
			}

		i = i+2;
	}

	diferenca = pi_final - pi; 

		printf("Valor de pi com precisao 0.0001: %.4f\n\n", pi_final);
		printf("\n\nDiferenca eh igual: %.4f", diferenca);

}

void questao37(){

	int i, j=3;
	double t, angulo = 0.1*pi, fatorial, variavel_qualquer = 0, valor_real = 0, valor_formula=1;

    for(i=2; i<22; i++){

		fatorial = 1;

		for(t=i; t>0; t--){

	  		fatorial = fatorial * t;

		}

		if(i%2 == 0){

			valor_formula = valor_formula - pow(angulo,i)/fatorial;
		}
		
		if(i%2 == 1){

			valor_formula = valor_formula + pow(angulo,i)/fatorial;

		}

		j++;
		fatorial = 0;
		angulo = angulo + 0.1*pi;

	}

	printf("\nValor formula sem funcao sin(): %f\n", valor_formula);

	angulo = 0.1*pi;
	
	for(i=0; i<20; i++){
		
		variavel_qualquer = sin(angulo)/angulo;

		valor_real = valor_real + variavel_qualquer;

		angulo = angulo + 0.1*pi;

	}

    
		printf("\n\nValor usando a funcao sin(): %f\n\n", valor_real);
	
		printf("Diferenca entre valores: %f\n\n", valor_formula - valor_real);
}

void questao38(){

	int soma=0, n, i;

	printf("insira um numero: ");
	scanf("%d", &n);

	for(i=-n; i<=n; i++){

		if(2*i-1 == 0 || i + 2 == 0){ // condições para que se o numerador ou denominador forem == 0 o i++ incrementa para nao dar erro;
			i++;
		}

		soma = soma + (i + 2)/(2*i - 1); 

	}

	printf("Somatorio eh igual a: %d", soma);

}

void questao39(){

	int n, x, i, t, fatorial=1, soma=0;

	printf("Digite um numero 'n' qualquer: ");
	scanf("%d", &n);
	printf("Digite um numero 'x' qualquer: ");
	scanf("%d", &x);

	for(i=1; i <= n; i++){

	  fatorial = 1;

	  for(t=i; t>0; t--){

	  fatorial = fatorial * t;

	}

		soma = soma + (pow(x,i) / fatorial);

	}

	printf("\nSomatorio eh igual a: %d\n\n", soma);

}

void questao40(){

	float n, y, i, t, fatorial=1, soma=0;

	printf("Digite um numero 'n' qualquer: ");
	scanf("%f", &n);
	printf("Digite um numero 'y' qualquer: ");
	scanf("%f", &y);

	for(i=1; i <= n; i++){

	fatorial = 1;

	for(t=i; t>0; t--){

	fatorial = fatorial * t;

	  }
	
	soma = soma + (pow(y,-i) / fatorial);

	}

	printf("\nSomatorio eh igual a: %f \n\n", soma);

}

void questao41(){

	float n, i, soma=0, numerador, denominador;

	printf("Digite um numero: ");
	scanf("%f", &n);

	for(i=1; i <= n; i++){
		
		numerador = (i + 2*pi);
		denominador = ((2*i*pi) - 1);
		
		if(numerador == 0 || denominador == 0){
			i = i + 1;
		}

		soma = soma + (numerador/denominador);

	}

	printf("O somatorio eh: %.2f", soma);

}


int main(int argc, char ** argv){
	
	int questao;
	
	do{

		printf("\n");
 		printf("Digite o numero do exercicio que deseja executar (35:41) ou 0 para sair para o menu de secoes: ");
		scanf("%d", &questao);
	 	
		switch (questao){
	
			case 0 : 
	
			break;
			case 35 :
			    questao35();
			    printf("\n");
			break;	

			case 36 :
				questao36();
				printf("\n");
			break;
				
			case 37 :
				questao37();
				printf("\n");
			
			break;
			
			case 38 :
				questao38();
				printf("\n");
			break;
			
			case 39 :
				questao39();
				printf("\n");
			break;	
			
			case 40 : 
				questao40();
				printf("\n");
			break;
			
			case 41 : 
				questao41();
				printf("\n");
			break;

			default : 
				printf("Valor invalido");
		
		}

	}while(questao != 0);
	
	return SUCESSO;
}