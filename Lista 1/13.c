// 13­ Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.

#include <stdio.h>

float notas (float n1, float p1, float n2, float p2, float n3, float p3){
	return ((n1*p1)+(n2*p2)+(n3*p3)/(p1+p2+p3));
}

main(){
	float n1, p1, n2, p2, n3, p3;
	scanf("%d %d %d",&n1,&p1,&n2,&p2,&n3,&p3);
	printf ("%.2f\n",notas(n1, p1, n2, p2, n3, p3));
	return 0;
}
