2­ Implemente uma função que verifique se duas listas encadeadas são iguais. Duas listas são consideradas iguais se têm a mesma seqüência de elementos. O protótipo da função deve ser dado por: int igual (Lista* l1, Lista* l2);

int verif (Lista* l1, Lista* l2)
{
  Lista* aux1 ; // ponteiro para percorrer l1 
  Lista* aux2 ; // ponteiro para percorrer l2
  for(aux1 = l1, aux2 = l2; aux1 != NULL && aux2 != NULL; aux1 = aux1->prox, aux2 = aux2->prox)
  {
 

     if(aux1->info !=  aux2->info )
        return 0; 



  }
   return aux1 == aux2;
}
