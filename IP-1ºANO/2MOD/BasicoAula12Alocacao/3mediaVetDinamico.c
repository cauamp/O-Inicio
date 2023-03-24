#include <stdio.h>
#define SUCESSO 0

int * alocaVetor (int n ){
    int *vet;
    vet = (int *) malloc (n*  sizeof (int));
    return vet;
}
int main(int argc, char **argv){
    
    int n,i; 
    float soma=0,resultado=0;
    int * vetor;

    printf("Digite o tamanho do vetor \n");
    scanf("%d", &n);
    vetor=alocaVetor(n);

    for (i=0; i<n; i++){
        printf("Digite o valor da casa [%d] do vetor ", i);
        scanf("%d", &vetor[i]);
    }
    for (i=0; i<n; i++){
        soma= soma + vetor[i];
    }
    resultado=soma/n;
    printf("A media aritmetica dos valores eh: %.2f", resultado);
    free(vetor);
    
    return SUCESSO;
}