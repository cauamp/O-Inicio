#include <stdio.h>
#define SUCESSO 0

int procura_Maior_N(int * vetor, int tamanho, int maior) {
    
    if (tamanho == 1) { 
        maior = 0;
        return(maior);
    } else {
        
        maior=procura_Maior_N(vetor , tamanho - 1, maior);

        if (vetor[tamanho-1] > vetor[maior]){
            maior = tamanho-1;
        }
        else{
            maior=maior;
        }
        }

    return(maior);
}

int soma_Vetor (int * vetor, int tamanho, int soma){

    if(tamanho==1){
        soma=vetor[0];
        return(soma);
    }
    else{
        soma=soma_Vetor(vetor,tamanho-1,soma);
        soma+=vetor[tamanho-1];
    }
    return(soma);
}

int media_Vetor (int * vetor, int tamanho, int soma){

    if(tamanho==1){
        soma=vetor[0];
        return(soma);
    }
    else{
        soma=soma_Vetor(vetor,tamanho-1,soma);
        soma+=vetor[tamanho-1];
    }
    return(soma/tamanho);
}


int main(int argc, char **argv){
    int I=5, *vetor,i,tam;
    printf("Qual o numero de elementos do conjunto?\n");
    scanf("%d", &tam);

    vetor=(int *)malloc(tam*sizeof(int));

    for(i=0;i<tam;i++){
        printf("Digite o valor [%d]: ", i);
        scanf("%d", &vetor[i]);
        printf("\n");
    }
    do{
    printf("\nQual funcao deve ser ativada?\n\n");
    printf(" 0- Finalizar Programa\n 1- Elemento Maximo do conjunto\n 2- Soma dos elementos do conjunto\n 3-Media Aritmetica dos elementos\n\n");
    scanf("%d", &I);
    
    switch (I)
    {
    case 1:

        printf("\n\n\nO maior numero do conjunto eh: %d\n\n\n",vetor[procura_Maior_N(vetor,tam,0)]);
        
        break;

    case 2:
        printf("\n\n\nA soma dos numeros do conjunto eh: %d\n\n\n",soma_Vetor(vetor,tam,0));
        break;

    case 3:
        printf("\n\n\nA media aritmetica dos numeros do conjunto eh: %d\n\n\n",media_Vetor(vetor,tam,0));
        break;

    default:
        printf("Finalizado");
        I=0;
        break;
    }
    }while( I!=0);
    return SUCESSO;
}