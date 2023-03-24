#include <stdio.h>
#define SUCESSO  0

int main(int argc, char ** argv) {

    int i,x, resultado=0;

    printf("Digite o tamanho dos vetores\n");
    scanf("%d", &x);

    int vetor1[x],vetor2[x];

    for (i = 0; i < x; i++){
        printf("Digite o numero da casa %d do primeiro vetor\n", i);
        scanf("%d", &vetor1[i]);
    }

    for (i = 0; i < x; i++){
        printf("Digite o numero da casa %d do segundo vetor\n", i);
        scanf("%d", &vetor2[i]);
    }

    printf("\nConjunto dos resultados= (");
    for(i=0; i<x;i++){
        resultado= vetor1[i]*vetor2[i];
        printf("%d,", resultado);
    }

    printf(")");
    
  return SUCESSO;
}