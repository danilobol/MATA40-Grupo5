// 15­ Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.

#include <stdio.h>

float sal (float s, float aum){
	return (aum, s + ((s*aum)/100));
}

main(){
	float s, aum;
	scanf("%f %f",&s, &aum);
	printf ("O aumento foi %.2f e o novo salario eh %.2f\n",sal(s, aum));
	return 0;
}
