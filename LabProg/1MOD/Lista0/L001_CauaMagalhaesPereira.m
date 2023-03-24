clear
clc
% Alunoi: Cauã Magalhães Pereira 
% Turma: 205
% Exercício 1 da Lista O

x = -100:100;

%(a) f(x)= x³
a = x.^3;

%(b) f(x)= 1/x
b = 1./x ;

%(c) f(x)= (x+1)/(x-2)
c = (x+1)./(x-2);

subplot(3,1,1);
plot(x,a);
title("f(x)= x³")

subplot(3,1,2);
plot(x,b);
title("f(x)= 1/x")

subplot(3,1,3);
plot(x,c);
title("f(x)= (x+1)/(x-2)")

