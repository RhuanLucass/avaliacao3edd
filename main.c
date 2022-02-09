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

    //printf("Inicio");
    /*for (int i = 0; i < 15; i++)
        inserir_heap(h, i);
    exibir_heap(h);
    printf("\n\nRemove 15");
    remover_max(h);
    exibir_heap(h);

    printf("\n\nConstroi heap maxima de Vetor");

    controi_heap_de_vetor(h, vetor, tam_vet);
    //exibir_heap(h2);

    printf("O menor valor da heap eh: %d\n",menor_valor(h));
    exibir_heap(h);

    remover_menor(h);

    printf("\n");
    exibir_heap(h);

    printf("\n");
    verifica_heap(vetor, tam_vet);*/

    printf("\n\nHEAP MINIMA");
    printf("\nConstroi heap minima de Vetor");
    controi_heap_de_vetor_min(h_min, vetor, tam_vet);
    exibir_heap_min(h_min);

    printf("\n\nRemovendo menor valor da heap minima:");
    remover_min(h_min);
    exibir_heap_min(h_min);


    return 0;
}
