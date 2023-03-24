clear;clc;
fprintf("\n");
% Aluno: Cauã Magalhães Pereira
% Turma: 205
% Lista Avaliada 1 Questão 4

n=0.1;

while n~=floor(n)
    
    n = input("Digite um valor inteiro para n");
end

m = round(((n^2)-1).*rand(n,n) + 1);

soma = sum(m);
soma = sum(soma);
pares = 0;
impares = 0;

for i = 1:size(m)
    for j = 1:size(m')
        if(mod(m(i,j),2)~= 0)
            impares= impares + 1;
            
        else 
            pares= pares+ 1;
        end
    end
end

fprintf("Matriz: \n")
disp(m);
fprintf("A matriz possui %.2f números impares e %.2f números pares\n", impares, pares);
fprintf("A soma de todos elementos da matriz resulta em %.2f", soma);
