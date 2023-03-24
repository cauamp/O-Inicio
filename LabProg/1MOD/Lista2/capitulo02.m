clear; clc;
% Aluno: Cauã Magalhães Pereira
% Turma: 205
% Lista Avaliada 2 menu Capítulo 2

% (1) Carregue os dois arquivos, cada um em uma matriz (digamos M1 e
% M2). Crie uma  ́unica matriz, concatentando M1 com M2. Chame-a,
% por exemplo, de M.

unzip("corrida.zip");
M1= load('corrida1.dat');
M2= load('corrida2.dat');


M= [M1;M2];
%M = [1 2 2 42 53 90; 60 10 3 4 58 90; 3600 1000 2.3 6 768 120; 7200 2000 -1 41 532 120; 7300 2100 -2 41 532 120;7500 2300 -2 41 532 120];
[aux, aux2]= size(M);
% (3) Informações que o script deve informar
% Registra o tempo total da corrida em segundos
tempoTotal = M(aux,1);
fprintf("O tempo total durante a corrida foi de %.1f segundos \n", tempoTotal);

% Registra a distancia total percorrida na corrida em metroas
distanciaTotal =M(aux,2); 
fprintf("A distância percorrida foi de %.2f metros \n", distanciaTotal);

% Calcula a velocidade média geral durante a corrida
velocidadeMedia= distanciaTotal/(tempoTotal);
fprintf("A velocidade média durante o percurso foi de %.2f ms\n", velocidadeMedia);

% Registra a elevação total durante a corrida
elevacaoTotal= M(aux,5);
fprintf("A elevação foi de %.2f metros\n", elevacaoTotal);

% Registra o total de calorias gastas
caloriasGastas =M(aux,4);
fprintf("O total de calorias gastas foi de %.2f Kcal \n", caloriasGastas);

% Registra o máximo atingido em BPM
maxBPM = max(M(:,6));
fprintf("O pico de batidas cardiácas foi de %.2f BPM \n", maxBPM);

% Registra os instantes em que ocorreram o máximo de BPM
ia=find(M(:, 6)==maxBPM);
fprintf("O pico de batidas cardiácas durou os instantes \n");
disp(ia');

% Calcula o tempo de durração do máximo de BPM em segundos
tempoBPM= M(max(ia),1)- M(min(ia),1);
fprintf("Os batimentos em %.2f BPM durou %.0f segundos \n", maxBPM, tempoBPM);

% Calcula o BPM médio da corrida
BPMmedio= sum(M(:,6))/(aux);
fprintf("A media de batimentos cardiaco foi de %.0f BPM\n", BPMmedio);

% Registra a elevação média, máxima e mínima;
elevacaoMedia= sum(M(:,5))/distanciaTotal;
elevacaoMax= max(M(:,5));
elevacaoMin= min(M(:,5));
fprintf("A elevação media foi de %.2f metros por metros percorridos \n" + ...
    "A elevação máxima foi de %.2f metros \nA elevação mínima foi de %.2f" + ...
    "\n", elevacaoMedia,elevacaoMax, elevacaoMin);


% (4) Gráficos que deve ser plotados
figure("Name",'Capítulo 2 Tópico 4 PARTE 1', "NumberTitle",'off')
% Plota t x d tempo em segundos, distância em metros
subplot(3,1,1)
plot(M(:,1), M(:,2))
title("t x d Tempo em segundos, distância em metros")
xlabel("t(s)")
ylabel("d(m)")
% Plota t x d tempo em horas, distância em metros
subplot(3,1,2)
plot((M(:,1)/3600), M(:,2))
title("t x d Tempo em horas, distância em metros")
xlabel("t(h)")
ylabel("d(m)")
% Plota t x d tempo em horas, distância em KM 
subplot(3,1,3)
plot((M(:,1)/3600), M(:,2)/1000)
title("t x d Tempo em horas, distância em KM")
xlabel("t(h)")
ylabel("d(KM)")
figure("Name",'Capítulo 2 Tópico 4 PARTE 2', "NumberTitle",'off')
% Plota t x v tempo em segundos e velocidade instantânea em m/s
subplot(3,1,1)
plot(M(:,1), M(:,3))
title("t x v Tempo em segundos e velocidade instantânea em m/s")
xlabel("t(s)")
ylabel("v(m/s)")
% Plota t x v tempo em segundos e velocidade instantâanea em Km/s
subplot(3,1,2)
plot((M(:,1)), (M(:,3)/1000))
title("t x v Tempo em segundos e velocidade instantâanea em Km/s", "FontSize",8)
xlabel("t(s)")
ylabel("v(Km/s)")
% Plota t x calorias tempo em segundos e calorias em Kcal
subplot(3,1,3)
plot(M(:,1), M(:,6))
title("t x calorias Tempo em segundos e calorias em Kcal")
xlabel("t(s)")
ylabel("calorias(Kcal)")
% (5)Calcular a velocidade instantânea a partir dos dados do tempo (s) e
% da distância (m). Plote o vetor gerado em funcão do tempo (s). Com-
% pare com a velocidade instantânea dada na coluna 3. Plote as duas
% velocidades (a calculada e a informada na coluna 3) no mesmo gráfico.

velocidadeInstantanea=zeros(aux,1);
for i = 1:aux
    velocidadeInstantanea(i)=M(i,2)/M(i,1);
end
figure("Name",'Capítulo 2 Tópico 5', "NumberTitle","off")
plot(M(:,1), M(:,3),'g','LineWidth', 0.5);

hold on

plot(M(:,1),velocidadeInstantanea, 'r','LineWidth', 2)
title("Velocidades Instantânea");

% (6) Calcular o erro entre as duas velocidades e plote o gráfico desse erro.

erro = (velocidadeInstantanea - M(:,3))./M(:,3);
figure("Name",'Capítulo 2 Tópico 6', "NumberTitle","off")
plot(M(:,1), erro,'r','LineWidth', 2);
title("Erro entre Velocidades Instantânea")

% (7) Criar um vetor de aceleração instantânea 
i=1;
a=zeros(aux,1);
while i<aux-1
    a(i)= (M(i+1,3)- M(i,3))/(M(i+1,1)- M(i,1));
    i=i+1;
end
% (8) Obter os polinômios de ajuste para as relações temporais da 
% distância, velocidade e aceleração.
polAjusteDist= polyfit(M(:,1), M(:,2),1);
polAjusteVel= polyfit(M(:,1), M(:,3),1);
polAjusteAcele= polyfit(M(:,1), a,1);

% (9) Plotar o resultado dos polinômios em função do tempo no 
% mesmo gráfico dos dados reais 
% Plota os gráficos de distância em relação ao tempo
figure("Name",'Capítulo 2 Tópico 9. 1. (t x d)',  "NumberTitle","off")
plot(M(:,1), M(:,2),'g', 'LineWidth', 3)
hold on
plot(M(:,1), polyval(polAjusteDist,M(:,1)),'r')
title("(t x d)");

% Plota os gráficos de velocidade instatânea em relação ao tempo
figure("Name",'Capítulo 2 Tópico 9. 2. (t x v)',  "NumberTitle","off")
plot(M(:,1), M(:,3),'g')
title("(t x v)");
hold on
plot(M(:,1), polyval(polAjusteVel,M(:,1)),'r', 'LineWidth', 2)
% Plota os gráficos de aceleração em relação ao tempo
figure("Name",'Capítulo 2 Tópico 9. 3. (t x a)',  "NumberTitle","off")
plot(M(:,1), a,'g')
hold on
plot(M(:,1), polyval(polAjusteAcele,M(:,1)),'r', 'LineWidth', 2)
title("(t x a)");
clear;