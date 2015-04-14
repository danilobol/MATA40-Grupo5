// 4­ Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.

#include <stdio.h>

int media (int n1, int n2, int n3, int n4){
	
	return (n1+n2+n3+n4);
}

main(){
	int n1, n2, n3, n4;
	
	scanf ("%d %d %d %d",&n1,&n2,&n3,&n4);
	printf ("%d\n",media(n1,n2,n3,n4));
	return 0;
}

