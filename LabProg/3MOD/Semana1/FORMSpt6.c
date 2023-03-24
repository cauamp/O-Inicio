#include <stdio.h>

int main()
{

    float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    float *f;

    int i;

    f = vet;

    printf("contador          valor                   valor                   endereco                   endereco");

    for (i = 0; i <= 4; i++)
    {

        printf("\ni =%d", i);
        printf("          ");

        printf(" vet [%d] =%.1f", i, vet[i]);
        printf("          ");

        printf(" *(f+%d) - %.1f", i, *(f + i));
        printf("          ");

        printf(" &vet [%d] =%x", i, (unsigned int)&vet[i]);
        printf("          ");

        printf(" (f +%d) - %x", i, (unsigned int)(f+i));
        printf("          ");
    }

    return 0;
}
