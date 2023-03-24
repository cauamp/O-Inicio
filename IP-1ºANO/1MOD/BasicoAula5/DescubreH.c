#include <stdio.h>
#define SUCESSO 0 

int main(int argc, char ** argv){
    float H ;
    float dividendo = 1;

H = (dividendo + (dividendo / 2 ) + (dividendo / 3) + (dividendo / 4) + (dividendo / 5));

printf ("\n O valor de H eh: %.3f", H);

return SUCESSO;

}