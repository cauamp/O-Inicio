#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define SUCESSO 0

float *alocaVetores (int tamanho_vetor){
	 float * v;
	v = (float *) (malloc (tamanho_vetor * sizeof (float)));
	return v;
}


int main(int argc, char ** argv){

    srand(time(NULL));
    char nome_arquivo[] ="dadosQuestao3.txt";
    char modo[] = "wt";
    float a=0.8, b=0.2, c=0.5, d=0.6, g=0.5, k=0.5, soma1=0, soma2=0;
    float *x, *y, *r;
    int n=100, i, j;
    FILE *file;

        //  printf("Digite um numero N qualquer: ");
        //  scanf("%d", &n);

    x = alocaVetores(n);
    y = alocaVetores(n);
    r = alocaVetores(n);

    x[0] = 0;
    y[0] = 0;

    for(i = 1; i < n; i++){
        
        r[i] = (float)rand() / (float) RAND_MAX;

        if(i<20){
            x[i] = 0;
        }else{
            x[i] = k*2;
        }

        y[i] = g*(a*y[i-1] + b*x[i] + c*x[i-1] + d*r[i]);

    }

    for(i = 0; i < n; i++){

    printf("X[%d] = %.2f || Y[%d] = %.2f\n", i+1, x[i], i+1, y[i]);

    }

    file = (fopen(nome_arquivo, modo));

    if(file == NULL){

        printf("Ocorreu algum erro ao abrir o arquivo!");
    
    }

    for(j = 0; j < n; j++){

        fprintf(file, "%.2f %.2f \n", x[j], y[j]);
    
    }

    for(j = 0; j < n; j++){

        soma1 += x[j];

    }
    
    printf("\n\nValor medio do vetor x = %.2f", soma1/n);

    for(j = 0; j < n; j++){

        soma2 += y[j];

    }
    
    printf("\n\nValor medio do vetor y = %.2f", soma2/n);
    
    fclose(file);

    return SUCESSO;
}