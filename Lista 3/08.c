/*

8. Assumindo que o endere�o da vari�vel x foi atribu�do a um ponteiro px, escreva umaexpress�o que n�o usa x e divida x
por 5. 

*/


#include <stdio.h>

main(){
	int x=25, *px;
	px = &x;
	*px = *px / 5;
	printf ("%d\n",x);

}
