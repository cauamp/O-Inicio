%decodifica

p2 = p';
i = 1;

for j = 1:tam
   if(size1 - i == 3)
     c2{j} = p2(i:i+3);
   elseif(size1 - i == 2)
     c2{j} = p2(i:i+2);
   elseif(size1 - i == 1)
     c2{j} = p2(i:i+1);
   elseif(size1 - i == 0)
    c2{j} = p2(i);
   else
     c2{j} = p2(i:i+3);
   endif
   i = i + 4;
endfor

i = 1;
m3x3 = matriz(1:3, 1:3)

for j = 1:tam
  if (size1 - i == 3)
    d(1, i:i+3) = inv(matriz(1:4, 1:4)) * c2{j};
  elseif (size1 - i == 2)
    d(1, i:i+2) = c2{j}\m3x3
  elseif (size1 - i == 1)
    d(1, i:i+1) = inv(matriz(1:2,1:2)) * c2{j};
  elseif (size1 - i == 0)
    d(i) = inv(matriz(1,1)) * c2{j};
  else
    d(1, i:i+3) = inv(matriz(1:4, 1:4)) * c2{j}
    matriz(1:4, 1:4)
   endif
    
  i = i + 4;
endfor

d = round(d);
t = size(d);
cont = 1;

for index = 1:t(2)
  for j = 1:27
    if d(index) == j     
      dcrip(cont) = alfabeto(j);    
      cont++;
    endif
  endfor
endfor

printf("\nA frase descodificada eh: ");
disp(dcrip);
