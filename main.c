#include <stdio.h>
#include "Heap.h"
#include "Grafo.h"

int main() {
    int i;
    int vetor[] = {50, 29, 33, 21, 15, 78, 66, 5, 10, 20};
    Heap *h = criar_heap();

    if(h == NULL)
        return 0;

    //printf("Inicio");
    /*for (int i = 0; i < 15; i++)
        inserir_heap(h, i);
    exibir_heap(h);
    printf("\n\nRemove 15");
    remover_max(h);
    exibir_heap(h);

    printf("\n\nConstroi de Vetor");*/
    Heap *h2 = criar_heap();
    controi_heap_de_vetor(h2, vetor, 10);
    //exibir_heap(h2);

    printf("O menor valor da heap eh: %d\n",menor_valor(h2));
    exibir_heap(h2);

    remover_menor(h2);

    printf("\n");
    exibir_heap(h2);

    return 0;
}
