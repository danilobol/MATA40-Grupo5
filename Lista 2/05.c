/*

5. Fa�a um programa que receba tr�s n�meros obrigatoriamente em ordem crescente e um quarto 

n�mero que n�o siga essa regra. Mostre, em seguida, os quatro n�meros em ordem decrescente. 

Suponha que o usu�rio digitar� quatro n�meros diferentes.

*/

#include <stdio.h>

void fun (int *n){
	int i, j, aux;
	
	for (i=0;i<3;i++){
		for (j=i+1;j<4;j++){
			if (n[i]<n[j]){
				aux = n[i];
				n[i] = n[j];
				n[j] = aux;
			}
			
		}
	}
	
}

main(){
	
	int i, j;
	int *n = malloc (4 * sizeof(int));
	
	printf ("Digite 4 numeros sendo os 3 primeiros em ordem cescente:\n");
	
	for (i=0;i<4;i++){
	
		scanf ("%d",&n[i]);
			
	}
	
	fun (n);
	
	for (i=0;i<4;i++){
		printf ("%d\n",n[i]);
	}
		
	
	free (n);	
	return 0;
}
