clear; clc;
fprintf("\n");
% Aluno: Cauã Magalhães Pereira
% Turma: 205
% Lista Avaliada 2 
% Jogo da Forca versão 3
play = 1;
rodada=1;
vitorias=0;
nome='NomePadraoDoJogador';

while length(nome)>10
    clc;
    nome=input("Insira seu nome\n(Limite de 10 digitos)\n", 's');
end
nome = upper(nome);

% Repete o jogo ate o jogador optar por sair
while play~=0
chances=6;
% Define a palavra que deve ser adivinhada, pegando palavra aleatoria de bancodepalavras.txt
banco = fopen('bancodepalavras.txt', 'r');

CC = textscan(banco, '%s');
C  = CC{1};
fclose(banco);
indice  = randi(size(C'),1,1);
palavra = C{indice};

% Cria uma copia da palavra que dever adivinhada que então é "criptografada"
palavra2=palavra;
for i= 1:length(palavra)
palavra2(i)='-';
end
clc;
disp(nome);


    while chances >0
        
        % Ambiente padrão do jogador 2, as chances restantes são exibidas 
        % junto com as letras descobertas e o ponteiro para inserir o palpite
        fprintf("\n\n Chances restantes %.0f \n\n ", chances);
        fprintf("%s", palavra2);
        letra=input("\n Insira uma letra ou um palpite para palavra ",'s');
        letra=lower(letra);
        
        % Laço condicional adpatavel ao tipo do palpite
    %-------------------------------------------------------------------
        % Primeiro caso, o jogador da o palpite de toda a palavra
        if length(letra) == length(palavra)
            % Caso o jogador acerte o palpite de palavra. O programa parabeniza
            % o jogador e finaliza
            if letra==palavra
                fprintf("\n\nParabéns! Você ganhou!")
                vitorias=vitorias+1;
                break
            % Caso o jogador erre o palpite de palavra. O programa avisa o erro e
            % o jogador perde uma chacne
            else
                fprintf("Palpite errado");
                chances=chances-1;
            end
            
    %-------------------------------------------------------------------
        % Segundo caso, o jogador da o palpite de toda a palavra mas digita uma
        % letra a mais sem querer.
        elseif length(letra)~=length(palavra ) && length(letra)>1
            fprintf("\n Palpite com número de letras incompativeis!");
            
    %-------------------------------------------------------------------
        % Terceiro e ultimo caso, o jogador da palpite de uma letra  
        else
            % Primerio caso do palpite de letra. O jogador acerta o palpite da
            % letra, o programa então "discriptografa" a cópia, mostrando a
            % localização da letra adivinhada.
            if find(letra==palavra)~=0     
                for i=1:length(palavra)
                  if letra==palavra(i)
                      palavra2(i)=palavra(i);
                  end
                end
            % Segundo caso do palpite de letra. O jogador erra o palpite da
            % letra, o jogador perde uma chance.
            else
                fprintf("Errado -1 chance \n");
                chances= chances-1;
    
            end
        end
        % Mensagem de GAME OVER ao perder todas as chances
        if chances== 0
                fprintf("\n------------------------------------------------------------\n\t\t\tGAME OVER !");
                fprintf("\n\n\t\tA palavra era %s", palavra)
        % Mensagem de parabenização ao adivinhar todas as letras.
        elseif palavra==palavra2
            fprintf("\n\nVocê ganhou!")
            vitorias=vitorias+1;
            break
        end
        fprintf("\n------------------------------------------------------------");
    end
    play=2;
    while play ~= 0 && play ~=1
    play=input("\n\n Deseja jogar novamente?\n (0) Fechar\n (1) Jogar novamente");
    end
    if play ==1
        rodada=rodada+1;
        clc;
    end
end
clc;
% Imprime as estatíscas do jogador no arquivo .txt
ranking = fopen("rankingForca.txt", "a+");
fprintf(ranking,"\n\n\t\t\t\t\t\t\t Jogador: %s\n\t\t\t\t\t\t\t Vitórias: %.0f\n\t\t\t\t\t\t\t Tentativas: %0.f", nome, vitorias, rodada);
fclose(ranking);
fprintf("Estatísticas registradas no rankingForca.txt");
