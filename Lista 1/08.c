// 8­ Ler o valor do raio de um circulo e calcular a área do circulo correspondente, considere pi = 3:141592.

#include <stdio.h>

float area (float r){
	return 3.141592 * r*r
}

main(){
	int r;
	scanf("%d",&r);
	printf ("%f\n",area(r));
	return 0;
}
