#include <stdio.h>
#define SUCESSO 0

void imprime_Intervalo (int a, int b){

    if(a>b){
        fprintf(stderr,"ERRO ! a > b" );
    }
    else if (a==b){
        printf("%d",b);
    }
    else{
        printf("%d ",b);
        imprime_Intervalo(a,b-1);
    }

}

int main(int argc, char **argv){

    int a=0,b=0;
    printf("ATENCAO! O primeiro numero digit€ado deve ser menor que o segundo \n\n");
    
    printf("Digite o primeiro valor ");
    scanf("%d", &a);

    printf("Digite o segundo valor ");
    scanf("%d",&b);

    imprime_Intervalo(a,b);

    printf("\n\nO primeiro e o ultimo valor impresso correspondem aos valores digitados \n\n");
    return SUCESSO;
}