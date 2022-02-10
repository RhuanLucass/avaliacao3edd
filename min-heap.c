//
// Created by rhuan on 09/02/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include "min-heap.h"
#define N 100
#define FLAG_ERRO -1
#define VERDADEIRO 1
#define FALSO 0

//4
struct heap_min {
    unsigned int qtde;
    unsigned int dados[N];
};
Heap_min *criar_heap_min() {
    Heap_min* h = (Heap_min*) malloc(sizeof(Heap_min));
    if (h == NULL)
        return NULL;
    h->qtde=0;
    return h;
}
int esvaziar_heap_min(Heap_min* h) {
    if(h == NULL)
        return FALSO;
    h->qtde = 0;
    return VERDADEIRO;
}
void liberar_heap_min(Heap_min** h) {
    free(*h);
    *h = NULL;
}
int tamanho_heap_min(Heap_min* h) {
    if(h == NULL)
        return FLAG_ERRO;
    return h->qtde;
}
int heap_cheia_min(Heap_min* h) {
    if(h == NULL)
        return FALSO;
    return h->qtde == N;
}
int heap_vazia_min(Heap_min* h) {
    if(h == NULL)
        return FALSO;
    return h->qtde == 0;
}
int inserir_fim_heap_min(Heap_min* h, unsigned int v) {
    if (h == NULL || heap_cheia_min(h))
        return FALSO;
    h->dados[h->qtde] = v;
    h->qtde++;
    return VERDADEIRO;
}
int remover_fim_min(Heap_min* h) {
    if(h == NULL || heap_vazia_min(h))
        return FALSO;
    h->qtde--;
    return VERDADEIRO;
}
int pai_min(Heap_min *h, int f) {
    if (f <= 0)
        return -1;
    else
        return (f-1)/2;
}
int filho1_min(Heap_min *h, int p) {
    int f1 = 2*p+1;
    if(f1 >= h->qtde)
        return -1;
    else return f1;
}
int filho2_min(Heap_min *h, int p) {
    int f2 = 2*p+2;
    if(f2 >= h->qtde)
        return -1;
    else return f2;
}
int inserir_heap_min(Heap_min *h, int v) {
    if(!inserir_fim_heap_min(h, v))
        return 0;
    int p_v = h->qtde-1;
    while (h->dados[p_v] < h->dados[pai_min(h, p_v)] && pai_min(h,p_v) >= 0) {
        troca_min(h, p_v, pai_min(h, p_v));
        p_v = pai_min(h, p_v);
    }
    return 1;
}
void troca_min(Heap_min *h, int p1, int p2) {
    int aux = h->dados[p1];
    h->dados[p1] = h->dados[p2];
    h->dados[p2] = aux;
}
void exibir_heap_min(Heap_min *h) {
    int i;
    int nvl = 1;
    for (i = 1; i <= h->qtde; i ++) {
        if(i ==nvl) {
            printf("\n");
            nvl = 2*(i);
        }
        printf("%d ", h->dados[i-1]);
    }
}
void controi_heap_de_vetor_min(Heap_min *h, int* vetor, int n) {
    int i;
    for (i = 0; i <n; i++) {
        inserir_heap_min(h, vetor[i]);
    }
}
int remover_min(Heap_min *h) {
    h->dados[0] = h->dados[h->qtde-1];
    h->qtde--;
    max_heapify_min(h, 0);
}
void max_heapify_min(Heap_min *h, int p) {
    while (h->dados[p] < h->dados[filho1_min(h, p)] || h->dados[p] < h->dados[filho2_min(h, p)]) {
        if (h->dados[filho1_min(h, p)] < h->dados[filho2_min(h, p)] && filho2_min(h, p) != -1) {
            troca_min(h, p, filho2_min(h, p));
            p = filho2_min(h, p);
        } else if (h->dados[filho1_min(h, p)] >= h->dados[filho2_min(h, p)] && filho1_min(h, p) != -1) {
            troca_min(h, p, filho1_min(h, p));
            p = filho1_min(h, p);
        } else {
            break;
        }
    }
}

#include "min-heap.h"
