/*

8. Faça um programa que mostre o menu de opções a seguir, receba a opção do usuário e os dados 

necessários para executar cada operação. 

Menu de opções: 

1. Somar dois números. 

2. Subtrair dois números 

3. Multiplicar dois números 

4. Dividir dois números 

5. Raiz quadrada de um número 

Digite a opção desejada.

*/

#include <stdio.h>

float opi (int n1, int n2, int op){
	if (op==1){
		return n1+n2;
	}
	if (op==2){
		return n1-n2;
	}
	if (op==3){
		return 1*n2;
	}
	if (op == 4){
		return n1/n2;
	}
	if (op == 5){
		return (sqrt(n1));
	}
}

main(){
	
	printf ("1. Somar dois números\n"

	"2. Subtrair dois números\n"

	"3. Multiplicar dois números\n"

	"4. Dividir dois números \n"

	"5. Raiz quadrada de um número\n\n");
	
	int op,n1,n2;
	
	printf ("Digite a opcao desejada:\n");
	scanf ("%d", &op);
	
	
	if (op==1){
		printf ("Digite os dois numeros:\n");
		scanf ("%d", &n1,&n2);
	}
	if (op==2){
		printf ("Digite os dois numeros:\n");
		scanf ("%d", &n1,&n2);
	}
	if (op==3){
		printf ("Digite os dois numeros:\n");
		scanf ("%d", &n1,&n2);
	}
	if (op == 4){
		printf ("Digite um numero:\n");
		scanf ("%d %d", &n1, &n2);
	}
	if (op == 5){
		printf ("Digite um numero:\n");
		scanf ("%d", &n1);
		n2=0;
	}
	
	printf ("%f", opi(n1, n2, op));
}
