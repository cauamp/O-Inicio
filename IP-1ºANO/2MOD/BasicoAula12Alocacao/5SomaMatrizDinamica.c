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
    
    int m,n,i,j;
    float **matriz;
    float soma;

    printf("Digite o tamanho da primeira dimensao da matriz\n");
    scanf("%d", &m);
    printf("Digite o tamanho da segunda dimensao da matriz\n");
    scanf("%d", &n);

    matriz=alocaMatriz(m,n);
    
    for (i=0;i<m;i++){
        j=0;
        for (j = 0; j < n; j++)
        {
            printf("Digite o numero do espaco [%d][%d]",i,j);
            scanf("%f", &matriz[i][j]);
        }
    }
    for (i=0;i<m;i++)
        for (j = 0; j < n; j++)
        {
            soma= soma + matriz[i][j];
        }  
    printf("A soma total eh de %f", soma); 

    for (i = 0; i < m; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
    return SUCESSO;
}