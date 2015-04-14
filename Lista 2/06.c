//6. Faça um programa que receba um número inteiro e verifique se é par ou ímpar.

#include <stdio.h>

int par (int n){
	
	if ((n%2)==0)
		return 0;
	else
		return 1;
	
}

main(){
	
	int n;
	
	scanf ("%d",&n);
	
	if (par(n) == 0)
		printf ("Par");
	else
		printf ("Impar");
		
	return 0;
}
