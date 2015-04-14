// 12 ­ Faça um programa que receba três notas, calcule e mostre a média aritmética entre elas.

#include <stdio.h>

float med (float n1, float n2, float n3){
	return ((n1+n2+n3)/3);
}

main(){
	float n1, n2, n3;
	scanf("%f %f %f",&n1,&n2,&n3);
	printf ("%.2f\n",med(n1, n2, n3));
	return 0;
}
