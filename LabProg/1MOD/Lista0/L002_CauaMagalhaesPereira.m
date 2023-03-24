clear
clc

% Alunoi: Cauã Magalhães Pereira 
% Turma: 205
% Exercício 2 da Lista O

x= -10:100;

% f(x)= log10(x)
a= log10(x);

% f(x)= sqrt(x-5)
b = sqrt(x-5);

% f(X) = e^(-x^2)
c = exp(1).^(-x.^2);

figure(1)
plot(x,a);
title("A")
xlabel("x")
ylabel("log10(x)")

figure(2)
plot(x,b);
title("B")
xlabel("x")
ylabel("√(x-5)")

figure(3)
plot(x,c);
title("C")
xlabel("x")
ylabel("e ^ -x^2")