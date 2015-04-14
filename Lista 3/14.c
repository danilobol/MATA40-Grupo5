/*

14. Considerando as variáveis e ponteiros definidos abaixo; quais são as atribuições permitidas? 
int i, *pi, **ppi; 
float f, *pf, **ppf; 

a) i = f; 

b) pf = &i; 

c) *pf = 5.9; 

d) *ppi = &pi 

e) *pf = 10; 

f) f = i; 

g) pi = &f; 

h) *pi = 7.3; 

i) ppf = &pf; 

j) **ppi = 100; 

*/

14)

A) NÃO // 2 variáveis de tipos diferentes não podem ser iguais.
B) NÃO // um ponteiro de tipo float não pode apontar para uma variável int
C) NÃO // Um ponteiro está apontando para um endereço desconhecido da memória.
D) NÃO // Um ponteiro não pode ligar para um endereço de memória de outro ponteiro
E) NÃO// Um ponteiro está apontando para um endereço desconhecido da memória.
F) NÃO// 2 variáveis de tipos diferentes não podem ser iguai.
G) NÃO// Um ponteiro inteiro não pode receber o endereço de memória de uma variável float
H) NÃO// Um ponteiro está apontando para um endereço desconhecido da memória.
I) SIM
J) NÃO// Um ponteiro está apontando para um endereço desconhecido da memória.
