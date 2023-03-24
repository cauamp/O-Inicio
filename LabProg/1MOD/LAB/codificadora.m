%codifica a palavra

tamanho = size(palavra);

alfabeto = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '];
matriz = [1, 1, 1, 1; 1, 2, 1, 2; 1, 1, 1, 0; 1, 4, 2, 3];

%troca letras por numeros simples
for i = 1:tamanho(2)
  for j = 1:27
    if palavra(i) == alfabeto(j)     
      crip(i) = j;
    endif
   j++;
  endfor
  i++;
endfor

crip2 = crip';
sizes = size(crip2);
size1 = sizes(1);
tam = ceil(size1/4);

i = 1;

for j = 1:tam
   if(size1 - i == 3)
     c{j} = crip2(i:i+3);
   elseif(size1 - i == 2)
     c{j} = crip2(i:i+2);
   elseif(size1 - i == 1)
     c{j} = crip2(i:i+1);
   elseif(size1 - i == 0)
    c{j} = crip2(i);
   else
     c{j} = crip2(i:i+3);
   endif
   i = i + 4;
endfor

i = 1;

for j = 1:tam
  if (size1 - i == 3)
    p(1, i:i+3) = matriz(1:4, 1:4) * c{j};
  elseif (size1 - i == 2)
    p(1, i:i+2) = matriz(1:3, 1:3) * c{j};
  elseif (size1 - i == 1)
    p(1, i:i+1) = matriz(1:2,1:2) * c{j};
  elseif (size1 - i == 0)
    p(i) = matriz(1,1) * c{j};
  else
    p(1, i:i+3) = matriz * c{j};
   endif
    
  i = i + 4;
endfor

printf("\nA frase codificada eh:");
disp(p);