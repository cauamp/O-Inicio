clear; clc;
fprintf("\n");
% Aluno: Cauã Magalhães Pereira
% Turma: 205
% Lista Avaliada 1 Questão 1

A = input("\nInsira o valor de A");
B= input("Insira o valor de B");
a= input("Insira o valor de a");
b = input("\nInsira o valor de b");
delta = input("\nInsira o valor de delta");
gamma = input("\nInsira o valor de gamma");
aux1 = input("\nInsira o valor de t0");
aux2 = input("\nInsira o valor de 'Delta't");
aux3 = input("\nInsira o valor de tf");
t = aux1:aux2:aux3;

x = A*sin(a*t+delta);
y = B*sin(b*t+gamma);

figure("Name","Questão 1 Parte 1","Numbertitle", "off")
plot(x,y,"LineWidth",2)
title("Figura x(t) X y(t)")
xlabel("x");
ylabel("y");


figure("Name","Questão 1 Parte 2", "Numbertitle", "off")
subplot(2,1,1)
plot(t,x,"LineWidth",2)
title("Figura t X x(t)")
xlabel("t");
ylabel("x");

subplot(2,1,2)
plot(t,y,"LineWidth",2)
title("Figura t X y(t)")
xlabel("t");
ylabel("y");
