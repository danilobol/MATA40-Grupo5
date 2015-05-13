#include <stdlib.h> 
#include <stdio.h> 
#include "matriz.h"
 
typedef struct matriz{
	int linha;
	int coluna;
	float** posicoes;
}Matriz;
 
Matriz* criar(int m, int n){
	int i;
 	Matriz* mat = (Matriz*) malloc(sizeof(Matriz));
 	mat->linha = m;
 	mat->coluna = n;
 	
 	mat->posicoes = (float**) malloc(m*sizeof(float*));
 	for(i=0; i<m; i++){
 		matx->posicoes[i] = (float*) malloc(n*sizeof(float));
 	}
 	return mat;
 }
 
void liberar(Matriz* mat){
	int i;
	for (i=0; i < mat->linha; i++){
		free(mat->posicoes[i]);
	}
 	free(mat->posicoes);
 	free(mat);
}
 
float acessa(Matriz* mat, int i, int j){
	return mat->posicoes[i][j];
}
 
void atribuir(Matriz* mat, int i, int j, float num) {
 	mat->posicoes[i][j] = num;
 }
 
int linhas(Matriz* mat){
	return mat->linha;
}
 
int colunas(Matriz* mat){
	return mat->coluna;
}
