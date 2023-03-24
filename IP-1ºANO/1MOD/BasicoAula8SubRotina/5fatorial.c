#include <stdio.h>
#define SUCESSO  0
int fatorial(f){
    int result=1;
    do{
    result = f * result;
    f --;
  } while (f>=1);

  return (result);
}

int main(int argc, char ** argv) {

    int f;
    
    printf("Digite um numero\n");
    scanf("%d", &f);

    printf("\nO fatorial de %d eh %d", f, fatorial(f));
  return SUCESSO;
}