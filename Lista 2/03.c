//3. Faça um programa que receba dois números e mostre o maior.

#include <stdio.h>

int m (int n1, int n2){
	
	if (n1 > n2)
		return n1;
	else
		return n2;
	
}

main(){
	
	int n1, n2;
	
	scanf ("%d %d", &n1, &n2);
	

	printf("%d", m(n1, n2));
		
	return 0;
}
