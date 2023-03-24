#include <stdio.h>
#define SUCESSO 0

int * alocaVetor (int n ){
    int *vet;
    vet = (int *) malloc (n*  sizeof (int));
    return vet;
}
int main(int argc, char **argv){
    
    int n;
    int * vetor;

    printf("Digite o tamanho do vetor \n");
    scanf("%d", &n);
    vetor=alocaVetor(n);

    free(vetor);
    
    return SUCESSO;
}