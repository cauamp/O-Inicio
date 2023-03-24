#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define SUCESSO 0

void  exercicio69(){
/*69. Considere a matriz Z, 3×3 dada abaixo.
Z =
2 3 −1
0 1 0
1 −1 1

A partir dessa matriz, fa¸ca um programa que calcule a soma σ dada por:
σ =3∑1  Zi2 + 3∑1 Z3 j
Os ´ındices considerados nos somat´orios s˜ao os da matem´atica. Obviamente deve-se
fazer a adapta¸c˜ao para o programa em C.
*/
    int Z[3][3], i, j, somal=0, somacol=0, somatotal;

    Z[0][0] = 2; Z[0][1] =  3; Z[0][2] = -1;
    Z[1][0] = 0; Z[1][1] =  1; Z[1][2] =  0;
    Z[2][0] = 1; Z[2][1] = -1; Z[2][2] =  1;

// mostrando a matriz no terminal
    printf("Matriz inicial: \n");
for(i=0; i<=2; i++){
    for(j=0; j<=2; j++){
        printf(" %d ", Z[i][j]);
    }
    printf("\n");
    j = 0;
}
//Realizando a somatoria
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            somal = Z[2][j] + somal;
           
    }
    printf("\n");  
     somacol = Z[i][1] + somacol;
     
}

somatotal = somal+somacol;

printf("O resultado da somatoria Zi2(I de 1 a 3) + Z3j(j de 1 a 3) eh = %d \n", somatotal);
getchar();
}

void  exercicio70(){
       /*70. Fa¸ca um programa para preencher uma matriz n × m (n e m s˜ao inteiros informados
pelo usu´ario. Ambos devem ser menor ou igual a 6) com a regra:

       M [i] [j] = 2 ∗ i+ j

Ap´os preencher a matriz o programa deve calcular a soma de cada linha e mostrar
o valor calculado. O programa deve tamb´em mostrar a matriz no formato matricial.
Ao preencher usando a regra deve-se considerar a nota¸c˜ao da linguagem C (isto ´e, a
primeira posi¸c˜ao da matriz ´e (0,0)).

    int lin=0, col=0, ilin, icol;

*/
    int lin=0, col=0, ilin, icol, soma = 0;


//Recebendo as variaveis referentes a linhas e colunas da matriz
    do{
        printf("\n Digite um numero, entre 1 e 6, para ser as linhas da matriz:");
        scanf("%d", &lin);
        getchar();
        printf("Digite um numero, entre 1 e 6, para ser as colunas da matriz:");
        scanf("%d", &col);
        getchar();
        if(lin>6 || lin<1 || col>6 || col<1){
            printf("\n Numeros digitados estao fora do intervalo aceito para linha"
             " e coluna !!! DIGITE NUMEROS ENTRE 1 E 6 \n ");
             
        }
    }while (lin>6 || lin<1 || col>6 || col<1);

    //declarando a matriz

    int m[lin][col];

    //Preenchendo a matriz  e printando ela
    printf("\nMatriz seguida da soma da soma de suas linhas: \n");

    for(ilin=0; ilin<lin; ilin++){

        for(icol=0; icol<col; icol++){
            //Dando valor as posições
            m[ilin][icol] = 2 * ilin + icol;

            //somando a posições das linhas
            soma = m[ilin][icol] + soma;
            
            //printando cada posição
             printf("  %d ", m[ilin][icol]);

             //printando a soma das linhas
             if(icol == col-1){
                 
                 printf("         %d", soma);
             }
        }
            printf("\n");
            icol = 0;
            soma = 0; 
    }
}

void  exercicio71(){

/*
71. Fa¸ca um programa para preencher um vetor de 10 posi¸c˜oes usando a regra dado abaixo.
v[i] = i^3
*/
int v[10], i;

printf("Vetor de 10 posicoes, com cada uma seguindo a seguinte regra: "
"v[i] = i^3 \n\n");


for(i = 0; i < 10; i++){

    v[i]= pow(i,3);
    printf(" %d ", v[i]);
}

}

void exercicio72(){
/*72. Fa¸ca um programa para preencher um vetor de 10 posi¸c˜oes usando a regra dada abaixo.
v[i] = i/2 se i ´e par
        (i+1)/2+i se i ´e ´ımpar
*/
int v[10], i;

printf("Vetor de 10 posicoes, com cada posicao uma seguindo a seguinte regra: \n "
"v[i] = i/2 se i eh par \n"
"v[i] = (i+1)/2+i se i eh impar\n\n");


for(i = 0; i < 10; i++){

    if(i%2 == 0){//se é par ....
     v[i]= i/2;
    printf(" %d ", v[i]);   
    } else{//se não...
    // a função para numeros impares no pdf do exercicio estava:
     //(i+1)/2 + i, logo por (i+1)/(2+i) retorar um float eu ultilizei 
     //ela assim ((i+1)/2)+i ps. dessa forma faz mais sentido.
        v[i] =((i+1)/2)+i;
        printf(" %d ", v[i]); 
    }
    
}

}

void exercicio73(){
    /*73. Fa¸ca um programa C para gerar duas matrizes 5×5 de inteiros, mostr´a-as, calcular e
mostrar a soma delas.
*/
     int m1[5][5], m2[5][5], m3[5][5], ilin, icol;
  
  printf("Gerando duas matrizes com valores aleatorios entre 0 e 5:\n\n");
  
  for (ilin = 0; ilin < 5; ilin++)
  {
      for(icol = 0; icol < 5; icol++ ){
    // gerando valores aleatórios entre zero e 5 e inserindo eles nas matrizes 1 e 2 
    m1[ilin][icol] = rand() % 5;
    m2[ilin][icol] = rand() % 5;
    //Somando m1 com m2 e jogando em m3
    m3[ilin][icol] = m1[ilin][icol] + m2[ilin][icol];
    
      }

  }

printf("Primeira matriz aleatoria, 5x5, gerada: \n");

  for (ilin = 0; ilin < 5; ilin++)
  {
      for(icol = 0; icol < 5; icol++ ){
            printf(" %d ", m1[ilin][icol]); 
      }
      printf("\n");
  }
printf("\n\n");

  printf("Segunda matriz aleatoria, 5x5, gerada: \n");

  for (ilin = 0; ilin < 5; ilin++)
  {
      for(icol = 0; icol < 5; icol++ ){
            printf(" %d ", m2[ilin][icol]); 
      }
      printf("\n");
  }
 printf("\n\n");

  printf("Soma da primeira com a segunda matriz: \n");

  for (ilin = 0; ilin < 5; ilin++)
  {
      for(icol = 0; icol < 5; icol++ ){
            printf(" %d ", m3[ilin][icol]); 
      }
      printf("\n");
  }
  
}

void exercicio74(){
    /*74. Fa¸ca um programa que preencha uma matriz 6×6 num´erica, com o seguinte formato:
6 5 4 3 2 1
5 4 3 2 1 0
4 3 2 1 0 0
3 2 1 0 0 0
2 1 0 0 0 0
1 0 0 0 0 0
*/
    int m[6][6], ilin, icol, cont=6;
printf("\n Matriz triangular superior: \n");
    for (ilin = 0; ilin < 6; ilin++)
  {
      for(icol = 0; icol < 6; icol++ ){

    m[ilin][icol] = cont-icol;

    if(m[ilin][icol] * -1 > 0){
        m[ilin][icol] = 0;
    }
    printf(" %d ", m[ilin][icol]); 
    
      }
printf("\n");
cont--;
  }
}

void exercicio75(){
    /*75. Fa¸ca um programa para criar uma matriz 9 × 9 usando a mesma l´ogica do exerc´ıcio
anterior. Utilizando a matriz gerada, calcule e mostre:
(a) A soma de todos seus elementos.
(b) A soma dos elementos por linha.
(c) A soma dos elementos da diagonal principal e secund´aria.
*/
int m[9][9], ilin, icol, cont=9, somaall=0, somalin[9] , somadigp=0, somadig2=0;


printf("Matriz ultilizada para os calculos: \n");
    for (ilin = 0; ilin < 9; ilin++)
    {
         for(icol = 0; icol < 9; icol++ ){
       
           m[ilin][icol] = cont-icol;

               if(m[ilin][icol] * -1 > 0){
                    m[ilin][icol] = 0;
              }
         printf(" %d ", m[ilin][icol]); 
    
        }
    printf("\n");
    cont--;
    }

//Zerando / limpando o vetor somalin[9]
for (ilin = 0; ilin < 9; ilin++)
    {somalin[ilin]=0;}

//Realizando todas as somas;
for (ilin = 0; ilin < 9; ilin++)
    {
         for(icol = 0; icol < 9; icol++ ){
             //(A)A soma de todos seus elementos.
        somaall = m[ilin][icol] + somaall;

            //(b) A soma dos elementos por linha.
        somalin[ilin] = m[ilin][icol] + somalin[ilin] ;

            //(c) A soma dos elementos da diagonal principal e secund´aria.
           
        if(ilin == icol){
            somadigp =  m[ilin][icol] + somadigp;
        }
          if ( ilin + icol == 8){
            somadig2 =  m[ilin][icol] + somadig2;
            printf("...");
        }
        }
    }
//PRINTANDO AS SOMAS

printf("\n Resultados: \n"
        "(a) A soma de todos seus elementos:......................... %d \n", somaall);
printf( "(b) A soma dos elementos por linha:.................Linha 1: %d \n"
        "....................................................Linha 2: %d \n"
        "....................................................Linha 3: %d \n"
        "....................................................Linha 4: %d \n"
        "....................................................Linha 5: %d \n"
        "....................................................Linha 6: %d \n"
        "....................................................Linha 7: %d \n"
        "....................................................Linha 8: %d \n"
        "....................................................Linha 9: %d \n", somalin[0], somalin[1], somalin[2], somalin[3], somalin[4], somalin[5], somalin[6], somalin[7], somalin[8]);
printf( "(c) A soma dos elementos da diagonal principal.............: %d \n" 
        "... A soma dos elementos da diagonal secundaria............: %d \n", somadigp, somadig2);

    
}

int main(int argc, char **argv)
{

    int nExercicio = 1;

    do
    {
        printf("Secao 08\n\nDigite o numero do exercicio que deseja executar (69:75) ou 0 para sair para o menu de secoes: ");
        scanf("%d", &nExercicio);

        switch (nExercicio)
        {
        case 0:
            break;
        case 69:
        {
            exercicio69();
            break;
        }
       case 70:
       {
           exercicio70();
           break;
       }
       case 71:
       {
           exercicio71();
           break;
       }
       case 72:
       {
           exercicio72();
           break;
       }
       case 73:
       {
           exercicio73();
           break;
       }
       case 74:
       {
           exercicio74();
           break;
       }
       case 75:
       {
           exercicio75();
           break;
       }
         default:
        {
            printf("Voce escolheu um exercicio invalido.\n");
        }
        }

        printf("\n\n\n");

    } while (nExercicio != 0);
    
return SUCESSO;
}