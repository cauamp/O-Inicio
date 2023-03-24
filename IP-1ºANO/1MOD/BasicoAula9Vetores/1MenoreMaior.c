#include <stdio.h>
#define SUCESSO  0

int main(int argc, char ** argv) {
    int i=0, N[20], menorVetor=__INT_MAX__, menorVindice=0, maiorVetor=(0-__INT_MAX__), maiorVindice=0;

    while (i<=19){
        printf("Digite um numero \n");
        scanf("%d", &N[i]);
        i++;
    }
    

    for(i=0; i<=19;i++){
        if(N[i]<menorVetor){
            menorVetor=N[i];
            menorVindice=i;
        }
        else if(N[i]>maiorVetor){
            maiorVetor=N[i];
            maiorVindice=i;
        }
    }

    printf("O maior numero eh %d e seu indice no vetor eh %d \n", maiorVetor, maiorVindice);
    printf("O menor numero eh %d e seu indice no vetor eh %d", menorVetor, menorVindice);
  return SUCESSO;
}