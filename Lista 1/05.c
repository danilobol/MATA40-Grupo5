// 5­ Faça um Programa que peça dois números e imprima a soma.

#include <stdio.h>

float soma (float x, float y){
	return x+y;
}

main(){
	float x1, x2;

	scanf ("%f %f",&x1, &x2);
	printf ("%f\n",soma(x1, x2));
	return 0;
}
