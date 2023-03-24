
clear; clc;
% Aluno: Cauã Magalhães Pereira
% Turma: 205
% Lista Avaliada 2 Menu Principal

opcao=1;

while opcao~=3
opcao=menu("Qual capítulo você deseja rodar ?", "     Capítulo 1     ", "     Capítulo 2     ", "     Sair     ");

    switch opcao
        case 1
            capitulo01
            opcao =1;
        case 2
            capitulo02
            opcao =1;
        case 3
            fprintf("O programa será finalizado");
            close all;
            
    end
end