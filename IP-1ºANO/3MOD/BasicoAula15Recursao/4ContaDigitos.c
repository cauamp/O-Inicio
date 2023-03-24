#include <stdio.h>
#define SUCESSO 0

int conta_Digitos (int N){
    int count=1;

    if(N>=10){
        N=N/10;
        count+=conta_Digitos(N);
    }

    return(count);
}

int main(int argc, char **argv){
    int N;
    printf("Digite um numero inteiro: ");
    scanf("%d",&N);
    printf("\n\nO numero de digitos em %d eh : %d\n", N, conta_Digitos(N));


    return SUCESSO;
}