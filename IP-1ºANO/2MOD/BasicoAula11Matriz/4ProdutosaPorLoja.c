#include <stdio.h>
#define SUCESSO 0
#define LOJA 7
#define PRODUTO 5

void scanfM(int matriz[LOJA][PRODUTO])
{
    int i, j, x, z;
    printf("\nDigite valor para os elementos da matriz\n\n");

    for (i = 0; i < LOJA; i++)
        for (j = 0; j < PRODUTO; j++)
        {
            x = i + 1;
            z = j + 1;
            printf("\nNumero de produtos %d na loja %d = ", z, x);
            scanf("%d", &matriz[i][j]);
        }
}

void totalProduto(int matriz[LOJA][PRODUTO])
{
    int i, j, z, produtosT=0;
    for (j = 0; j < PRODUTO; j++)
        for (i = 0; i < LOJA; i++)
        {
            produtosT = produtosT + matriz[i][j];
            if (i == LOJA - 1)
            {
                z = j + 1;
                printf("\n O total de produtos %d nas lojas eh de %d", z, produtosT);
                produtosT=NULL;
            }
        }
}

void descobreLojacomMenosProdutos(int matriz[LOJA][PRODUTO]){
    int i, j, x, soma=0, menor=__INT_MAX__, resultado=0;

    for (i = 0; i < LOJA; i++){
        for (j = 0; j < PRODUTO; j++)
        {
            soma = soma + matriz[i][j];

            if(j==PRODUTO-1&&soma<=menor){
                menor=soma;
                resultado = i+1;
                soma=0;
            }
        }
    }
    printf("\n A loja com menor numero de produtos eh a loja %d", resultado);

}
int main(int argc, char **argv)
{
    int matriz[LOJA][PRODUTO];

    scanfM(matriz);
    descobreLojacomMenosProdutos(matriz);
    totalProduto(matriz);
    
    return SUCESSO;
}