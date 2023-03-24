clear
clc

% Alunoi: Cauã Magalhães Pereira 
% Turma: 205
% Exercício 4 da Lista O

%Plotando os pontos:

x= -10:1:10;
figure('name',"Exercicio 4 Lista 0", "NumberTitle",'off');
plot(-2,4,'rx', 'linewidth', 2);
hold on
plot(x,x,'rx', 'linewidth', 2);
hold on
plot(20,20,'rx', 'linewidth', 2);
grid
hold on

%Plotando as linhas

aux = [-2, -10, 20,-2,20];
aux2 = [4,-10,20,4,20];
plot(aux,aux2,'b');
hold on


