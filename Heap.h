//
// Created by rhuan on 08/02/2022.
//

#ifndef PROVA_3_HEAP_H
#define PROVA_3_HEAP_H

typedef struct heap Heap;
Heap* criar_heap();
int heap_cheia(Heap* h);
int heap_vazia(Heap* h);
int esvaziar_heap(Heap* l);
int inserir_fim_heap(Heap* h, unsigned int v);
void liberar_heap(Heap** l);
int tamanho_heap(Heap* l);
int inserir_heap(Heap *h, int v);
void max_heapify(Heap *h, int p);
int remover_max(Heap *h);
int pai(Heap *h, int f);
int filho1(Heap *h, int p);
int filho2(Heap *h, int p);
int inserir(Heap *h, int v);
void exibir_heap(Heap *h);
void troca(Heap *h, int p1, int p2);
void controi_heap_de_vetor(Heap *h, int* vetor, int n);

int menor_valor(Heap *h);
int remover_menor(Heap *h);

#endif //PROVA_3_HEAP_H
