/*

1. A nota final de um estudante é calculada a partir de três notas atribuídas, respectivamente, a um 

trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três notas 

mencionadas obedece aos pesos a seguir: 

Nota Peso

Trabalho de laboratório 2 

Avaliação semestral 3 

Exame final 5 

Faça um programa que receba as três notas; calcule e mostre a média ponderada e o conceito 

que segue a tabela: 

Média Ponderada  |   Conceito

8 a 10          |     A 

7 a 8          |      B 

6 a 7         |       C 

5 a 6        |        D 

0 a 5       |         E

*/

#include <stdio.h>

float fun (float n1, float n2, float n3){
	float media;
	media = ((n1*2)+(n2*3)+(n3*5))/(2+3+5);
	return media;
}

main(){
	
	float n1, n2, n3, media;
	
	scanf ("%d %d %d",&n1,&n2,&n3);
	media = fun (n1, n2, n3);
	
	printf ("A media ponderada eh %d e o conceito eh ",media);
	
	if ((media >= 8) && (media <= 10))
		printf ("A");
	else if ((media >= 7) && (media <= 8))
		printf ("B");
	else if ((media >= 6) && (media <= 7))
		printf ("C");
	else if ((media >= 5) && (media <= 6))
		printf ("D");
	else
		printf ("E");
		
	return 0;
}
