#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define SUCESSO 0
#define TAM_MAX_NOME 50 + 1

//--------------------------------------------------------------------------------------------------------------------------------------

typedef struct
{
    char rua[TAM_MAX_NOME];
    char bairro[TAM_MAX_NOME];
    char cidade[TAM_MAX_NOME];
    char sigla_estado[TAM_MAX_NOME]; //4 SERAO UTLIZADOS
    char cep[TAM_MAX_NOME];          //10 SERAO UTLIZADOS
    char numero[TAM_MAX_NOME];
} endereco;

struct ficha_aluno
{
    char nome[TAM_MAX_NOME];
    char nome_pai[TAM_MAX_NOME];
    char nome_mae[TAM_MAX_NOME];
    char escola_anterior[TAM_MAX_NOME];
    char serie[TAM_MAX_NOME];
    char nascimento[TAM_MAX_NOME];
    char cpf[TAM_MAX_NOME];       //13 SERAO UTLIZADOS
    char matricula[TAM_MAX_NOME]; //12 SERAO UTLIZADOS
    endereco endereco_A1;

} a1;

struct numero_complexo
{
    float real;
    float imaginario;
} n1, n2;

typedef struct PontoExercicio3
{
    int x, y;
} Ponto;

//--------------------------------------------------------------------------------------------------------------------------------------
void limpabuffer()
{
    setbuf(stdin, NULL);
}

void le_dados_aluno()
{
    printf("Entrada de dados aluno: \n\n");

    // dados aluno
    printf("Digite o nome do Aluno: ");
    fgets(a1.nome, TAM_MAX_NOME, stdin);
    limpabuffer();

    printf("Digite o nome da Mae do Aluno: ");
    fgets(a1.nome_mae, TAM_MAX_NOME, stdin);
    limpabuffer();

    printf("Digite o nome do Pai do Aluno: ");
    fgets(a1.nome_pai, TAM_MAX_NOME, stdin);
    limpabuffer();

    do
    {
        printf("Digite a data de nascimento do aluno (ex: 22 07 2002): ");
        fgets(a1.nascimento, TAM_MAX_NOME, stdin);
        limpabuffer();

        if (a1.nascimento[2] != ' ' || a1.nascimento[5] != ' ')
        {
            printf("\nDigite a data com espacos\n");
        }

    } while (a1.nascimento[2] != ' ' || a1.nascimento[5] != ' ');

    a1.nascimento[10] = '\n';
    a1.nascimento[11] = '\0';
    limpabuffer();

    printf("Digite o numero de matricula do aluno: ");
    fgets(a1.matricula, TAM_MAX_NOME, stdin);

    a1.matricula[10] = '\n';
    a1.matricula[11] = '\0';

    limpabuffer();

    printf("Digite o CPF do aluno (so numeros): ");
    fgets(a1.cpf, TAM_MAX_NOME, stdin);

    a1.cpf[11] = '\n';
    a1.cpf[12] = '\0';

    limpabuffer();

    printf("Digite a serie que o Aluno esta: ");
    fgets(a1.serie, TAM_MAX_NOME, stdin);
    limpabuffer();

    printf("Digite o nome da escola anterior do Aluno: ");
    fgets(a1.escola_anterior, TAM_MAX_NOME, stdin);
    limpabuffer();

    printf("\n\nEndereco: \n\n");
    // endereço

    printf("Digite o nome da Rua do Aluno: ");
    fgets(a1.endereco_A1.rua, 50, stdin);
    limpabuffer();

    printf("Digite o numero da rua: ");
    fgets(a1.endereco_A1.numero, TAM_MAX_NOME, stdin);
    limpabuffer();

    printf("Digite o nome do bairro do Aluno: ");
    fgets(a1.endereco_A1.bairro, TAM_MAX_NOME, stdin);
    limpabuffer();

    printf("Digite o nome da Cidade do Aluno: ");
    fgets(a1.endereco_A1.cidade, TAM_MAX_NOME, stdin);
    limpabuffer();

    printf("Digite a sigla do estado do Aluno: ");
    fgets(a1.endereco_A1.sigla_estado, TAM_MAX_NOME, stdin);
    a1.endereco_A1.sigla_estado[2] = '\n';
    a1.endereco_A1.sigla_estado[3] = '\0';
    limpabuffer();

    printf("Digite o numero do CEP do aluno: ");
    fgets(a1.endereco_A1.cep, TAM_MAX_NOME, stdin);
    a1.endereco_A1.cep[8] = '\n';
    a1.endereco_A1.cep[9] = '\0';

    limpabuffer();
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
    printf("Numero da Rua: %s", a1.endereco_A1.numero);
    printf("Bairro: %s", a1.endereco_A1.bairro);
    printf("Nome da cidade: %s", a1.endereco_A1.cidade);
    printf("Sigla do Estado: %s", a1.endereco_A1.sigla_estado);
    printf("CEP: %s", a1.endereco_A1.cep);
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

    printf("A soma dos numeros complexos %.0f +%.0fi e %.0f +%.0fi eh %.0f +%.0fi", n1.real, n1.imaginario, n2.real, n2.imaginario, soma_real, soma_imaginaria);
    printf("\n\n");
}

void multiplicacao_numero_complexo()
{
    float multi_real = ((n1.real * n2.real) - (n1.imaginario * n2.imaginario));
    float multi_imaginario = ((n1.real * n2.imaginario) + (n1.imaginario * n2.real));

    printf("A multiplicacao dos numeros complexos %.0f +%.0fi e %.0f +%.0fi eh %.0f +%.0fi", n1.real, n1.imaginario, n2.real, n2.imaginario, multi_real, multi_imaginario);
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

    printf("O modulo do numero complexo %.0f +%.0fi eh: %.2f", n1.real, n1.imaginario, z1);
    printf("\nO modulo do numero complexo %.0f +%.0fi eh: %.2f", n2.real, n2.imaginario, z2);
    printf("\n\n");
}

Ponto lePonto(Ponto a)
{

    printf("Digite a coordernada x do ponto  ");
    scanf("%d", &(a.x));

    printf("Digite a coordernada y do ponto  ");
    scanf("%d", &(a.y));

    return (a);
}

void CalculaDistanciaEntrePontosePrinta(Ponto a, Ponto b)
{

    // A distancia (dt) sera calculada com base em uma linha reta entre os pontos, essa que é uma hipotenusa do triangulo formado pelos catetos da distancia no plano x (dx) e a distancia no plano y (dy)
    int dx, dy;
    float dt;

    if ((a.x) > (b.x))
    {
        dx = a.x - b.x;
    }
    else
    {
        dx = b.x - a.x;
    }

    if ((a.y) > (b.y))
    {
        dy = a.y - b.y;
    }
    else
    {
        dy = b.y - a.y;
    }

    dt = (float)sqrt((pow(dx, 2)) + (pow(dy, 2)));

    printf("Distancia entre a e b eh = %.2f", dt);
}

float *alocaVetoresfloat(int tamanhoVetor)
{
    float *v2;

    v2 = (float *)(malloc(tamanhoVetor * sizeof(float)));
    return v2;
}

float modulo(float *v, int tam)
{
    int i;
    float soma;

    for (i = 0; i < tam; i++)
    {
        soma = (float)(pow(v[i], 2)) + soma;
    }

    soma = (float)sqrt(soma);

    return (soma);
}

float *adicao(float *v, float *u, int tam)
{
    float *soma;
    int i;

    soma = alocaVetoresfloat(tam);

    //realiza a soma
    for (i = 0; i < tam; i++)
    {
        soma[i] = v[i] + u[i];
    };

    return (soma);
}

float produto_escalar(float *v, float *u, int tam)
{
    int i;
    float produto_final = 0.0;
    float *prod;

    prod = alocaVetoresfloat(tam);

    //multiplicação
    for (i = 0; i < tam; i++)
    {
        prod[i] = v[i] * u[i];
    }
    //somatorio
    for (i = 0; i < tam; i++)
    {
        produto_final = produto_final + prod[i];
    }

    free(prod);
    return (produto_final);
}

int **AlocaMatrizInt(int NumLinhas, int NumColunas)
{
    int **matriz;
    int i;

    matriz = (int **)(malloc(NumLinhas * sizeof(int *)));

    for (i = 0; i < NumLinhas; i++)
    {

        matriz[i] = (int *)(malloc(NumColunas * sizeof(int)));
    }
    return matriz;
}

void PreencheMatrizComRandon(int **matriz, int nLinhas, int nColunas)
{

    int i, j;

    for (i = 0; i < nLinhas; i++)
    {
        for (j = 0; j < nColunas; j++)
        {
            matriz[i][j] = rand() % 100;
        }
    }
}

void ImprimeMatriz(int **matriz, int nLinhas, int nColunas)
{

    int i, j;
    for (i = 0; i < nLinhas; i++)
    {
        for (j = 0; j < nColunas; j++)
        {
            printf("%.3d  ", matriz[i][j] + 0);
        }
        printf("\n");
    }
    printf("\n");
}

void SomaDasMatrizes(int **matriz1, int **matriz2, int **matriz3, int tamanhoDAmatriz)
{

    int i, j;

    for (i = 0; i < tamanhoDAmatriz; i++)
    {
        {
            for (j = 0; j < tamanhoDAmatriz; j++)
                matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void MultiplicacaoDasMatrizes(int **matriz1, int **matriz2, int **matriz3, int nLinhas1, int nLinhas2, int nColunas)
{

    int i, j, k;
    float aux;

    for (i = 0; i < nLinhas1; i++)
    {

        for (j = 0; j < nColunas; j++)
        {
            for (k = 0; k < nLinhas2; k++)
            {
                aux += matriz1[i][k] * matriz2[k][j];
            }

            matriz3[i][j] = aux;
            aux = 0;
        }
    }
}

void MatrizTransposta(int **matriz, int **matriz_transposta, int nLinhas, int nColunas)
{

    int i, j;

    for (i = 0; i < nLinhas; i++)
    {

        for (j = 0; j < nColunas; j++)
        {

            matriz_transposta[j][i] = matriz[i][j];
        }
    }
}

void DetMatriz(int **matriz, int nLinhas)
{

    int i = 0, j = 0, k = 0;
    double fat = 0;
    double aux = 0;
    int contador = 0;

    for (i = 0; i < nLinhas - 1; i++)
    {
        if (matriz[i][i] == 0)
        {
            for (k = i; k < nLinhas; k++)
            {
                if (matriz[k][i] != 0)
                {
                    for (j = 0; j < nLinhas; j++)
                    {
                        aux = matriz[i][j];
                        matriz[i][j] = matriz[k][j];
                        matriz[k][j] = aux;
                    }
                    k = nLinhas;
                }
            }
            contador++;
        }

        if (matriz[i][i] != 0)
        {
            for (k = i + 1; k < nLinhas; k++)
            {
                fat = -1.0 * matriz[k][i] / matriz[i][i];
                for (j = i; j < nLinhas; j++)
                {
                    matriz[k][j] = matriz[k][j] + (fat * matriz[i][j]);
                }
            }
        }
    }
    aux = 1.0;

    for (i = 0; i < nLinhas; i++)
    {
        aux *= matriz[i][i];
    }

    printf("\nDeterminante da matriz: ");
    if (contador % 2 == 0)
    {
        printf("%8.3f \n", aux);
    }
    else
    {
        printf("%8.3f \n", -1.0 * aux);
    }
}

void FreeMatriz(int **matriz, int nLinhas)
{

    int i;

    for (i = 0; i < nLinhas; i++)
    {

        free(matriz[i]);
    }

    free(matriz);
}

//--------------------------------------------------------------------------------------------------------------------------------------
void exercicio01()
{
    le_dados_aluno();
    system("cls");
    limpabuffer();
    printf("\nExercicio 1:\n\n");
    imprime_dados_aluno(a1);
    printf("\n");
}

void exercicio02()
{
    le_numeros_complexos();
    system("cls");
    printf("\nExercicio 2:\n\n");
    soma_numero_complexo();
    multiplicacao_numero_complexo();
    modulo_numero_complexo();
    printf("\n");
}

void exercicio03()
{
    Ponto a, b;
    printf("Ponto a:\n");
    a = lePonto(a);
    printf("\n\nPonto b:\n");
    b = lePonto(b);
    printf("a = [%d,%d]\nb = [%d,%d]\n", a.x, a.y, b.x, b.y);

    CalculaDistanciaEntrePontosePrinta(a, b);
}

void exercicio04()
{

    int exercicio = 1, funcao = 1, tam = 1, i;
    float produto, modv, modu;
    float *v, *u, *soma;
    /*Pirmeiro "do" para posibilitar o usuario preencher os vetores varias vezes,
atraves da opcao 5 do menu*/
    do
    {
        /*Recebe o tamanho dos vetores, enquanto o tamanho 
      digitado não estiver entre 1 e 10*/
        do
        {
            printf("\nDigite o tamanho, entre 1 e 10, dos vetores v e u: ");
            scanf("%d", &tam);
            if (tam < 1 || tam > 10)
            {
                printf("Digite um valor entre 1 e 10!");
            };

        } while (tam < 1 || tam > 10);
        system("cls");

        /*Aloca os vetores*/
        v = alocaVetoresfloat(tam);
        u = alocaVetoresfloat(tam);

        /*Preenche os vetores com zeros*/
        for (i = 0; i < tam; i++)
        {
            u[i] = 0;
        }
        for (i = 0; i < tam; i++)
        {
            v[i] = 0;
        }

        /*recebe os valores de cada posicao dos vetores*/
        printf("\nDigite os %d valores inteiros do vetor v.\n", tam);
        getchar();

        for (i = 0; i < tam; i++)
        {
            printf(" %d valor: ", i + 1);
            scanf(" %f", &v[i]);
            getchar();
        }

        printf("\nDigite os %d valores inteiros do vetor u.\n", tam);

        for (i = 0; i < tam; i++)
        {
            printf(" %d valor: ", i + 1);
            scanf(" %f", &u[i]);
            getchar();
        }

        /*Exibe os vetores preenchidos para o usuario conferir*/
        printf("\nv: \n");

        for (i = 0; i < tam; i++)
        {
            printf(" %.2f", v[i]);
        }

        printf("\nu:  \n");

        for (i = 0; i < tam; i++)
        {
            printf(" %.2f", u[i]);
        }

        //Menu principal do exercicio 5
        do
        {
            printf("\n\nDigite o numero da funcao que deseja executar: \n"
                   "(1) - Modulo do PRIMEIRO vetor (v). \n"
                   "(2) - Modulo do SEGUNDO vetor (u). \n"
                   "(3) - Produto escalar (u . v). \n"
                   "(4) - Adicao (u + v). \n"
                   "(5) - Reescrever os vetores. \n"
                   "(0) - Sair. \n"
                   "Opcao:  ");
            scanf("%d", &funcao);
            printf("\n\n\n");
            system("cls");
            switch (funcao)
            {
            case 0:
                printf("\n\nVoltando ao menu principal.");
                exercicio = 0;
                break;

            case 1:
            {
                modv = modulo(v, tam);
                printf("\nv: \n");

                for (i = 0; i < tam; i++)
                {
                    printf(" %.2f", v[i]);
                }

                printf("\nO modulo do vetor v eh: %.2f", modv);

                break;
            }
            case 2:
            {
                modu = modulo(u, tam);

                printf("\n\nu:  \n");

                for (i = 0; i < tam; i++)
                {

                    printf(" %.2f", u[i]);
                }

                printf("\nO modulo do vetor u eh: %.2f", modu);
                break;
            }
            case 3:
            {
                produto = produto_escalar(v, u, tam);

                //print dos vetores e o resultado da operação
                printf("\nv: \n");

                for (i = 0; i < tam; i++)
                {

                    printf(" %.2f", v[i]);
                }

                printf("\n\nu:  \n");

                for (i = 0; i < tam; i++)
                {

                    printf(" %.2f", u[i]);
                }

                printf("\n\nO produto escalar entre os vetores v e u eh: %.2f", produto);

                break;
            }
            case 4:
            {
                soma = adicao(v, u, tam);

                //print dos vetores e o resultado da operação
                printf("\nv: \n");

                for (i = 0; i < tam; i++)
                {

                    printf(" %.2f", v[i]);
                }

                printf("\n\nu:  \n");

                for (i = 0; i < tam; i++)
                {

                    printf(" %.2f", u[i]);
                }

                printf("\n\nResultado da adicao dos vetores v e u:  \n");
                for (i = 0; i < tam; i++)
                {

                    printf(" %.2f", soma[i]);
                }

                break;
            }
            case 5:
            {
                funcao = 0;
                break;
            }
            default:
            {
                printf("Voce escolheu um exercicio invalido.\n");
            }
            }

            printf("\n\n\n");

        } while (funcao != 0);
    } while (exercicio != 0);
    free(soma);
    free(v);
    free(u);
}

void exercicio05()
{
    int n1, n2, m1, m2, **M1, **M2, operacao = 1, **Matriz_com_soma, **Matriz_produto, **Matriz_transposta;
    //n == linhas
    //m == colunas
    do
    {
        printf("Digite o valor de n1 (2:4): ");
        scanf("%d", &n1);

        if (n1 < 2 || n1 > 4)
        {
            printf("VALOR INVALIDO!\n\n");
        }

    } while (n1 < 2 || n1 > 4);

    do
    {
        printf("Digite o valor de m1 (2:4): ");
        scanf("%d", &m1);

        if (m1 < 2 || m1 > 4)
        {
            printf("VALOR INVALIDO!\n\n");
        }

    } while (m1 < 2 || m1 > 4);

    do
    {
        printf("Digite o valor de n2 (2:4): ");
        scanf("%d", &n2);

        if (n2 < 2 || n2 > 4)
        {
            printf("VALOR INVALIDO!\n\n");
        }

    } while (n2 < 2 || n2 > 4);

    do
    {
        printf("Digite o valor de m2 (2:4): ");
        scanf("%d", &m2);

        if (m2 < 2 || m2 > 4)
        {
            printf("VALOR INVALIDO!\n\n");
        }

    } while (m2 < 2 || m2 > 4);

    M1 = AlocaMatrizInt(n1, m1);
    M2 = AlocaMatrizInt(n2, m2);

    PreencheMatrizComRandon(M1, n1, m1);
    PreencheMatrizComRandon(M2, n2, m2);

    do
    {
        setbuf(stdin, NULL);
        printf("\n---------------------------------------------MENU---------------------------------------------\n\n");
        printf("Digite o numero da operacao que deseja executar:\n(1) M1 + M2\n(2) M1 * M2\n(3) M2 * M1\n(4) M2^T\n(5) M1^T\n(6) det(M1)\n(7) det(M2)\n(0) Sair\n\n");
        scanf("%d", &operacao);
        printf("\n\n");
        system("cls");
        printf("\nOperacao %d:\n", operacao);
        switch (operacao)
        {
        case 0:
        {
            system("cls");
            printf("\n\nVoltando ao menu principal.");
            break;
        }
        case 1:

            printf("\nMatriz M1: \n");
            ImprimeMatriz(M1, n1, m1);
            printf("Matriz M2: \n");
            ImprimeMatriz(M2, n2, m2);

            if (n1 == n2 && m1 == m2 && n1 == m1 && n2 == m2)
            {

                Matriz_com_soma = AlocaMatrizInt(n1, m1);
                SomaDasMatrizes(M1, M2, Matriz_com_soma, n1);
                printf("A soma da Matriz M1 com a Matriz M2 eh:\n");
                ImprimeMatriz(Matriz_com_soma, n1, m1);
            }
            else
            {

                printf("\nAs matrizes digitadas nao sao quadradas! Impossivel realizar a soma.\n");
                break;
            }
            FreeMatriz(Matriz_com_soma, n1);
            break;
        case 2:
        {
            printf("\nMatriz M1: \n");
            ImprimeMatriz(M1, n1, m1);
            printf("Matriz M2: \n");
            ImprimeMatriz(M2, n2, m2);

            if (m1 == n2)
            {

                Matriz_produto = AlocaMatrizInt(n1, m2);
                MultiplicacaoDasMatrizes(M1, M2, Matriz_produto, n1, n2, m2);
                printf("O produto de M1 com M2 eh:\n");
                ImprimeMatriz(Matriz_produto, n1, m2);
                FreeMatriz(Matriz_produto, n1);
            }
            else
            {

                printf("\nAs matrizes digitadas nao podem ser multiplicadas uma pela outra.\n");
                break;
            }
            break;
        }
        case 3:
        {
            printf("\nMatriz M1: \n");
            ImprimeMatriz(M1, n1, m1);
            printf("Matriz M2: \n");
            ImprimeMatriz(M2, n2, m2);

            if (m2 == n1)
            {

                Matriz_produto = AlocaMatrizInt(n2, m1);
                MultiplicacaoDasMatrizes(M2, M1, Matriz_produto, n2, n1, m1);
                printf("O produto de M2 com M1 eh:\n");
                ImprimeMatriz(Matriz_produto, n2, m1);
                FreeMatriz(Matriz_produto, n2);
            }
            else
            {

                printf("\nAs matrizes digitadas nao podem ser multiplicadas uma pela outra.\n");
                break;
            }
            break;
        }
        case 4:
        {
            printf("\nMatriz M2:\n\n");
            ImprimeMatriz(M2, n2, m2);
            Matriz_transposta = AlocaMatrizInt(m2, n2);
            MatrizTransposta(M2, Matriz_transposta, n2, m2);
            printf("Matriz M2 transposta:\n\n");
            ImprimeMatriz(Matriz_transposta, m2, n2);
            FreeMatriz(Matriz_transposta, m2);
            break;
        }
        case 5:
        {
            printf("\nMatriz M1:\n\n");
            ImprimeMatriz(M1, n1, m1);
            Matriz_transposta = AlocaMatrizInt(m1, n1);
            MatrizTransposta(M1, Matriz_transposta, n1, m1);
            printf("Matriz M1 transposta:\n\n");
            ImprimeMatriz(Matriz_transposta, m1, n1);
            FreeMatriz(Matriz_transposta, m1);
            break;
        }
        case 6:
        {
            printf("\nMatriz M1: \n");
            ImprimeMatriz(M1, n1, m1);
            if (n1 == m1)
            {

                DetMatriz(M1, n1);
            }
            else
            {

                printf("\nA matriz digitada nao eh quadrada! Impossivel obter o determinante.\n");
                break;
            }
            break;
        }
        case 7:
        {

            printf("\nMatriz M2: \n");
            ImprimeMatriz(M2, n2, m2);
            if (n2 == m2)
            {

                DetMatriz(M2, n2);
            }
            else
            {

                printf("\nA matriz digitada nao eh quadrada! Impossivel obter o determinante.\n");
                break;
            }
            break;
        }
        default:
        {
            printf("Voce escolheu uma operacao invalida.\n");
        }
        }

        printf("\n\n----------------------------------------------------------------------------------------------\n\n\n\n\n");

    } while (operacao != 0);

    FreeMatriz(M1, n1);
    FreeMatriz(M2, n2);
}

//--------------------------------------------------------------------------------------------------------------------------------------
int main(int argc, char **argv)
{
    srand(time(NULL));
    int nExercicio = 1;

    printf("TURMA 205\nGRUPO CFGP:\n    Caua Magalhaes Pereira;\n    Fernando Alves de Freitas;\n    Gabriel Lyan Barbosa de Assis;\n    Pedro Guilherme Andrade Salgado.\n\n");
    do
    {
        limpabuffer();
        printf("---------------------------------------------MENU---------------------------------------------\n");
        printf("Digite o numero do exercicio que deseja executar [1:5] ou 0 para sair:\n");
        scanf("%d", &nExercicio);
        printf("\n\n");
        system("cls");
        printf("\nExercicio %d:\n\n", nExercicio);
        limpabuffer();
        switch (nExercicio)
        {
        case 0:
            printf("\n\nPrograma Encerrado.");
            break;
        case 1:
        {
            exercicio01();
            break;
        }
        case 2:
        {
            exercicio02();
            break;
        }
        case 3:
        {
            exercicio03();
            break;
        }
        case 4:
        {
            exercicio04();
            break;
        }
        case 5:
        {
            exercicio05();
            break;
        }
        default:
        {
            printf("Voce escolheu um exercicio invalido.\n");
        }
        }

        printf("\n\n----------------------------------------------------------------------------------------------\n\n\n\n\n");

    } while (nExercicio != 0);

    return SUCESSO;
}