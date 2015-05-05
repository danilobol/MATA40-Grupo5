
a) struct ponto A;

b) 
	scanf("%f %f",&A.x,&A.y);
	printf("%f %f",&A.x,&A.y);	
	
c) 
	void leitura(struct ponto a){
		scanf("%f %f",&a.x,&a.y);
	}

	void impressao(struct ponto a){
		scanf("%f %f",&a.x,&a.y);
	}
d)
	struct ponto *b;

e) 
	b=&a;
f)
	void leitura1(struct ponto *p){
		scanf("%f %f",p->x,p->y);
	}
	void impressao1(struct ponto *p){
		scanf("%f %f",p->x,p->y);
	}					
g)
	As duas primeiras funções foram passadas por valor e por isso a função scanf não vai armazenar em uma estrutura.
	Já as duas ultimas manipulam o valor da variável da função main, pois, a estrutura é passada por referência, em ambas a função print são equivalentes.

3) 
	void funcao(){
		int i=0;
		
		for(i=0;i<max;i++){
			tab[i]=null;
		}
	}

b)
	void vetor(int pos){
		if(tab[pos] != null){
			fgets(tab[pos].nome,81,stdin);
			scanf("%d",tab[pos],mat);
			fgets(tab[pos].end,121,stdin);
			fgets(tab[pos].tel,121,stdin);
		}
		
	}		
c)
	void vetor1(int pos){
		free(tab[pos]);
		tab[pos]=null;
		
	}	
d) bool verif(pos){
	if(tab[pos] != null){
		return true;
		return false;
	}
}	
