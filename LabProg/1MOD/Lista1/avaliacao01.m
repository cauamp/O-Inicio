clear; clc;
% Aluno: Cauã Magalhães Pereira
% Turma: 205
% Lista Avaliada 1

aux = 1;
while aux ~=0
    
    aux = menu("Qual questão você deseja exibir?",'Questão 1','Questão 2','Questão 3','Questão 4', 'Fechar Menu');
    
    
    switch aux
        case 1
            % Questão 1
            questao01
            aux = 1;
        case 2
            % Questão 2
            questao02
            aux = 1;
        case 3
            questao03
            aux = 1;
        case 4
            % Questão 4
            questao04
            aux = 1;
        otherwise
            aux = 0;
    end
end