#include <stdio.h>
#define SUCESSO 0

int busca_Digito (int * vetor, int tam,int proc){

    int index;
    if(tam==1){
        return(0);
    }
    else{
        if(vetor[tam]==proc){
            index = tam;
            return(index);
        }
        else{
            busca_Digito(vetor,tam-1,proc);
        }
        
    }
}

int main(int argc, char **argv){

    int tam, *vetor,i, proc;

    printf("Qual o numero de elementos do conjunto?\n");
    scanf("%d", &tam);

    vetor=(int *)malloc(tam*sizeof(int));

    for(i=0;i<tam;i++){
        printf("Digite o valor [%d]: ", i);
        scanf("%d", &vetor[i]);
        printf("\n");
    }

    printf("\n\nQual eh o elemento procurado? :");
    scanf("%d",&proc);

    printf("O elemento procurado [%d] esta na posicao %d do vetor", proc,busca_Digito(vetor,tam,proc));

    return SUCESSO;
}