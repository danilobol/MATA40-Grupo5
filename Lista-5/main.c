#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"


int main() {
    int escolha;
    matriz m; //Declaro a matriz
    //Criação do menu
    for (;;) {
        do {
            printf("\n####################################\n");
            printf("1 - Inicializar matriz\n");
            printf("2 - Adicionar elementos na matriz\n");
            printf("3 - Imprimir matriz\n");
            printf("4 - Limpar tela\n");
            printf("5 -Sair do programa\n");
            printf("####################################\n");
            printf("Escolha uma opção");
            scanf("%d", &escolha);
        } while ((escolha < 1 || escolha > 5));//Garantir que a opção escolhida não pode ser menor que 1 ou maior que 5. Caso contrário ele permanece no loop
        switch (escolha) {
            case 1:
                m = inicializarMatriz(m);
                break;
            case 2:
                m = adicionarValores(m);
                break;
            case 3:
                imprimeMatriz(m);
                break;
            case 4:
                system("clear");
                break;
            case 5:
                exit(0);

        }
    }

    return 0; //Retorna o Ponteiro para a Matriz Alocada
}
