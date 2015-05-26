#include <stdio.h>
#include <stdlib.h> 
#include "matriz.h" 

main(){
 	int m, n, linha, coluna;
 	float y;
 	
 	Matriz* x;
	scanf("%d", &linha);
	scanf("%d", &coluna);
 	
	x = criar(linha, coluna);
	
	m = linhas(x);
	n = colunas(x);

	
	liberar(x); 
	
	atribuir(x, linha, coluna, 10);
	
	y = acessa(x, linha, coluna);
	printf("\n%.2f\n", y); 
	
	return 0;
}
