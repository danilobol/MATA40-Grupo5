/*

11. Se i e j são variáveis inteiras e p e q são ponteiros para inteiros, quais das seguintes expressões de atribuição são ilegais? 

a)p = &i; 

b) *q = &j; 

c) p = &*&i; 

d) i = (*&)j; 

e) i = *&*&j; 

f) q = &p; 

g) i = (*p) ++ +*q; 


*/


11)
A) Verdadeiro
B) Falso //por que na sintaxe da linguagem isso só poderia ser feito na declaração do ponteiro
C) Verdadeiro
D) Falso// Por que que os parênteses não são esperados, dando erro de sintaxe.
E) Verdadeiro
F) Falso // Um ponteiro não pode apontar para o endereço de memória do outro do ponteiro
G) Verdadeiro
