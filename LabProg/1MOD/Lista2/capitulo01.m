clear; clc; close all;
% Aluno: Cauã Magalhães Pereira
% Turma: 205
% Lista Avaliada 2 menu Capítulo 1
opcao =1;

while opcao ~= 5
    opcao= menu("Qual versão do jogo da forca voce deseja rodar?", "Versão 1", "Versão 2", "Versão 3", "Versão 4","Sair");

    switch opcao
        case 1
            versao1
            fprintf("\n")
            opcao =1;
        case 2
            versao2
            fprintf("\n")
            opcao =1;
        case 3
            versao3
            fprintf("\n")
            opcao =1;
        case 4
            versao4
            fprintf("\n")
            opcao =1;
        case 5
            fprintf("Programa finalizado\n Retornando ao menu principal\n")
    end
end