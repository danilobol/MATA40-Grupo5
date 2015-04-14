// 17­ Faça um programa que receba o salário base de um funcionário, calcule e mostre o seu salário a receber,
//sabendo­se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base.

#include <stdio.h>

float im (float s){
	return (s + 10 - ((s*10)/100));
}

main(){
	float s;
	scanf("%f",&s);
	printf ("%.2f\n",im(s));
	return 0;
}
