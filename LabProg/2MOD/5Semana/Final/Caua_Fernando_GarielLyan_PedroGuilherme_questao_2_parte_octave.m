% Grupo: Cauã Magalhães, Fernando Alves, Gabriel Lyan e Pedro Guilherme
% Data: 11/10/2021
% Turma: 205
% Questão 02 (Parte Octave)

% Pega o conteudo do .txt e passa para uma matriz
matriz_do_txt = load('acumulador.txt');

% Pega as colunas da matriz e transfere para dois vetores
x = matriz_do_txt(:, 1);

% Plota o grafico com os vetores x e y
figure(1);
plot(x, 'g');
hold on
title("Grafico do acumulador");
xlabel("nTermo");
ylabel("y");
print figure1Questao2.jpg
