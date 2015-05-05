6­ Escreva as funções para inserir e retirar um elemento de uma lista circular duplamente encadeada.

void insereListaCircular (Lista2* l, int v, int k)

{
   Lista2* aux, novoDado;
   if(k<1 || k>tam(l)+1)
   {
      printf("Posição invalida!!");
      exit(1); 
   }
   novoDado = (Lista2*) malloc(sizeof(Lista2));
   if(NovoDado == NULL)
   {
      printfEspaco insuficiente!!");
      exit(2);
   }
   novoDado ->info = v;
   for (aux=l; k>1; aux=aux->prox, k--);


}
// remove um elemento de uma lista circular duplamente encadeada 
remover(Lista2* l, int x)
{Lista2* aux = busca(l,dado) ;
 if (aux  == NULL)
    return l;
   // retira elemento do encadeamento 
  if (l == aux ) 
  l = aux->prox;
  else
     aux->ant->prox = aux->prox;
  if (aux->prox != NULL) 
      aux->prox->ant = aux->ant;
  free(aux);
  return l;
}
