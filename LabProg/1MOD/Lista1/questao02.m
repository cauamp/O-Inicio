clear;clc;
fprintf("\n");
% Aluno: Cauã Magalhães Pereira
% Turma: 205
% Lista Avaliada 1 Questão 2

K = input("Insira um valor para K");
a = input("Insira um valor para a");
b = input("Insira um valor para b");
x= -10:10;

r1 = K*(1+zeros(size(x)));

r2=a*x+b;

aux = (K-b)/a;

figure("Name", "Questão 2", "NumberTitle","off")

plot(aux, K, "kx", 'MarkerSize',10)
hold on
plot(x,r1,'r');
grid
hold on
plot(x, r2,'b')

title("Interseção de duas retas")
xlabel('x')
ylabel('y')
