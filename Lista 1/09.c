// 9­ Faça um Programa que leia o tamanho de um lado do quadrado e calcule sua área em seguida mostre o dobro

#include <stdio.h>

int area (int l){
	return l*l;
}
main(){
	int l;
	scanf("%d",&l);
	printf ("%d\n",area(l));
	printf ("%d\n",area(l)*2);
	return 0;
}
