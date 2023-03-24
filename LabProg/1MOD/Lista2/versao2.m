clear; clc;
fprintf("\n");
% Aluno: Cauã Magalhães Pereira
% Turma: 205
% Lista Avaliada 2 
% Jogo da Forca versão 2
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


fprintf("JOGADOR");
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
            fprintf("Parabéns! Você ganhou!")
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
        if length(letra)>90
            clc;
        else
        fprintf("\n Palpite com número de letras incompativeis!");
        end
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
        fprintf("Você ganhou!")
        break
    end
    fprintf("\n------------------------------------------------------------");
end