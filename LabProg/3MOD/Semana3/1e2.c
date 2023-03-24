#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SUCESSO 0
#define TAM_MAX_NOME 50
#define TAM_MATRICULA 11 // considerando o tamanho do numero de matrícula do COLTEC
#define TAM_ESCOLA_ANTERIOR 50
#define typeof(var) _Generic( (var)
/* ----------------------------- structs ----------------------------- */

typedef struct
{
  char rua[50];
  char bairro[30];
  char cidade[30];
  char sigla_estado[3];
  char cep[9];
  int numero;
} endereco;

struct ficha_aluno
{
  char nome[TAM_MAX_NOME];
  char nome_pai[TAM_MAX_NOME];
  char nome_mae[TAM_MAX_NOME];
  char escola_anterior[TAM_ESCOLA_ANTERIOR];
  char serie[20];
  char nascimento[12];
  char cpf[12];
  char matricula[TAM_MATRICULA];
  endereco endereco_A1;

} a1;

struct numero_complexo
{
  float real;
  float imaginario;
} n1, n2;

/* ----------------------------- funções ----------------------------- */

void le_dados_aluno()
{
  printf("Entrada de dados aluno: \n\n");

  // dados aluno
  printf("Digite o nome do Aluno: ");
  fflush(stdin); // limpa buffer
  fgets(a1.nome, TAM_MAX_NOME, stdin);
  fflush(stdin);
  printf("Digite o nome da Mae do Aluno: ");
  fgets(a1.nome_mae, TAM_MAX_NOME, stdin);
  fflush(stdin);
  printf("Digite o nome do Pai do Aluno: ");
  fgets(a1.nome_pai, TAM_MAX_NOME, stdin);
  fflush(stdin);
  printf("Digite a data de nascimento do aluno (ex: 22 07 2002): ");
  fgets(a1.nascimento, 12, stdin);
  fflush(stdin);
  printf("Digite o numero de matricula do aluno: ");
  fgets(a1.matricula, 111, stdin);
  fflush(stdin);
  printf("Digite o CPF do aluno (so numeros): ");
  fgets(a1.cpf, 12, stdin);
  fflush(stdin);
  printf("Digite a serie que o Aluno esta: ");
  fgets(a1.serie, 20, stdin);
  fflush(stdin);
  printf("Digite o nome da escola anterior do Aluno: ");
  fgets(a1.escola_anterior, TAM_ESCOLA_ANTERIOR, stdin);
  fflush(stdin);

  printf("\n\nEndereco: \n\n");
  // endereço

  printf("Digite o nome da Rua do Aluno: ");
  fgets(a1.endereco_A1.rua, 50, stdin);
  fflush(stdin);
  printf("Digite o numero da rua: ");
  scanf("%d", &a1.endereco_A1.numero);
  fflush(stdin);
  printf("Digite o nome do bairro do Aluno: ");
  fgets(a1.endereco_A1.bairro, 30, stdin);
  fflush(stdin);
  printf("Digite o nome da Cidade do Aluno: ");
  fgets(a1.endereco_A1.cidade, 30, stdin);
  fflush(stdin);
  printf("Digite a sigla do estado do Aluno: ");
  fgets(a1.endereco_A1.sigla_estado, 3, stdin);
  fflush(stdin);
  printf("Digite o numero do CEP do aluno: ");
  fgets(a1.endereco_A1.cep, 9, stdin);
  setbuf(stdin, NULL);
}

void imprime_dados_aluno(struct ficha_aluno a1)
{
  printf("\nNome do Aluno: %s", a1.nome);
  printf("Nome da Mae do ALuno: %s", a1.nome_mae);
  printf("Nome do Pai do ALuno: %s", a1.nome_pai);
  printf("Data de Nascimento do Aluno: %s", a1.nascimento);
  printf("Numero de matricula do Aluno: %s", a1.matricula);
  printf("CPF do aluno: %s\n", a1.cpf);
  printf("Serie do Aluno: %s", a1.serie);
  printf("Escola anterior do Aluno: %s", a1.escola_anterior);
  printf("\n\nEndereco do Aluno:\n\n");
  printf("Nome da Rua: %s", a1.endereco_A1.rua);
  printf("Numero da Rua: %d\n", a1.endereco_A1.numero);
  printf("Bairro: %s", a1.endereco_A1.bairro);
  printf("Nome da Rua: %s", a1.endereco_A1.cidade);
  printf("Sigla do Estado: %s", a1.endereco_A1.sigla_estado);
  printf("CEP: %s\n", a1.endereco_A1.cep);
}

void le_numeros_complexos()
{
  // numero1
  printf("\nDigite a parte real do numero complexo 1: ");
  scanf("%f", &n1.real);
  printf("\nDigite a parte imaginaria do numero complexo 1: ");
  scanf("%f", &n1.imaginario);

  // numero 2
  printf("\nDigite a parte real do numero complexo 2: ");
  scanf("%f", &n2.real);
  printf("\nDigite a parte imaginaria do numero complexo 2: ");
  scanf("%f", &n2.imaginario);
}

void soma_numero_complexo()
{
  float soma_real = n1.real + n2.real;
  float soma_imaginaria = n1.imaginario + n2.imaginario;

  printf("A soma dos numeros complexos %.0f+%.0fi e %.0f+%.0fi eh %.0f+%.0fi", n1.real, n1.imaginario, n2.real, n2.imaginario, soma_real, soma_imaginaria);
  printf("\n\n");
}

void multiplicacao_numero_complexo()
{
  float multi_real = ((n1.real * n2.real) - (n1.imaginario * n2.imaginario));
  float multi_imaginario = ((n1.real * n2.imaginario) + (n1.imaginario * n2.real));

  printf("A multiplicacao dos numeros complexos %.0f+%.0fi e %.0f+%.0fi eh %.0f+%.0fi", n1.real, n1.imaginario, n2.real, n2.imaginario, multi_real, multi_imaginario);
  printf("\n\n");
}

void modulo_numero_complexo()
{
  float z1 = sqrt(pow(n1.real, 2) + pow(n1.imaginario, 2));
  float z2 = sqrt(pow(n2.real, 2) + pow(n2.imaginario, 2));

  if (z1 < 0)
  {
    z1 = z1 * -1;
  }
  if (z2 < 0)
  {
    z2 = z2 * -1;
  }

  printf("\nO modulo do numero complexo %.0f+%.0fi eh: %.2f", n1.real, n1.imaginario, z1);
  printf("\nO modulo do numero complexo %.0f+%.0fi eh: %.2f", n2.real, n2.imaginario, z2);
  printf("\n\n");
}

void exercicio01()
{
  le_dados_aluno();
  system("cls");
  imprime_dados_aluno(a1);
  printf("\n");
}

void exercicio02()
{
  le_numeros_complexos();
  system("cls");
  soma_numero_complexo();
  multiplicacao_numero_complexo();
  modulo_numero_complexo();
  printf("\n");
}
/* ----------------------------- main ----------------------------- */

int main(int argc, char **argv)
{

  int questao = 3;

  do
  {

    printf("(0) para SAIR \n(1) para QUESTAO 1 \n(2) para QUESTAO 2\n");
    scanf("%d", &questao);
    switch (questao)
    {
    case 0:
      printf("Voce saiu!");
      break;
    case 1:
      exercicio01();
      break;
    case 2:
      exercicio02();
      break;
    default:
      printf("questao inexistente!\n");
      break;
    }

  } while (questao != 0);

  return SUCESSO;
}