/*

13. Considerando as variáveis e ponteiros definidos abaixo; quais são as atribuições permitidas? 
int x,*ptx, **pp; 
float a, *pta, **pf; 

a) x = 100; 

b) *pta = &a; 

c) ptx = &a; 

d) *pf = &a; 

e) pp = &pta; 

f) **pf = 7.9; 

g) *ptx = 20; 

h) ptx = &x; 

i) pp = &x; 

j) pf = &pta; 


*/

13)

A) SIM
B) NÃO// O valor *pta não recebe endereço e sim o valor que *pta aponta 
C) NÃO// Como ptx é do tipo inteiro, só podem ser atribuidos valores inteiros a ele
D) SIM
E) NÃO// Um ponteiro não pode receber outro ponteiro e os ponteiros são de tipos diferentes
F) SIM
G) SIM
H) SIM
I) NÂO//Por ser um ponteiro para ponteiro, para acessar tinha que ser *pp
J) NÂO// Ponteiro não pode apontar para outro ponteiro e são de tipos destintos
