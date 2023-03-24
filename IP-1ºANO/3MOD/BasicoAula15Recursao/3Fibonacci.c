#include <stdio.h>
#define SUCESSO 0

int * calcula_Fibonacci (int pos){
    int aux, *val;
    val=(int*)malloc(2*sizeof(int));
    if(pos==1||pos==2){
        val[0]=1;
        val[1] = 1;
        return(val);
    }
    else{
        val = calcula_Fibonacci(pos-1);
        aux= val[1];
        val[1] = val[1]+val[0];
        val[0]=aux;
    }
    return(val);

}

int main(int argc, char **argv){

    int pos,lixo, *N;

    N=(int*)malloc(2*sizeof(int));

    printf("O valor de qual ordem da sequencia de fibonacci, voce deseja saber?\n");
    scanf("%d", &pos);
    N= calcula_Fibonacci(pos);

    printf("O valor da %d ordem da sequencia de fibonacci eh: %d",pos, N[1]);

    return SUCESSO;
}