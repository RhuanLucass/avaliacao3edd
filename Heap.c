//
// Created by rhuan on 08/02/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include "Heap.h"
#define N 100
#define FLAG_ERRO -1
#define VERDADEIRO 1
#define FALSO 0
struct heap {
    unsigned int qtde;
    unsigned int dados[N];
};
Heap *criar_heap() {
    Heap* h = (Heap*) malloc(sizeof(Heap));
    if (h == NULL)
        return NULL;
    h->qtde=0;
    return h;
}
int esvaziar_heap(Heap* h) {
    if(h == NULL)
        return FALSO;
    h->qtde = 0;
    return VERDADEIRO;
}
void liberar_heap(Heap** h) {
    free(*h);
    *h = NULL;
}
int tamanho_heap(Heap* h) {
    if(h == NULL)
        return FLAG_ERRO;
    return h->qtde;
}
int heap_cheia(Heap* h) {
    if(h == NULL)
        return FALSO;
    return h->qtde == N;
}
int heap_vazia(Heap* h) {
    if(h == NULL)
        return FALSO;
    return h->qtde == 0;
}
int inserir_fim_heap(Heap* h, unsigned int v) {
    if (h == NULL || heap_cheia(h))
        return FALSO;
    h->dados[h->qtde] = v;
    h->qtde++;
    return VERDADEIRO;
}
int remover_fim(Heap* h) {
    if(h == NULL || heap_vazia(h))
        return FALSO;
    h->qtde--;
    return VERDADEIRO;
}
int pai(Heap *h, int f) {
    if (f <= 0)
        return -1;
    else
        return (f-1)/2;
}
int filho1 (Heap *h, int p) {
    int f1 = 2*p+1;
    if(f1 >= h->qtde)
        return -1;
    else return f1;
}
int filho2 (Heap *h, int p) {
    int f2 = 2*p+2;
    if(f2 >= h->qtde)
        return -1;
    else return f2;
}
int inserir_heap(Heap *h, int v) {
    if(!inserir_fim_heap(h, v))
        return 0;
    int p_v = h->qtde-1;
    while (h->dados[p_v] > h->dados[pai(h, p_v)] && pai(h,p_v) >= 0) {
        troca(h, p_v, pai(h, p_v));
        p_v = pai(h, p_v);
    }
    return 1;
}
void troca(Heap *h, int p1, int p2) {
    int aux = h->dados[p1];
    h->dados[p1] = h->dados[p2];
    h->dados[p2] = aux;
}
void exibir_heap(Heap *h) {
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
void controi_heap_de_vetor(Heap *h, int* vetor, int n) {
    int i;
    for (i = 0; i <n; i++) {
        inserir_heap(h, vetor[i]);
    }
}
int remover_max(Heap *h) {
    h->dados[0] = h->dados[h->qtde-1];
    h->qtde--;
    max_heapify(h, 0);
}
void max_heapify(Heap *h, int p) {
    while (h->dados[p] < h->dados[filho1(h, p)] || h->dados[p] < h->dados[filho2(h, p)]) {
        if (h->dados[filho1(h, p)] < h->dados[filho2(h, p)] && filho2(h, p) != -1) {
            troca(h, p, filho2(h, p));
            p = filho2(h, p);
        } else if (h->dados[filho1(h, p)] >= h->dados[filho2(h, p)] && filho1(h, p) != -1) {
            troca(h, p, filho1(h, p));
            p = filho1(h, p);
        } else {
            break;
        }
    }
}

int menor_valor(Heap *h) {
    if (h == NULL)
        return -1;
    int menor = h->dados[h->qtde-1];
    for(int i = h->qtde-2; filho1(h, i) == -1; i--){
        if(menor > h->dados[i])
            menor = h->dados[i];
    }
    return menor;
}

int remover_menor(Heap *h) {
    if (h == NULL)
        return -1;

    int pos = 0;
    for(int i = h->qtde; filho1(h, i) == -1; i--) {
        if (h->dados[i] == menor_valor(h)) {
            pos = i;
            break;
        }
    }

    troca(h, pos, h->qtde-1);
    remover_fim(h);
    max_heapify(h, pos);
    return 1;
}


#include "Heap.h"