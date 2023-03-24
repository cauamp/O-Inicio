#include <stdio.h>
#include <math.h>
#include <string.h>
#define SUCESSO 0
#define TAMANHO_MAXIMO_STRING 50

void calcula_raizes(int a, int b, int c, double *raizes)
{

  double delta;

  delta = pow(b, 2) + (- 4 * a * c);

  if (delta > 0)
  {
    raizes[0] = (-b + sqrt(delta)) / (2 * a);
    raizes[1] = (-b - sqrt(delta)) / (2 * a);
  }
  else
  {
    raizes[0] = 0;
    raizes[1] = 0;
  }
}

void exercicio04()
{

  int a, b, c;
  double *raizes;

  raizes = (double *)malloc(2 * sizeof(double));

  printf("Digite o valor de a: ");
  scanf("%d", &a);
  printf("Digite o valor de b: ");
  scanf("%d", &b);
  printf("Digite o valor de c: ");
  scanf("%d", &c);
  printf("\n\n");
  calcula_raizes(a, b, c, raizes);

  if (raizes[0] == 0 && raizes[1] ==0)
  {
    printf("Delta negativo!");

  }
  else
  {
    printf("\nAs raizes da equacao sao: x1 = %.2f e x2 = %.2f\n", raizes[0], raizes[1]);
  }
}

char **aloca_matriz_caracter(int tam)
{

  char **m;
  int i;
  m = (char **)malloc(tam * sizeof(char *));

  getchar();

  for (i = 0; i < tam; i++)
  {
    m[i] = (char *)malloc(TAMANHO_MAXIMO_STRING * sizeof(char));
  }

  return m;
}

void exercicio06()
{

  char **string;
  int tamanho = 5, maior = 0, indice = 0, i;

  string = aloca_matriz_caracter(tamanho);

  for (i = 0; i < 5; i++)
  {
    printf("Digite a string numero %d: ", i + 1);
    fgets(string[i], TAMANHO_MAXIMO_STRING, stdin);
  }

  for (i = 0; i < 5; i++)
  {

    if ((int)strlen(string[i]) > maior)
    {
      maior = strlen(string[i]);
      indice = i;
    }
  }

  printf("\nA maior matriz eh: %s", string[indice]);


  for (i = 0; i < 5; i++)
  {
    free(string[i]);
  }
  
  free(string);
}

int main(int argc, char **argv)
{

  int questao = 1;

  do
  {

    printf("\nDigite: \n\n 0  para [sair] \n 4  para [questao 4] \n 6  para [questao 6]\n");
    scanf("%d", &questao);

    switch (questao)
    {
    case 0:
      printf("Programa encerrado!");
      break;
    case 4:
      exercicio04();
      break;

    case 6:
      exercicio06();
      break;

    default:
      break;
    }

  } while (questao != 0);

  return SUCESSO;
}
