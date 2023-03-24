#include <stdio.h>
#define SUCESSO 0

void exercicio76(){

    int tamanho_int, tamanho_float, tamanho_double, tamanho_longint, tamanho_char;

    tamanho_int = sizeof(int);
    tamanho_float = sizeof(float);
    tamanho_double = sizeof(double);
    tamanho_longint = sizeof(long int);
    tamanho_char = sizeof(char);

    printf("\nTamanho em bytes de uma variavel int: %d\n", tamanho_int);
    printf("Tamanho em bytes de uma variavel float: %d\n", tamanho_float);
    printf("Tamanho em bytes de uma variavel double: %d\n", tamanho_double);
    printf("Tamanho em bytes de uma variavel long int: %d\n", tamanho_longint);
    printf("Tamanho em bytes de uma variavel char: %d\n", tamanho_char);

}

void exercicio77(){

    int x, *px;
    float y, *py;

    px = &x;
    py = &y;

    printf("\nDigite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%f", &y);

    printf("\nO valor de x eh: %d e o valor de y eh: %f\n", x, y);
    printf("O endereco na RAM de x eh: %X e o endereco na RAM de y eh: %X\n", &x, &y);
    printf("O conteudo do endereco na RAM de x eh: %d e o conteudo do endereco na RAM de y eh: %f\n", *(&x), *(&y));
    printf("O endereco armazenado no ponteiro que aponta para x eh: %X e o endereco armazenado no ponteiro que aponta para y eh: %X\n", &px, &py);
    printf("O conteudo do endereco do ponteiro que aponta para x eh: %d e o conteudo do endereco do ponteiro que aponta para y eh: %f\n", *px, *py);

}

void exercicio78(){

    int x, y, z, *px, *py, *pz;
    //int v[] = {6, 5, 4, 3, 2, 1, 0, -1}, i;
    x = 0x2; y = 0xABCD; z = 0x23;
    px = &x;
    py = &y;
    pz = &z;
    printf("\n*px = %X\n", *px);
    printf("px = %p\n", px);
    printf("*py = %X\n", *py);
    printf("py = %p\n", py);
    printf("*pz = %X\n", *pz);
    printf("pz = %p\n", pz);

    printf("*(px+1) = %X\n", *(px+1));
    printf("(px+1) = %p\n", (px+1));

    printf("*(px+2) = %X\n", *(px+2));
    printf("(px+2) = %p\n", (px+2));

    printf("*(px+3) = %X\n", *(px+3));
    printf("(px+3) = %p\n", (px+3));

    printf("*(px+10) = %X\n", *(px+10));
    printf("(px+10) = %p\n\n", (px+10));

    printf("x ocupa %d bytes\n", sizeof(x));
    printf("y ocupa %d bytes\n", sizeof(y));
    printf("z ocupa %d bytes\n\n", sizeof(z));
    
    printf("endereco de x: %X\n", &x);
    printf("endereco de y: %X\n", &y);
    printf("endereco de z: %X\n\n", &z);

    printf("conteudo de x: %X\n", x);
    printf("conteudo de y: %X\n", y);
    printf("conteudo de z: %X\n\n", z);

    printf("px ocupa %d bytes\n", sizeof(px));
    printf("py ocupa %d bytes\n", sizeof(py));
    printf("pz ocupa %d bytes\n\n", sizeof(pz));

    printf("conteudo de px: %X\n", *px);
    printf("conteudo de py: %X\n", *py);
    printf("conteudo de pz: %X\n\n", *pz);
    
    printf("endereco de px: %X\n", &px);
    printf("endereco de py: %X\n", &py);
    printf("endereco de pz: %X\n\n", &pz);

}


int main(int argc, char** argv)
{
    int nExercicio = 1;

    do
    {
        printf("\n");
        printf("Secao 09\n\nDigite o numero do exercicio que deseja executar (76:78) ou 0 para sair para o menu de secoes: ");
        scanf("%d", &nExercicio);

        switch (nExercicio)
        {
        case 0:
            printf("Voltando ao menu de secoes!");
            break;
        case 76:
        {
            exercicio76();
            break;
        }
        case 77:
        {
            exercicio77();
            break;
        }
        case 78:
        {
            exercicio78();
            break;
        }
        default:
        {
            printf("Voce escolheu um exercicio invalido.\n\n\n");
        }
        }
    } while (nExercicio != 0);

	return SUCESSO;
}