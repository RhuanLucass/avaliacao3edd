//
// Created by rhuan on 09/02/2022.
//

#ifndef PROVA_3_MIN_HEAP_H
#define PROVA_3_MIN_HEAP_H

typedef struct heap_min Heap_min;
Heap_min* criar_heap_min();
int heap_cheia_min(Heap_min* h);
int heap_vazia_min(Heap_min* h);
int esvaziar_heap_min(Heap_min* l);
int inserir_fim_heap_min(Heap_min* h, unsigned int v);
void liberar_heap_min(Heap_min** l);
int tamanho_heap_min(Heap_min* l);
int inserir_heap_min(Heap_min *h, int v);
void max_heapify_min(Heap_min *h, int p);
int remover_min(Heap_min *h);
int pai_min(Heap_min *h, int f);
int filho1_min(Heap_min *h, int p);
int filho2_min(Heap_min *h, int p);
int inserir_min(Heap_min *h, int v);
void exibir_heap_min(Heap_min *h);
void troca_min(Heap_min *h, int p1, int p2);
void controi_heap_de_vetor_min(Heap_min *h, int* vetor, int n);

#endif //PROVA_3_MIN_HEAP_H
