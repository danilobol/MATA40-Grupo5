/*

4. Fa�a um programa que receba tr�s n�meros e mostre-os em ordem crescente. Suponha que o 

usu�rio digitar� tr�s n�meros diferentes.

*/

#include <stdio.h>

main(){
	
	int n[3], i, j, aux;
	
	for (i=0;i<3;i++)
		scanf ("%d",&n[i]);
	
	for (i=0;i<2;i++){
		for (j=i+1;j<3;j++){
			if (n[i]<[j]){
				aux = n[i];
				n[i] = n[j];
				n[j] = aux;
			}
			
		}
	}
	
	for (i=0;i<3;i++){
		printf ("%d\n",n[i])
	}
		
	
		
	return 0;
}
