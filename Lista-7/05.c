5­ Escreva a funções solicitadas abaixo para implementar uma lista duplamente encadeada:


a. Função de inserção

Lista* insereDados(Lista* l, int dado)
{
  Lista* novoDado = (Lista*) malloc(sizeof(Lista));
  novoDado->info = dado;
  novoDado->ant = NULL;
  novoDado->prox = l;

if ( l != NULL)
  l->ant = novoDado;
 return novoDado;
}


b. Função de busca.
Lista2* busca (Lista* l, int dado)
{
  Lista* aux;
  for( aux = l; aux != NULL; aux->prox)
  if (aux->dado == dado)
     return aux;
 return NULL; // não achou o dado
}

c. Função que retira um elemento da lista.

 Lista* removeDados(Lista* l, int dado)
{
 Lista* aux = busca(l,dado) ;
 if (aux  == NULL)
    return l; 
  if (l == aux ) // retira elemento do encadeamento 
  l = aux->prox;
  else
     aux->ant->prox = aux->prox;
  if (aux->prox != NULL) 
      aux->prox->ant = aux->ant;
  free(aux);
  return l;
}

