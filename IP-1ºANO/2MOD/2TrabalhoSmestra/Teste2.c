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
#define SUCESSO                 (0)

/// Definições de limites
#define NUMERO_ESTADOS_E_DF     (26 + 1)
#define TAMANHO_MAIOR_NOME      (19 + 1)

// ------------------------
// - INÍCIO DO SEU CÓDIGO -
// ------------------------

// INSIRA SEU CÓDIGO AQUI

// Aloca um vetor com <nCaracteres> de tamanho
char * alocaVetorCaracteres(int nCaracteres) {
  return NULL;
}

// Aloca um vetor de vetores onde cara linha do vetor tenha
// <tamLinhas[i]> caracteres
char ** alocaVetorBidimensional(int * tamLinhas, int nLinhas) {
  return NULL;
}

// Imprime em cada linha o conteúdo da linha da matriz
void imprimeMatrizDinamica(char ** matriz, int nLinhas) {

}

// Libera a memória alocada
void liberaMatriz(char ** matriz, int nLinhas) {

}

// Imprime uma matriz como se fosse um vetor linear
// É importante saber o tamanho das colunas para fazer
// a quebra na posição correta. Isso está explicado
// nos videos das Lives.
void imprimeMatriz(char * matriz, int nLinhas, int nColunas) {

  int i;

  for (i = 0; i < nLinhas; i++) {
    printf("%s\n", &matriz[i * nColunas]);
  }
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
void imprimeVetorNomesEstados(char * vetor[NUMERO_ESTADOS_E_DF]) {

  int i;

  for (i = 0; i < NUMERO_ESTADOS_E_DF; i++) {
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
void imprimeMatrizNomesEstados(char matriz[NUMERO_ESTADOS_E_DF][TAMANHO_MAIOR_NOME]) {

  int i;

  for (i = 0; i < NUMERO_ESTADOS_E_DF; i++) {
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
void ordenacaoPorNome(char * vetor[NUMERO_ESTADOS_E_DF]) {

  int i, j;
  char * tmp;

  for (i = 0; i < (NUMERO_ESTADOS_E_DF - 1); i++) {
    for (j = 0; j < (NUMERO_ESTADOS_E_DF - 1); j++) {
      // Se estiver fora de ordem...
      if (strcmp(vetor[j], vetor[j + 1]) > 0) {
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
int main(int argc, char * argv[]) {

  // Matriz com o nome dos estados do Brasil e DF
  const char NOMES_ESTADOS[NUMERO_ESTADOS_E_DF][TAMANHO_MAIOR_NOME] = {
    "Roraima", "Amapa", "Tocantins", "Alagoas", "Paraiba", "Mato Grosso", "Piaui",
    "Bahia", "Acre", "Goias", "Sao Paulo", "Pernambuco", "Santa Catarina",
    "Espirito Santo", "Rio Grande do Sul", "Rondonia", "Mato Grosso do Sul", "Maranhao",
    "Para", "Minas Gerais", "Parana", "Distrito Federal", "Rio Grande do Norte",
    "Ceara", "Rio de Janeiro", "Sergipe", "Amazonas"
  };

  // Vetor com a posição de cada estado presente em NOMES_ESTADOS em relação 
  // a população do Brasil.
  const int POSICOES_POPULACAO[NUMERO_ESTADOS_E_DF] = {
    27, 26, 24, 18, 14, 17, 19,
    4, 25, 12,  1,  7, 10,
    15,  6, 23, 21, 11,
    9,  2,  5, 20, 16,
    8,  3, 22, 13
  };

  // Vetor com a popução de cada estado presente em NOMES_ESTADOS.
  const int POPULACAO[NUMERO_ESTADOS_E_DF] = {
    576568, 829494, 1555229, 3322820, 3996496, 3441998, 3264531,
    14812617, 869265, 6921161, 45538936, 9496294, 7075494,
    3972388, 11329605, 1757589, 2748023, 7035055,
    8513497, 21040662, 11348937, 2974703, 3479010,
    9075649, 17159960, 2278308, 4080611
  };

  // ------------------------
  // - INÍCIO DO SEU CÓDIGO -
  // ------------------------

  // Insira seu código aqui

  // Exemplo de uso do imprimeMatriz
  // Apague para a resolução da prova. Está aqui apenas como dica ;-)
  imprimeMatriz((char *)NOMES_ESTADOS, NUMERO_ESTADOS_E_DF, TAMANHO_MAIOR_NOME);

  // Libere a memória alocada AQUI


    // ------------------------
    // - FIM DO SEU CÓDIGO    -
    // ------------------------

    // Se chegou até aqui é porque correu tudo bem
    return SUCESSO;
}