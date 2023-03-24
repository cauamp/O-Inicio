#include <stdio.h>
#include <math.h>
#define SUCESSO 0
#define TAMANHO_MAX_NOME 50

int main(int argc, char **argv)
{
    int i = 0;
    float  var1, var2, soma = 0, aux;

    for (i = 0; i < 30; i++)
    {
        var1 = (480 - (i* 5));
        var2 = (10 + i);
        aux = (var1/var2);

        if ((i / 2) == ceil(i / 2))
        {
            soma =  soma + aux;
        }
        else
        {
            soma = soma - aux;
        }
       
    }

    printf("%f", soma);

    return SUCESSO;
}