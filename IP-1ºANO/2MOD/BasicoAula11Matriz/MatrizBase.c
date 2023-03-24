#include <stdio.h>
#define SUCESSO 0
#define NLINHAS 3
#define NCOLUNAS 3

void scanfM(int matriz[NLINHAS][NCOLUNAS])
{
	int i, j;
	printf("\nDigite valor para os elementos da matriz\n\n");

	for (i = 0; i < NLINHAS; i++)
		for (j = 0; j < NCOLUNAS; j++)
		{
			printf("\nElemento[%d][%d] = ", i, j);
			scanf("%d", &matriz[i][j]);
		}
}

int main(int argc, char **argv)
{
	int matriz[NLINHAS][NCOLUNAS];

	scanfM(matriz);
	return SUCESSO;
}