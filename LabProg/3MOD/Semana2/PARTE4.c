#include <stdio.h>
#include <string.h>
#define SUCESSO 0

/* define a estrutura */
struct aluno
{
char nome[20];
int idade;
}; //

typedef struct aluno Aluno ;

/* prototipo da funcao */
void FuncaoPassaPorReferencia(Aluno*);

void exercicio13(){

Aluno a1;
Aluno *ptr;
char aux[20];
int idd;

strcpy(a1.nome, "Alberto Aisten");
a1.idade = 18;

ptr = & a1; // ponteiro para a1

printf("\nNome antes de chamar a funcao = %s\n", a1.nome);
printf("Idade antes de chamar a funcao = %d \n", a1.idade);
printf("Nome antes (usando ponteiro) = %s\n", ptr -> nome);
printf("Idade antes (usando ponteiro) = %d \n", ptr -> idade);

printf( "\n------------------------------------------------------------\n\n");
FuncaoPassaPorReferencia(ptr);

strcpy( aux, a1.nome);
idd = a1.idade;
printf("Nome depois de chamar a funcao = %s \n", aux);
printf("Idade depois de chamar a funcao = %d \n", idd);

strcpy(aux, ptr -> nome );
idd = ptr -> idade;
printf("Nome depois (usando ponteiro) = %s\n", aux);
printf("Idade depois (usando ponteiro)= %d\n", idd);

}

void FuncaoPassaPorReferencia(Aluno *p){

strcpy((*p).nome, "Albert Einstein") ; // pode-se usar p -> nome
p -> idade = 50;

}

Aluno FuncaoPassaPorValor(Aluno);

void exercicio14(){

Aluno a1 , a2 ;

strcpy (a1.nome, "Alberto Aisten");
a1 . idade = 18;
printf("Nome de a1 = %s \n", a1.nome);
printf("Idade de a1 = %d \n", a1.idade);
printf("\n------------------------------------------------------------\n\n");
a2 = FuncaoPassaPorValor(a1);
printf("\n------------------------------------------------------------\n\n");
printf("Nome de a2 = %s \n", a2.nome);
printf("Idade de a2 = %d\n\n", a2.idade);

}

Aluno FuncaoPassaPorValor(Aluno aa){

Aluno bb;

printf("Dentro da aluno.nome = %s e idade = %i \n", aa.nome, aa.idade);
strcpy(bb.nome, "Isaac Newton");
bb.idade = 30;

return(bb);
}



int main(int argc, char** argv){
    
	exercicio13();
    exercicio14();
	
	return SUCESSO;
}