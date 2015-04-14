// 16­ Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber, sabendo­se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% sobre este salário.

#include <stdio.h>

float sal (float s){
	return (s + ((s*5)/100) - ((s*7)/100));
}

main(){
	float s;
	scanf("%f",&s);
	printf ("%.2f\n",sal(s));
	return 0;
}
