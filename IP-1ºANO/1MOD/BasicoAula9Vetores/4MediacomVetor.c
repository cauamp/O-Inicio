#include <stdio.h>
#define SUCESSO  0

int main(int argc, char ** argv) {
    int  x, y, soma=0, i=0, resultado;

    printf("Qual tamanho de vetor voce quer? ");
    scanf("%d", &x);
    y= x-1;
    int N[y];

    while (i<=y){
        printf("Digite um numero \n");
        scanf("%d", &N[i]);
        soma= N[i]+soma;
        i++;
    }
    resultado = soma/x;

    printf("A media aritmetica eh: %d", resultado);

    return SUCESSO;
}