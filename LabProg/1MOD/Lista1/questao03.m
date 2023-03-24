clear;clc;
fprintf("\n");
% Aluno: Cauã Magalhães Pereira
% Turma: 205
% Lista Avaliada 1 Questão 3

 N=11;
aux =0;
while aux ~=4
    
    %aux=input(" Qual opção você deseja? \n (1) Triângulo de números \n (2) Somatório \n (3) Polinômio \n (4) Sair");
    aux=menu("Qual opção você deseja?", "Triângulo de números", "Somatório", "Polinômio", "Sair");
    switch aux
        case 1
            % Função do Triângulo de números
            while N>9 || (N/2)== floor(N/2)
                N=input("Insira um valor ímpar e menor que 10 para N");
            end
            Triangulo_N(N);
            N=11;
            
        case 2
            % Função Somatório
            N=input("Insira um valor para N");
            Somatorio(N);
            N=11;
        case 3
            % Função polinômio
            a(4)=0;
            for i = 1:4
                fprintf("insira o valor para o %d coeficiente", i);
                a(i)=input("");
                if i==4
                nInicio = input("Insira o primeiro parametro do linspace");
                nFim = input("Insira o segundo parametro do linspace");
                end
            end
            Polinomio(a,nInicio,nFim)
            
        case 4
            % Questão 4
            fprintf(" Script encerrado. \n Voltando ao menu principal.")
        otherwise
            fprintf("Opção invalida\n");
            aux = 0;
    end
end
function[]= Triangulo_N(N)
faux = N;
faux2=1;  
    for i = 1:2:N
        for j = 1:i
            if faux2~=0  
                for k = 1:faux
                    % posiciona o ponteiro de acordo com a posição
                    % inicial de cada camada
                    fprintf(" "); 
                    faux2=0;
                end
            end
            %imprime os números da camada após a centralização
            fprintf("%d",j);
        end
        % 'pula' para a próxima camada
        % e redefine as variaveis para o funcionamento 
        % dos outros nós de repeticao e os condicionais 
        fprintf("\n");
        faux = faux-1;
        k=1;
        faux2 =1;
    end
end

function[] = Somatorio(N)
    
    faux3= -N;
    faux4= -N:100;
    [faux4, lixo]=size(faux4');
    result=zeros(faux4,1); 
   for i = 1:faux4
       result(i)= (faux3 - 1)/(faux3 + 1);
       faux3 = faux3+1;
       if result(i)==-2/0
           result(i)=0;
       end
   end
   resultFinal= sum(result);
   fprintf("O resultado do somatório é %.2f", resultFinal);
end

function[] = Polinomio(a,nInicio, nFim)

aux = linspace(nInicio,nFim);
aux2= polyval(a,aux);

fprintf("As raizes para %.2fx^3 %.2fx^2+ %.2fx + %.2f  são:\n", a(1),a(2), a(3), a(4));
disp(roots(a));

figure("Name", "Questão 3 Parte 3", "NumberTitle", "off")
plot(aux,aux2);
grid
title("Variação do polinômio de terceiro grau p(x)")
xlabel("y")
ylabel("p(x)")

end
