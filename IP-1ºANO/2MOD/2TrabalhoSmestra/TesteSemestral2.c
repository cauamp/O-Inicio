/**
 * @file   prova2oT.c
 * @brief  Arquivo com a implementação da prova do 2o Trimestre de 2020.
 * @author Cauã Magalhães Pereira
 * @date   2020-12-10
 */

/* Inclusões */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>

/* Constantes */

/// Lista de erros
#define SUCESSO (0)

/// Definições de limites
#define NUMERO_ESTADOS_E_DF (26 + 1)
#define TAMANHO_MAIOR_NOME (19 + 1)

// ------------------------
// - INÍCIO DO SEU CÓDIGO -
// ------------------------

// INSIRA SEU CÓDIGO AQUI
#define X (10)
#define Y (50 + 1)
//INICIO QUESTÃO 1
// Aloca um vetor com <nCaracteres> de tamanho
char *alocaVetorCaracteres(int nCaracteres)
{
  char *a;
  a = (char *)malloc(nCaracteres * sizeof(char));
  return a;
}

// Aloca um vetor de vetores onde cara linha do vetor tenha
// <tamLinhas[i]> caracteres
char **alocaVetorBidimensional(int *tamLinhas, int nLinhas)
{
  char **a;
  int i;
  a = (char **)malloc(nLinhas * sizeof(char*));
  for (i = 0; i < nLinhas; i++)
  {
    a[i] = (char *)malloc(tamLinhas[i] * sizeof(char*));
  }

  return a;
}

// Imprime em cada linha o conteúdo da linha da matriz
void imprimeMatrizDinamica(char **matriz, int nLinhas)
{
  int i;
  for (i = 0; i < nLinhas; i++)
  {
    printf("%s\n", matriz[i]);
  }
}

// Libera a memória alocada
void liberaMatriz(char **matriz, int nLinhas)
{
  int i;
  for (i = 0; i < nLinhas; i++)
  {
    free(matriz[i]);
  }
  free(matriz);
  
}

//FIM QUESTÃO 1

// Imprime uma matriz como se fosse um vetor linear
// É importante saber o tamanho das colunas para fazer
// a quebra na posição correta. Isso está explicado
// nos videos das Lives.
void imprimeMatriz(char *matriz, int nLinhas, int nColunas)
{

  int i;

  for (i = 0; i < nLinhas; i++)
  {
    printf("%s\n", &matriz[i * nColunas]);
  }
}

//QUESTÃO 2 - Copia matriz para outra matriz com tamanho exato, com base em X,Y
char **copiaMatriz(char matriz[X][Y])
{

  int i, tam[X];
  char **copia;

  for (i = 0; i < X; i++)
  {
    tam[i] = strlen(matriz[i]);
  }

  copia = (char **)malloc(X * sizeof(char*));
  for (i = 0; i < X; i++)
  {
    copia[i] = (char *)malloc(tam[i] * sizeof(char*));
  }

  for (i = 0; i < X; i++)
  {
    strcpy(copia[i],matriz[i]);
  }
  return copia;
}

//Copia a matriz "NOME_ESTADOS", para uma matriz com tamanho exato para cada nome de estado
char **copiaNOMES_ESTADOS(const char matriz[NUMERO_ESTADOS_E_DF][TAMANHO_MAIOR_NOME])
{
  int nLinhas = NUMERO_ESTADOS_E_DF;
  int i;
  char **copia;
  int *tam;
  tam = (int *)malloc(NUMERO_ESTADOS_E_DF * sizeof(int));
  for (i = 0; i < NUMERO_ESTADOS_E_DF; i++)
  {
    tam[i] = (int)strlen(matriz[i]);
  }

  
  copia = (char **)malloc(nLinhas * sizeof(char*));
  for (i = 0; i < nLinhas; i++)
  {
    copia[i] = (char *)malloc(tam[i] * sizeof(char*));
  }

  for (i = 0; i < nLinhas; i++)
  {
    strcpy(copia[i],matriz[i]);
  }
  return copia;
}

//QUESTÃO 3 - Ordena matriz por ordem alfabetica
char **ordenaMatrizPorNome(char **vetor)
{

  int i, j;
  char *tmp;

  for (i = 0; i < (NUMERO_ESTADOS_E_DF - 1); i++)
  {
    for (j = 0; j < (NUMERO_ESTADOS_E_DF - 1); j++)
    {
      // Se estiver fora de ordem...
      if (strcmp(vetor[j], vetor[j + 1]) > 0)
      {
        // ... troca de posicao
        tmp = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = tmp;
      }
    }
  }
  return vetor;
}

// ------------------------
// - FIM DO SEU CÓDIGO    -
// ------------------------

/**
 * Rotina que imprime o nome de cada um dos estados que está no vetor.
 * Essa função não é genérica no sentido de imprimir qualquer vetor.
 * Ela imprime unicamente um vetor de char * de dimensões fixas.
 * @param vetor Endereço do vetor com os endereços das STRINGS que
 * serão impressas.
 */
void imprimeVetorNomesEstados(char *vetor[NUMERO_ESTADOS_E_DF])
{

  int i;

  for (i = 0; i < NUMERO_ESTADOS_E_DF; i++)
  {
    printf("%s\n", vetor[i]);
  }
}

/**
 * Rotina que imprime o nome de cada um dos estados que está na matriz.
 * Essa função não é genérica no sentido de imprimir qualquer matriz.
 * Ela imprime unicamente uma matriz de char de dimensões fixas.
 * @param matriz Endereço da matriz com os nomes dos estados que
 * serão impressos.
 */
void imprimeMatrizNomesEstados(char matriz[NUMERO_ESTADOS_E_DF][TAMANHO_MAIOR_NOME])
{

  int i;

  for (i = 0; i < NUMERO_ESTADOS_E_DF; i++)
  {
    printf("%s\n", matriz[i]);
  }
}

/**
 * Rotina que ordena um vetor de STRINGS.
 * Essa rotina é a implementação do algoritmo do BubbleSort em sua versão
 * mais simples. O objetivo aqui é simplesmente mapear de ALGORITMO para C.
 * Basicamente o que esse algoritmo faz é comparar cada posição com o
 * próximo, se for maior, então ele troca de posição, como se fosse uma
 * BOLHA subindo, daí o nome BubbleSort. Observe que como o vetor só
 * contêm endereços, ele só precisa trocar um endereço com o outro. Caso
 * o algoritmo fosse implementado na matriz, ele teria que copiar a STRING
 * inteira de um lugar para o outro.
 * Essa função é genérica no sentido de ordenar qualquer vetor.
 * @param vetor Endereço do vetor com o endereço das STRINGS a serem ordenadas.
 */
void ordenacaoPorNome(char *vetor[NUMERO_ESTADOS_E_DF])
{

  int i, j;
  char *tmp;

  for (i = 0; i < (NUMERO_ESTADOS_E_DF - 1); i++)
  {
    for (j = 0; j < (NUMERO_ESTADOS_E_DF - 1); j++)
    {
      // Se estiver fora de ordem...
      if (strcmp(vetor[j], vetor[j + 1]) > 0)
      {
        // ... troca de posicao
        tmp = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = tmp;
      }
    }
  }
}

/**
 * Função principal.
 * @param argc Número de parâmetros.
 * @param argv Vetor com os parâmetros.
 * @return SUCESSO caso o programa rode normalmente, ou caso contrário,
 * o código do erro ocorrido.
 */
int main(int argc, char *argv[])
{

  // Matriz com o nome dos estados do Brasil e DF
  const char NOMES_ESTADOS[NUMERO_ESTADOS_E_DF][TAMANHO_MAIOR_NOME] = {
      "Roraima", "Amapa", "Tocantins", "Alagoas", "Paraiba", "Mato Grosso", "Piaui",
      "Bahia", "Acre", "Goias", "Sao Paulo", "Pernambuco", "Santa Catarina",
      "Espirito Santo", "Rio Grande do Sul", "Rondonia", "Mato Grosso do Sul", "Maranhao",
      "Para", "Minas Gerais", "Parana", "Distrito Federal", "Rio Grande do Norte",
      "Ceara", "Rio de Janeiro", "Sergipe", "Amazonas"};

  // Vetor com a posição de cada estado presente em NOMES_ESTADOS em relação
  // a população do Brasil.
  const int POSICOES_POPULACAO[NUMERO_ESTADOS_E_DF] = {
      27, 26, 24, 18, 14, 17, 19,
      4, 25, 12, 1, 7, 10,
      15, 6, 23, 21, 11,
      9, 2, 5, 20, 16,
      8, 3, 22, 13};

  // Vetor com a popução de cada estado presente em NOMES_ESTADOS.
  const int POPULACAO[NUMERO_ESTADOS_E_DF] = {
      576568, 829494, 1555229, 3322820, 3996496, 3441998, 3264531,
      14812617, 869265, 6921161, 45538936, 9496294, 7075494,
      3972388, 11329605, 1757589, 2748023, 7035055,
      8513497, 21040662, 11348937, 2974703, 3479010,
      9075649, 17159960, 2278308, 4080611};

  // ------------------------
  // - INÍCIO DO SEU CÓDIGO -
  // ------------------------

  // Insira seu código aqui

  //Questão 4

  //A - Imprima o nome dos estados armazenado na matriz original;
  printf("Primeira chamada questao 4\n");
  imprimeMatriz((char *)NOMES_ESTADOS, NUMERO_ESTADOS_E_DF, TAMANHO_MAIOR_NOME);
  //B - Copie todos os estados para uma matriz alocada dinamicamente que caiba exatamente os nomes dos estados, sem sobrar nenhum espaço;
  char **copia;
  copia = copiaNOMES_ESTADOS(NOMES_ESTADOS);
// copia=copiaMatrizEstados(NOMES_ESTADOS);
  //C -  Imprima o nome dos estados na cópia;
  printf("\n\nSegunda chamada questao 4 (Copia)\n");
  imprimeMatrizDinamica((char **)copia, NUMERO_ESTADOS_E_DF);
  //D - Ordene a cópia;
  copia = ordenaMatrizPorNome((char **)copia);
  //E - Imprima a cópia ordenada;
  printf("\n\nTerceira chamada questao 4 (Copia Ordenada)\n");
  imprimeMatrizDinamica(copia, NUMERO_ESTADOS_E_DF);
  //F - Imprima a original;
  printf("\n\nQuarta chamada questao 4 (Original)\n");
  imprimeMatriz((char *)NOMES_ESTADOS, NUMERO_ESTADOS_E_DF, TAMANHO_MAIOR_NOME);
  //G - Libere toda a memória alocada dinamicamente.
  liberaMatriz(copia, NUMERO_ESTADOS_E_DF);
  // ------------------------
  // - FIM DO SEU CÓDIGO    -
  // ------------------------

  // Se chegou até aqui é porque correu tudo bem
  return SUCESSO;
}