clear
clc

% Alunoi: Cauã Magalhães Pereira 
% Turma: 205
% Exercício 3 da Lista O

a = [1,0,3,0,-5];
b = [1,0,0,-4,0,-9];
c = [1,-3,4];

%A
aux = roots(a);
fprintf("As raizes de x^4 + 3x^2 -5, são:\n");
disp(aux);

%B
aux = roots(b);
fprintf("\n\nAs raizes de x^5 -4x^2 -9, são:\n");
disp(aux);

%C
aux = roots(c);
fprintf("\n\nAs raizes de x^2 -3x +4, são:\n");
disp(aux);