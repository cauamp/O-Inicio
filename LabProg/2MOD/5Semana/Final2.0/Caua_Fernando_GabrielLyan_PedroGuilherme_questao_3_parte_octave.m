% Grupo: Caua Magalhaes, Fernando Alves, Gabriel Lyan e Pedro Guilherme
% Data: 11/10/2021
% Turma: 205
% Questão 03 (Parte Octave)

% Pega o conteudo do .txt e passa para uma matriz
matriz_do_txt = load('dadosQuestao3.txt');

% Pega as colunas da matriz e transfere para dois vetores
x = matriz_do_txt(:, 1);
y = matriz_do_txt(:, 2);

% Plota o grafico com os vetores x e y
figure(1);
plot(x, 'k');
hold on
plot(y, 'r')
title("Grafico dos vetores x e y");
xlabel("Vetor x");
ylabel("Vetor y");
print figure1Questao3.jpg

% Plota as os vetores usando subplot
figure(2);
subplot(211);
plot(x, 'k');
title("Grafico vetor x");
subplot(212);
plot(y, 'r');
title("Grafico vetor y");
print figure2Questao3.jpg

% Obtem a soma e a media dos vetores
soma_vetor_x = sum(x);
soma_vetor_y = sum(y);
media_vetor_x = soma_vetor_x/100;
media_vetor_y = soma_vetor_y/100;

% Printa a media dos dois vetores 
printf("A media aritmetica do vetor x eh: %f e a media do vetor y eh: %f", media_vetor_x, media_vetor_y);