#include <stdio.h>

int maior2 (int a, int b){
	if (a > b)
		return a;
	else
		return b;
}

int maior3 (int a, int b, int c){
	if ((a>b)&&(a>c))
		return a;
	else if ((b>a)&&(b>c))
		return b;
	else
		return c;
}

int maior4 (int a, int b, int c, int d){
	if ((a>b)&&(a>c)&&(a>d))
		return a;
	else if ((b>a)&&(b>c)&&(b>d))
		return b;
	else if ((c>a)&&(c>b)&&(c>d))
		return c;
	else
		return d;
}

int teste2 (int x, int a, int b){
	
	if (x >= (maior2 (a, b)) )
		return 1;
	else
		return 0;
}

int teste3 (int x, int a, int b, int c){
	
	if (x >= (maior3 (a, b, c)) )
		return 1;
	else
		return 0;
}

int teste4 (int x, int a, int b, int c, int d){
	
	if (x >= (maior4 (a, b, c, d)) )
		return 1;
	else
		return 0;
}

int main(){
	int x, test;
	x = maior2 (8, 3);
	printf ("Maior entre 8 e 3 eh: %d\n", x);
	test = teste2 (x, 8, 3);
	if (test == 1)
		printf ("Teste 1 correto\n");
	else
		printf ("Teste 1 errado\n");
	//------------------------------//
	
	x = maior3 (8, 3, 9);
	printf ("Maior entre 8, 3 e 9 eh: %d\n", x);
	test = teste3 (x, 8, 3, 9);
	if (test == 1)
		printf ("Teste 2 correto\n");
	else
		printf ("Teste 2 errado\n");
		
	//-----------------------------//
	
	x = maior4 (8, 3, 9, 67);
	printf ("Maior entre 8, 3, 9 e 67 eh: %d\n", x);
	test = teste4 (x, 8, 3, 9, 67);
	if (test == 1)
		printf ("Teste 3 correto\n");
	else
		printf ("Teste 3 errado\n");
		
	return 0;
	
}
