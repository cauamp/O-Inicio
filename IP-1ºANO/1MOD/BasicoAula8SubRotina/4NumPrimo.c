#include <stdio.h>
#define SUCESSO  0

int primo(int num){
    int i, numDeDivisores =0;
    for ( i = 2; i <=num/2; i++){
        if (num%i==0){
            numDeDivisores++;
        }
    }
    return (numDeDivisores);
}
int main(int argc, char ** argv) {

    int num, aux;

    printf("Digite um numero \n");
    scanf("%d", &num);

    aux = primo(num);

    if(aux==0){
        printf("O numero eh primo!");
    }
    else{
        printf("O numero nao eh primo");
    }
  return SUCESSO;
}