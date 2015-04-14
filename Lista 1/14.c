// 14­ Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo­se que este sofreu um aumento de 25%.

#include <stdio.h>

float sa (float s){
	return (s + ((s*25)/100));
}

main(){
	float s;
	scanf("%f",&s);
	printf ("%.2f\n",sa(s));
	return 0;
}
