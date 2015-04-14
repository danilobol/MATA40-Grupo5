// 11­ Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius. C=(5*(F32)/9).

#include <stdio.h>

float t (f){
	return (5*(f-32)/9);
}

main(){
	float f;
	scanf("%f",&f);
	printf ("%.2f\n",t(f));
	return 0;
}
