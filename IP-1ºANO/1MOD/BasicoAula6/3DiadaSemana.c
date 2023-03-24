#include <stdio.h>
#define SUCESSO  0

int main(int argc, char ** argv) {
  
  int dia_da_semana;

  printf("Insira o numero do dia da semana \n");
  scanf("%d", &dia_da_semana);

  if(dia_da_semana ==1){
      printf("Domingo");
  }
  else if(dia_da_semana ==2){
      printf("Segunda-Feira");
  }
  else if(dia_da_semana ==3){
      printf("Terça-Feira");
  }
  else if(dia_da_semana ==4){
      printf("Quarta-Feira");
  }
  else if(dia_da_semana ==5){
      printf("Quinta-Feira");
  }
  else if(dia_da_semana ==6){
      printf("Sexta-Feira");
  }
  else if(dia_da_semana ==7){
      printf("Sabado");
  }
  else {
      printf("Dia da semana Invalido");
  }
}