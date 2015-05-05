1)Considerando a definição de Lista, escreva a funções solicitadas abaixo para implementar uma lista encadeada.

a)Função de inicialização. (A função que inicializa uma lista deve criar uma lista vazia, sem nenhum elemento).

Lista* cria_lista(){
	Lista* li = (Lista*) malloc(sizeof(Lista)); //Guarda o endereço do primeiro nó da lista
	if(li != NULL) // Se deu certo preenche o primeiro ponteiro com null
		*li = NULL;
	return li;
}

b) Função de inserção (Uma vez criada a lista vazia, podemos inserir novos elementos nela.)

Lista2* insere (Lista2* l, int v){
	
	Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
	novo->info = v;
	novo->prox = l;
	novo->ant = NULL;
	/* verifica se lista não está vazia */
	if (l != NULL)
		l->ant = novo;
	return novo;
}



c) Função que percorre os elementos da lista.

int tamanho_lista(Lista* li){
	if (li==NULL) return 0; //Se a lista estiver vazia retorna 0
	int cont = 0;
	Elem* no = *li // Criou um nó que vai no primeiro elemento da lista
	while(no != NULL){	//Vai percorrer todos os nós da lista até ele ser igual a NULL
		cont++; 
		no = no->prox; // passa para o proximo
	}
	return cont;
}


d)Função que verifica se lista está vazia.

int lista_vazia(Lista* li){
	if(li==NULL) //se a lista for nula
		return 1;
	if(*li==NULL) //se o ponteiro dela for nulo
		return 1;
	return 0;
}



e) Função de busca.

int busca(Lista* li, int pos, struct lista *al){ //Passa a lista, a posição, e a struct
	if(li==NULL || pos<= 0) return 0; //Verifica se a lista é valida ou se a posição é valida 
	Elem *no = *li; //No recebe o inicio d alista
	int i = 1;
	while(no != NULL && i < pos){
		no = no->prox; //Verifica se o no é diferente de NULL e se a pocição é maior que 1
		i++; // incrementa o i
	}
	if(no==NULL) // Se sim é que não encomtrou a posição na lista
		return 0;
	else{
		*al = no->dados; //atribui no conteudo do ponteiro
		return 1;
	}
}



f) Função que retira um elemento da lista.

int remove_lista_inicio (Lista* Li){
	if(li==NULL) //Verifica se a lista existe
		return 0;
	if((*li)==NULL) //Verifica se a Lista é vazia
		return 0;
	Elem *no = *li; //Elemento auxiliar nó vai receber o valor do inicio da lista
	*li = no->prox; // inicio vai apontar para o elemento seguinte
	free(no); // libera o nó
	return 1;
}



g) Função para liberar a lista.

void libera_lista(Lista* li){ //Passa a lista que eu quero liberar
	if(li != NULL){ //Se a lista for válida
		Elem* no; //Def ponteiro elem
		while ((*li) != NULL){ //Enquanto os elementos da lista não forem diferente de NULL
			no = *li; //O nó recebe esse elemento da lista
			*li = (*li) -> prox;  // O elemento da lista recebe o proximo elemento da lista
			free (no); Libera o nó
		}
		free(no);
	}
}

