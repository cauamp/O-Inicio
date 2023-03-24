#include <stdio.h>
#include <math.h>
#define SUCESSO 0
#define TAMANHO_MAX_NOME 50
/*
    
    Aluno: Cauã Magalhães Pereira
    Nimero de matricula: 2020951805
    Turma: 205
    
 */

void exercicio50()
{
    int N=0, i=0, j=0;


    printf("Digite um valor para N (3:15)  \n");
    scanf("%d", &N );

    
    printf("\n");

    for (i = 0; i < N; i++)
    {
    
        for (j = 0; j < N-i; j++)
        {
            printf("%d ", N-i-j);
        }
        printf("\n");
        j=0;
    }
    
}

void exercicio51()
{
    int N=0, i=0, j=0;

    printf("Digite um valor para N \n");
    scanf("%d", &N );

    
    printf("\n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < i+1; j++)
        {
            printf("*");
        }
        printf("\n");
        j=0;
    }
}

void exercicio52()
{
    int N=5, i=0, j=0;
        
    printf("Digite um valor para N  \n");
    scanf("%d", &N );

    
    printf("\n");

    for (i = 0; i < (2*N)-1; i++)
    {
        if(i<=((2*N)-1)/2){
            for (j = 0; j <= i; j++)
            {
                printf("*");
                
            }
        }
        else{
            for (j = 0; j < ((2*N)-1)-i; j++)
            {
                printf("*");
            }
        }
        printf("\n");
        
    }
}

void exercicio53()
{
    int N=5, i=0, j=0;
    
    printf("Digite um valor para N  \n");
    scanf("%d", &N );

    
    printf("\n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j <= N+i; j++)
        {
            if (j<N-i){
                printf(" ");
            }
            else{
                printf("*");
            }

        }
        printf("\n");
    
    }
}

void exercicio54()
{
    int N=5, i=0, j=0;
    do
    {
        printf("Digite um valor para N (1:20)  \n");
        scanf("%d", &N );
        if(N>=20 || N<1){
            printf("Valor invalido!\n");
        }
    } while (N>=20 || N<1);
    
    printf("\n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i == 0 || i == N-1 || j == 0 || j == N-1)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    
    }
}

void exercicio55()
{
    int altura=9, i=0, j=0, espacos, asteriscos =1;

    espacos = (altura-1)/2;;

    for (i = 0; espacos>1; i++)
    {

            
        for(j = 1 ; j <= espacos ; j++){
        printf(" ");
        }

        for(j = 1 ; j <= asteriscos ; j++){
        printf("*");
        }

        espacos--;
        asteriscos += 2;
        printf("\n");
    }
    for(i=0; asteriscos>0; i++){

        for(j = 1 ; j <= espacos ; j++){
            printf(" ");
        }
        
        for(j = 1 ; j <= asteriscos ; j++){
            printf("*");
        }
        
        asteriscos -= 2;
        espacos++;
    
        printf("\n");
    }
    
}

void exercicio56()
{
    int altura, i=0, j=0, espacos, asteriscos =1;

    do{
        printf("Digite um valor impar para altura ");
        scanf("%d", &altura);

        if (altura%2==0)
        {
            printf("VALOR INVALIDO\n\n");
        }
    
    } while(altura%2==0 || altura > 19|| altura<1);

    printf("\n\n");

    espacos = (altura-1)/2;;

    for (i = 0; espacos>1; i++)
    {

            
        for(j = 1 ; j <= espacos ; j++){
        printf(" ");
        }

        for(j = 1 ; j <= asteriscos ; j++){
        printf("*");
        }

        espacos--;
        asteriscos += 2;
        printf("\n");
    }
    for(i=0; asteriscos>0; i++){

        for(j = 1 ; j <= espacos ; j++){
            printf(" ");
        }
        
        for(j = 1 ; j <= asteriscos ; j++){
            printf("*");
        }
        
        asteriscos -= 2;
        espacos++;
    
        printf("\n");
    }
}

void exercicio57()
{
    int N = 5, i = 0, j = 0, soma =0;
    do
    {
        printf("Digite um valor para N (1:9)  \n");
        scanf("%d", &N);
        if (N > 9 || N < 1)
        {
            printf("Valor invalido!\n");
        }
    } while (N > 9 || N < 1);

    printf("\n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            printf("%d ", j+1);
            soma += j+1;
        }
        for (j = 0; j < 20 - (i*2); j++)
        {
            printf(" ");

        }
        
        printf("%d \n", soma);
        soma =0;
    }

}

int main(int argc, char **argv)
{

    int nExercicio = 1;

    do
    {
        printf("Digite o numero do exercicio que deseja executar (50:57) ou 0 para sair: ");
        scanf("%d", &nExercicio);

        switch (nExercicio)
        {
        case 0:
            break;
        case 1:
        {
            exercicio50();
            break;
        }
        case 2:
        {
            exercicio51();
            break;
        }
        case 3:
        {
            exercicio52();
            break;
        }
        case 4:
        {
            exercicio53();
            break;
        }
        case 5:
        {
            exercicio54();
            break;
        }
        case 6:
        {
            exercicio55();
            break;
        }
        case 7:
        {
            exercicio56();
            break;
        }
        case 8:
        {
            exercicio57();
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
