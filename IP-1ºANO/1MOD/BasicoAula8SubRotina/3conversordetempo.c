#include <stdio.h>
#define SUCESSO  0

float tempo(float S){
    float M =(S/60);
    float H =(S/3600);

    return printf("O experimento durou :\nSegundos:%.2f\nMinutos:%.2f\nHoras:%.2f", S, M, H);
} 
int main(int argc, char ** argv) {

    float n;
    printf("Escreve o tempo do experimento em segundos: \n");
    scanf("%f", &n);

    
    tempo(n);
    return SUCESSO;
}