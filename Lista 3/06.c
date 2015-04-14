/*

6.Assumindo que queremos ler o valor de x, e o endereço de x
foi atribuído a px, a instrução seguinte é correta? Por que? 
scanf ( “%d”, *px ); 

*/

 Errado, o correto seria scanf ("%d",px), pois ele espera um endereço de memória e nesse caso ele não está acessando a memoria.
