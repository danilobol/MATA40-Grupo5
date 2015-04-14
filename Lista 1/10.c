// 10­ Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

#include <stdio.h>

float sa (float x, float y){
	return x*y;
}

main(){
	float hq, hm;
	printf ("Quanto você ganha por hora?\n");
	scanf("%f",&hq);
	printf ("Quais foram as suas horas trabalhada neste mes?\n");
	scanf("%f",&hm);
	printf ("Voce vai receber %f\n",sa(hm, hq));
	return 0;
}
