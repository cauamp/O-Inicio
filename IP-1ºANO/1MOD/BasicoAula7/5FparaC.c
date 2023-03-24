#include <stdio.h>
#include <math.h>
#define SUCESSO  0

int main(int argc, char ** argv) {
  float C, F;
  F = 50;

  while (F <= 150) {

    C = ((F-32)*5/9);
      printf("F= %.2f C= %2.f \n", F, C );
      //printf("%.2f  %.2f \n", F, C);
      F ++;
  }
  return SUCESSO;
}