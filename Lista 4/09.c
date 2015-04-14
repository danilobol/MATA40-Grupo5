9­ Seja a seguinte seqüência de instruções int i=10, j=20;

int *pti, *ptj;

pti = &i;

ptj = &j;

Qual expressão não é válida?

a. j = pti == ptj; // Expressão booleana, j retornaria o valor 0

b. i = pti­ptj; // retorna 1

c. pti += ptj; 

d. pti++; // passa para um outro endereço da memoria.

e. as

f. i = pti || ptj; // retorna 1


Resposta: c. pti += ptj;

Daria erro, pois está tentando somar os endereços. O correto seria *pti += *ptj;  
