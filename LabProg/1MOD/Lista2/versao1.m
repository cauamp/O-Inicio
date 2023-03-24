clear; clc;
fprintf("\n");
% Aluno: Cauã Magalhães Pereira
% Turma: 205
% Lista Avaliada 2 
% Jogo da Forca versão 1
chances=6;

% Define a variavel com um valor padrão irrelevante. Parte da solução de 
% um bug que estava ocorrendo no MATLAB
palavra= num2str(1:25);
% Define a palavra que deve ser adivinhada

while length(palavra)>90
    clc
    fprintf("JOGADOR 1:\n");
    palavra = input("Insira uma palavra para a forca\n", 's');
end
% Cria uma copia da palavra que dever adivinhada que então é "criptografada"
palavra2= palavra;
for i= 1:length(palavra)
palavra2(i)='-';
end

%Prepara o ambiente para o jogador 2
clc;
fprintf("\n");
fprintf("JOGADOR 2");
while chances >0
    
    % Ambiente padrão do jogador 2, as chances restantes são exibidas 
    % junto com as letras descobertas e o ponteiro para inserir o palpite
    fprintf("\n\n Chances restantes %.0f \n\n ", chances);
    fprintf("%s", palavra2);
    letra=input("\n Insira uma letra ou um palpite para palavra",'s');
    
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
        fprintf("Palpite com número de letras incompativeis!");
        
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
    % Mensagem de parabenização ao adivinhar todas as letras.
    elseif palavra==palavra2
        fprintf("Você ganhou!")
        break
    end
    fprintf("\n------------------------------------------------------------");
end