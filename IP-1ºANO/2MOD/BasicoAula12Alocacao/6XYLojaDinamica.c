#include <stdio.h>
#define SUCESSO 0

float ** alocaMatriz(int m, int n ){
    float ** matriz;
    int i;
    matriz = (float **) malloc(m * sizeof (float) );

    for (i = 0; i < m; i++)
    {
        matriz[i]=(float*) malloc(n* sizeof(float));
    }
    return (matriz);
}



int main(int argc, char **argv){
    
    int X,Y,i,j, produtosT=0, LOJA, PRODUTO, soma=0, resultado=0, menorLoja=__INT_MAX__;
    float **matriz;

    printf("Digite o numero de tipos produtos\n");
    scanf("%d", &X);
    printf("Digite o numero de lojas\n");
    scanf("%d", &Y);



    matriz=alocaMatriz(X,Y);

    for (i = 0; i < X; i++)
        for (j = 0; j < Y; j++)
        {
            printf("\nNumero de produtos %d na loja %d = ", i, j);
            scanf("%f", &matriz[i][j]);
        }

    LOJA=Y,PRODUTO =X;
    //Descobre total de cada produto nas lojas
    for (i = 0; i < PRODUTO; i++)
        for (j = 0; j < LOJA; j++)
        {
            produtosT = produtosT + matriz[i][j];
            if (j == LOJA - 1)
            {
                printf("\n O total de produtos %d nas lojas eh de %d", i, produtosT);
                produtosT=NULL;
            }
        }
    //Descobre loja com menos produtos    
    for (j = 0; j < LOJA; j++)
        for (i = 0; i < PRODUTO; i++)
        {
            soma = soma + matriz[i][j];

            if(i==PRODUTO-1&&soma<=menorLoja){
                menorLoja=soma;
                resultado = j;
                soma=0;
            }
        }
     printf("\n A loja com menor numero de produtos eh a loja %d", resultado);
    for (i = 0; i < Y; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
    return SUCESSO;
}