3­ Implemente uma função que crie uma cópia de uma lista encadeada. O protótipo
da função deve ser dado por: Lista* copia (Lista* l);

Lista* copia (Lista* l){
Lista*aux = (Lista*) malloc(sizeof(Lista));
aux->info = l->info;
aux->prox = copia(l->prox);
return aux;
}
