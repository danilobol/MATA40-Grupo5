

//Abaixo temos a struct definida
//Apenas 3 campos
typedef struct m {
    int linhas; //número de linhas da matriz
    int colunas; //Número de colunas da matriz
    int **mat; //A matriz . ** de ponteiro pq iremos criar um vetor de ponteiros
} matriz;
/*
 * Função inicializarMatriz
 * Inicializa a matriz
 *
 * @param matriz m
 * @return matiz  m
 *
 * */

matriz inicializarMatriz(matriz m) {
    int i, j;

    //Abaixo o usuário informa o número de linhas e de colunas
    printf("Informe o total de linhas da matriz\n");
    scanf("%d", &m.linhas); //Pego o valor da linha
    printf("Informe o total de colunas da matriz\n");
    scanf("%d", & m.colunas); //Pego o valor da coluna

    m.mat = (int**) malloc(m.linhas * sizeof (int*)); //Primeiramente criamos um vetor de ponteiros

    for (i = 0; i < m.linhas; i++) { //Começando a percorrer a lista de ponteiros
        //Para cada índice do ponteiro(Uma posição do vetor de ponteiros) eu aloco um vetor do tipo ponteiro(Outro vetor)
        //que irá corresponder a uma determinada linha da matriz linha da matriz
        m.mat[i] = (int*) malloc(m.colunas * sizeof (int));
        //Abaixo faço um laço que pega essa linha e a inicializa com o valor 0
        for (j = 0; j < m.colunas; j++) {
            m.mat[i][j] = 0;
        }
        //Ao termino desse "for" acima teremos a linha Exemplo: |0|0|0|0| que corresponde a uma linha da matriz
        //Com a linha criada passamos para a próximo índice da matriz que corresponde a próxima linha
    }

    //Quando saímos desse "duplo for" temos a saída da nossa matriz
    //Caso seja o usuário informe 4 linhas e 4 colunas será impresso assim:
    //|0|0|0|0|
    //|0|0|0|0|
    //|0|0|0|0|
    //|0|0|0|0|

    //A matriz está inicializada
    return m; //Retorno para que a variável matriz que está na main possa receber a matriz inicializada

}

/*
 * Função adicionarValores
 * Adiciona os valores da matriz
 *
 * @param m
 * @return m
 *
 * */
matriz adicionarValores(matriz m) {
    int i, j;
    for (i = 0; i < m.linhas; i++) { //Percorre as linhas
        for (j = 0; j < m.colunas; j++) { //Percorre as colunas
            scanf("%d", &m.mat[i][j]); //Insere um valor na matriz
        }
    }
    return m;
}

/*
 * Função imprimeMatriz
 * Imprime a matriz
 *
 * @param m
 * @return m
 *
 * */

void imprimeMatriz(matriz m) {
    int i, j;
    //Esse for é para imprimir a matriz
    for (i = 0; i < m.linhas; i++) { //Percorre as linhas do Vetor de Ponteiros
        for (j = 0; j < m.colunas; j++) { //Percorre o Vetor de Inteiros atual.
            printf("%d ", m.mat[i][j]);
        }
        printf("\n"); // Esse "\n" é para que a cada linha criada e pule uma linha para ficar da forma que ilustrei lá nas linhas 29 à 32 do código
    }

    return;
}



