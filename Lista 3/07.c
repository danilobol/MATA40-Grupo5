/*

7. Qual � a instru��o que deve ser adicionada ao programa seguinte para que le trabalhe corretamente? 
main ( ) { 
int j, *pj; 
*pj = 3; 
} 

*/

main() {
	int j,*pj;
	pj = &j;
	*pj = 3;
}
