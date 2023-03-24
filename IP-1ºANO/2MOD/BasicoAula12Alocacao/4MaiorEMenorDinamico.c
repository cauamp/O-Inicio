#include <stdio.h>
#define SUCESSO 0

float * alocaVetor (int n ){
    int *vet;
    vet = (float *) malloc (n*  sizeof (float));
    return vet;
}
int main(int argc, char **argv){
    
    int n,i, indiceMenor, indiceMaior; 
    float menor= __INT_MAX__, maior =(0-__INT_MAX__) ; 
    float * vetor;

    printf("Digite o tamanho do vetor \n");
    scanf("%d", &n);
    vetor=alocaVetor(n);

    for (i=0; i<n; i++){
        printf("Digite um numero real para ocupar a casa [%d] do vetor ", i);
        scanf("%f", &vetor[i]);
    }
    for (i=0; i<n; i++){
        if(vetor[i]<menor){
            menor=vetor[i];
            indiceMenor=i;
        }
        if(vetor[i]>maior) {
            maior=vetor[i];
            indiceMaior=i;
        }
    }

    printf("\n\n O maior numero eh %.2f e seu indice eh [%d]\n \n O menor numero eh %.2f e seu indice eh [%d] ", maior, indiceMaior, menor , indiceMenor);

    free(vetor);
    
    return SUCESSO;
}