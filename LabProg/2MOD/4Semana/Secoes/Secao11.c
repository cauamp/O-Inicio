#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>//IMPORTANTE PARA A 81 FUNCIONAR
#define SUCESSO 0


int * alocaVetoresInt (int tamanhoVetor){

	int * v;
	v = (int *) (malloc (tamanhoVetor * sizeof (int)));
	return v;
}


void exercicio79(){

    int arr[6], i;

    for (i = 0; i < 6; i++){

        arr[i] = rand() % 20;

        printf("\nO numero inteiro aleatorio da posicao %d do vetor arr eh: %d", i, *(arr + i));

    }

}

void exercicio80(){

/*
    int main(){
    int y[5],i;
    int *z;
    for(i=0;i<5;i++)
    z[i]=i*i;
    for(i=0;i<5;i++)
    printf("z[%d]=%d ou *(z+%d) = %d\n",i,z[i],i,*(z+i));
    return(0); 
}
*/

printf("\na) A compilacao foi feita com sucesso? \nR: Sim, porem variavel z foi usada como um vetor, sendo que ela se trata de um ponteiro. \n\nb) A execucao foi feita com sucesso? Se nao, por que?\nR: Nao, porque variavel z foi usada como um vetor, sendo que ela se trata de um ponteiro.\n\nc) Onde esta o erro, se o programa foi compilado com sucesso? \nR: O erro esta no uso da variavel z.\n\nd) Discuta o motivo do erro na execucao.\nR: A variavel z foi usada como um vetor, sendo que ela se trata de um ponteiro, um vetor pode ser tratado como um ponteiro, mas um ponteiro nao pode ser tratado como um vetor.\n\ne) Como resolver o erro de execucao?\nR: E possivel resolver o erro se tratarmos a variavel z como um ponteiro e nao como um vetor, basta adicionar uma linha no codigo para que a execucao seja correta. Linha a ser acrescentada: z = &y;\n\nf) E possivel definir um ponteiro e usa-lo como vetor? sim/nao? por que?\nR: Nao, porque um ponteiro armazena somente um endereco, quando queremos que um ponteiro seja usado como um vetor temos que aloca-lo previamente. Equanto um vetor ja aloca a quantidade que queremos que seja usada na propria declaracao, sendo assim podendo ser usado como um ponteiro.\n\ng) Resolva o problema do programa e execute-o com sucesso? Como fazer para resolver o problema? (e possivel resolve-lo acrescentando apenas uma linha)\nR: Feito. Para resolver o problema basta acrescentarmos esta linha: z = &y;, desta forma fazemos com que o ponteiro z receba o endereco da primeira posicao do vetor y, fazendo com que o codigo seja executado e compilado corretamente. O codigo completo do programa executado corretamente esta como uma anotacao na linha baixo, no codigo do exercicio.");
/*
    a) A compilacao foi feita com sucesso?
    R: Sim, porem variavel z foi usada como um vetor, sendo que ela se trata de um ponteiro.

    b) A execucao foi feita com sucesso? Se nao, por que?
    R: Nao, porque variavel z foi usada como um vetor, sendo que ela se trata de um ponteiro.

    c) Onde esta o erro, se o programa foi compilado com sucesso?
    R: O erro esta no uso da variavel z.

    d) Discuta o motivo do erro na execucao.
    R: A variavel z foi usada como um vetor, sendo que ela se trata de um ponteiro, um vetor pode ser tratado como um ponteiro, mas um ponteiro nao pode ser tratado como um vetor.

    e) Como resolver o erro de execucao?
    R: E possivel resolver o erro se tratarmos a variavel z como um ponteiro e nao como um vetor, basta adicionar uma linha no codigo para que a execucao seja correta. Linha a ser acrescentada: z = &y;

    f) E possivel definir um ponteiro e usa-lo como vetor? sim/nao? por que?
    R: Nao, porque um ponteiro armazena somente um endereco, quando queremos que um ponteiro seja usado como um vetor temos que aloca-lo previamente. Equanto um
    vetor ja aloca a quantidade que queremos que seja usada na propria declaracao, sendo assim podendo ser usado como um ponteiro.

    g) Resolva o problema do programa e execute-o com sucesso? Como fazer para resolver o problema? (e possivel resolve-lo acrescentando apenas uma linha)
    R: Feito. Para resolver o problema basta acrescentarmos esta linha: z = &y;, desta forma fazemos com que o ponteiro z receba o endereco da primeira posicao do vetor y, fazendo com que o codigo seja executado e compilado corretamente. O codigo completo do programa executado corretamente esta como uma anotacao na linha baixo, no codigo do exercicio.
*/


/* 

int main(){

int y[5],i;
int *z;

z = &y;

for(i=0;i<5;i++){

    z[i]=i*i;

}

for(i=0;i<5;i++){
    
    printf("z[%d]=%d ou *(z+%d) = %d\n",i,z[i],i,*(z+i));

}

return(0);

}

*/

}

//81. Reescreva o programa abaixo usando ponteiros
void exercicio81(){
/* 
Codigo antes da modificação

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
int V[10], i;
time_t t; //tipo time_t
srand((unsigned)time(&t)); //funcao time() recebe o endereco de t
for (i=0;i<10;i++)
V[i]=rand()%20;
for (i=0;i<10;i++)
printf("V[%d]=%i\n",i+1,V[i]);
return(0);
}
*/

//Codigo após a modificação
int *V, i;

V = alocaVetoresInt(10);

time_t t; //tipo time_t

//srand((unsigned)time(&t)); //funcao time() recebe o endereco de t
// a linha acima foi comentado, pois outro srand já foi definido no main, garantindo o funcionamento de todos exercicios
printf("\n\n\n");

printf("V: \n");

for (i=0;i<10;i++){

    V[i]=rand()%20;

}

for (i=0;i<10;i++){

    printf("V[%d]=%i\n",i+1,V[i]);

}

free(V);

}


//82. Seja o codigo abaixo:
void exercicio82(){

printf("\n\n\n");
printf("Pede-se: \n"
"(a) O que sera impresso (responda antes de executar o programa)? \n"
"Creio que em *ptr+1 sera impresso 6 (o valor da primeira casa de ptr somado 1), ja em *(ptr+1) sera impresso 9 (o valor da segunda casa de ptr) \n");


int mat[3] = {5, 9 , 11};
int *ptr;
ptr = mat;
printf("\n\n");
printf("Valores impressos: \n");
printf("*ptr+1   =...%d \n", *ptr + 1);
printf("*(ptr+1) =...%d \n", *(ptr + 1));

printf("\n\n\n");
printf("(b) E se acrescentarmos as tres linhas abaixo, o que sera impresso? \n");

printf("\n"
" ptr = mat; \n"
" printf( %%d \\n, *(ptr) ); \n "
"printf( %%d \\n, *(ptr + 2)); \n");
printf("\n\n");

printf("Creio que em *(ptr) sera impresso 5 (o valor da primeira casa de ptr), ja em *(ptr+2) sera impresso 11 (o valor da terceira casa de ptr) \n");

ptr = mat;
printf("\n\n");
printf("Valores impressos, apos adicionar as tres linhas: \n");
printf("*(ptr)     =... %d \n", *(ptr));
printf("*(ptr + 2) =... %d \n", *(ptr + 2));

}

int main(int argc, char** argv)
{
    
	int nExercicio = 1;

    do
    {
        printf("Secao 11\n\nDigite o numero do exercicio que deseja executar (79:82) ou 0 para sair para o menu de secoes: ");
        scanf("%d", &nExercicio);

        switch (nExercicio)
        {
        case 0:
            break;
        case 79:
        {
            exercicio79();
            break;
        }
       case 80:
       {
           exercicio80();
           break;
       }

       case 81:
        {
            exercicio81();
            break;
        }
       case 82:
       {
           exercicio82();
           break;
       }
       
         default:
        {
            printf("Voce escolheu um exercicio invalido.\n");
        }
        }

        printf("\n\n\n");

    } while (nExercicio != 0);
	
	return SUCESSO;
}