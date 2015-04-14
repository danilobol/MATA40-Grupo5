/*

7. Faça um programa que receba quatro valores: I, A, B e C. Desses valores, I é inteiro e positivo, 

A, B e C são reais. Escreva os números A, B e C obedecendo à tabela a seguir. Suponha que o 

valor digitado para I seja sempre um valor válido, ou seja, 1, 2 ou 3, e que os números digitados 

sejam diferentes um do outro. 

Valor de I    |     Forma a escrever 

    1        |      A, B e C em ordem crescente 

    2        |      A, B e C em ordem decrescente 

    3       |       O maior fica entre os outros dois números

*/

#include <stdio.h>

void troca1 (float n[3]);
void troca2 (float n[3]);
void troca3 (float n[3]);

main(){
	
	int L, i;
	float n[3];
	
	scanf ("%d",&L);
	
	for (i=0;i<4;i++){
	
		scanf ("%d",&n[i]);
			
	}
	
	if (L==1){
		troca1 (n);
		for (i=0;i<4;i++){
			printf ("%d\n",n[i]);
		}
	}
	
	else if (L==2){
		troca2 (n);
		for (i=0;i<4;i++){
			printf ("%d\n",n[i]);
		}
	}			

	else{
		troca3 (n);
		for (i=0;i<4;i++){
			printf ("%d\n",n[i]);
		}
	}



}


void troca1 (float n[3]){
	int i, j, aux;
	for (i=0;i<3;i++){
		for (j=i+1;j<4;j++){
			if (n[i] > n[j]){
				aux = n[i];
				n[i] = n[j];
				n[j] = aux;
			}
			
		}
	}

}

void troca2 (float n[3]){
	int i, j, aux;
	for (i=0;i<3;i++){
		for (j=i+1;j<4;j++){
			if (n[i]<n[j]){
				aux = n[i];
				n[i] = n[j];
				n[j] = aux;
			}
			
		}
	}

}

void troca3 (float n[3]){
	int a, b, c;
	
	a = n[0];
	b = n[1];
	c = n[2];
	
	if (a>b && a>c){
		a = n[1];
		b = n[0];
		c = n[2];
	}
    else if (b>a && b>c){
      	a = n[0];
		b = n[1];
		c = n[2];
    }
    else{
       	a = n[0];
		b = n[2];
		c = n[1];
    }
    
    n[0] = a;
    n[1] = b;
    n[2] = c;
       
}
