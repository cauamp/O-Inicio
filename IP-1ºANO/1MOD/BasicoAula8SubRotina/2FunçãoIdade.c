#include <stdio.h>
#define SUCESSO  0

int idade (A, M, D){
    A = A*365;
    M = M*30;
    return (A + M + D);
} 

int main(int argc, char ** argv) {
    int A, M, D, total;
  printf("Digite seus anos de vida\n");
  scanf("%d", &A);
  printf("Digite seus meses de vida\n");
  scanf("%d", &M);
  printf("Digite seus dias de vida\n");
  scanf("%d", &D);

  
  printf("Sua idade total em dias eh %d", idade(A, M, D));
  return SUCESSO;
}