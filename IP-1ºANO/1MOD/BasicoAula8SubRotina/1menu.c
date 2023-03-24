#include <stdio.h>
#define SUCESSO  0

int soma (n1, n2){
    return(n1+n2);
}
int mutiplicacao (n1, n2){
    return(n1*n2);
}
int divisao (n1, n2){
    return(n1/n2);
}

int main(int argc, char ** argv) {

    int n1=0, n2=0, operacao;
    
    printf("Escolha um opcao pelo numero respectivo:\n 1-SOMA \n 2-PRODUTO \n 3-QUOCIENTE \n 4-SAIR \n");
    scanf("%d", &operacao);
    
    if(operacao == 1 || operacao==2 ||operacao ==3){
     printf("Digite dois numeros \n");
    scanf("%d %d",&n1, &n2 );
    }

    if(operacao==1){
        printf("A soma de %d e %d eh %d", n1, n2, soma(n1, n2));
    }
    else if(operacao==2){
        printf("O produto de %d e %d eh %d", n1, n2, mutiplicacao(n1, n2));
    }
    else if(operacao==3){
        printf("A divisão de %d por %d eh %d", n1, n2, divisao(n1, n2));
    }

    
    return SUCESSO;
}