#include <stdio.h>


int somar (int a, int b);
int subtrair(int a, int b); //protótipos de função

int (*sub) (int, int) = subtrair; // criamos um atalho para a função "subtrair"

int operacao(int x, int y, int (*func) (int, int));

int main(){
	int i, j;
	i = operacao(7, 5, somar); // chamamos a função diretamente pelo nome
	j = operacao(20, i, sub); // chamamos a função pelo atalho
	
	printf ("Resultados das operacoes:\n\n");
	printf ("7 + 5 = %d\n", i);
	printf ("20 - %d = %d\n\n",i,j);
	return 0;
}

int somar (int a, int b){
	return (a+b);
}

int subtrair (int a, int b){
	return (a-b);
}

int operacao (int x, int y, int (*func)(int, int)){
	int op;
	op = func(x, y); // Também poderia ser "op = (*func) (x, y);"
	return op;
}
