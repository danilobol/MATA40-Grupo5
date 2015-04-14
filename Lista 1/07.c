// 7­ Faça um Programa que converta metros para centímetros.

#include <stdio.h>

int con (int x){
	return x*100;
}

main(){
	int x;
	scanf("%d",&x);
	printf ("%d\n",con(x));
	return 0;
}
