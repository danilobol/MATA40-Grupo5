/*

8. Assumindo que o endereço da variável x foi atribuído a um ponteiro px, escreva umaexpressão que não usa x e divida x
por 5. 

*/


#include <stdio.h>

main(){
	int x=25, *px;
	px = &x;
	*px = *px / 5;
	printf ("%d\n",x);

}
// Como o ponteiro aponta para a memória de X, ao dividir *px por 5 estará alterando o valor de X.
