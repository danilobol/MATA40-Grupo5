#include "matriz.c"
//Assinatura das funções
Matriz* criar(int m, int n);
void liberar(Matriz* mat);
float acessa(Matriz* mat, int i, int j);
void atribuir(Matriz* mat, int i, int j, float num);
int linhas(Matriz* mat);
int colunas(Matriz* mat);
