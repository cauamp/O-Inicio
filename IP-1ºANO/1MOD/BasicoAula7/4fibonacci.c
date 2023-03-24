#include <stdio.h>
#define SUCESSO  0

int main(int argc, char ** argv) {
  
  int f1 = 1, f2=1; 
  int N, fn, limitador = 3;

  fn = f1 + f2;

  printf("Insira o numero de casas \n");
  scanf("%d", &N);

if(N==1){
  printf("O primeiro numero da sequencia de fibonacci eh %d", f1);
}
else
{
  
  printf("Os primeiros %d numeros da sequencia de  fibonacci sao : %d %d ", N, f1, f2 );
}


  while (limitador <=N)
  {
      printf("%d ", fn);

      f1 = f2;
      f2 = fn;
      fn = f1 + f2;

      limitador++;
  }


  return SUCESSO;
}