#include <stdio.h>
#include "Heap.h"
#include "min-heap.h"
#include "Grafo.h"

int main() {
    int i, tam_vet=10;
    int vetor[] = {50, 29, 33, 21, 15, 78, 66, 5, 10, 20};
    Heap *h = criar_heap();
    Heap_min *h_min = criar_heap_min();


    if(h == NULL)
        return 0;


    printf("Constroi heap maxima de vetor:");

    controi_heap_de_vetor(h, vetor, tam_vet);
    exibir_heap(h);

    //1
    printf("\n1- O menor valor da heap eh: %d\n",menor_valor(h));
    menor_valor(h);

    //2
    printf("\n2- Removido o menor valor:");
    remover_menor(h);

    printf("\n");
    exibir_heap(h);

    //4
    printf("\n\n4- HEAP MINIMA");
    printf("\nConstroi heap minima de Vetor");
    controi_heap_de_vetor_min(h_min, vetor, tam_vet);
    exibir_heap_min(h_min);

    printf("\n\nRemovendo menor valor da heap minima:");
    remover_min(h_min);
    exibir_heap_min(h_min);


    printf("\n\nPARTE SOBRE GRAFOS\n");
    Grafo *g;
    Grafo_Adj *g2;
    int **m, **m2;
    g = criar_grafo(6);

    alocar_matriz(&m, 6, 6, 0);
    inserir_aresta(g, 0, 1, 1);
    inserir_aresta(g, 1, 4, 1);
    inserir_aresta(g, 2, 0, 1);
    inserir_aresta(g, 2, 5, 1);
    inserir_aresta(g, 4, 3, 1);
    inserir_aresta(g, 4, 5, 1);
    inserir_aresta(g, 5, 2, 1);
    inserir_aresta(g, 0, 2, 1);

    mostrar_grafo(g);
    //5-a)
    printf("5-a) Matriz de adjacencias:\n");
    obter_adjacentes_m(g, 2);

    printf("\n\n6- Verificando se o grafo eh adjacente ou nao:");
    grafo_orientado(g);

    printf("\nGRAFO COM MATRIZ DE ADJACENCIA\n");
    g2 = criar_grafo_adj(6);
    alocar_matriz(&m2, 6, 6, 0);
    inserir_aresta_adj(g2, 0, 1);
    inserir_aresta_adj(g2, 1, 4);
    inserir_aresta_adj(g2, 2, 0);
    inserir_aresta_adj(g2, 2, 5);
    inserir_aresta_adj(g2, 4, 3);
    inserir_aresta_adj(g2, 4, 5);
    inserir_aresta_adj(g2, 5, 2);
    inserir_aresta_adj(g2, 0, 2);

    mostrar_grafo_adj(g2);
    //5-b)
    printf("\n5-b) Lista de adjacencias:\n");
    obter_adjacentes_l(g2, 2);


    return 0;
}
