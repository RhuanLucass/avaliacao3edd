//
// Created by rhuan on 08/02/2022.
//

#ifndef PROVA_3_GRAFO_H
#define PROVA_3_GRAFO_H

typedef struct grafo Grafo;
typedef struct vertice_adj Vertice;
typedef struct grafo_adj Grafo_Adj;
Grafo* criar_grafo(int v);
void alocar_matriz(int *** m, int l, int c, int val) ;
void inserir_aresta(Grafo *g, int v1, int v2, int peso);
void remover_aresta(Grafo *g, int v1, int v2);
Grafo_Adj* criar_grafo_adj (int v);
Vertice* novo_vertice (int v, Vertice *prox);
void inserir_aresta_adj(Grafo_Adj * g, int v1, int v2);
void mostrar_grafo(Grafo *g);
void mostrar_grafo_adj(Grafo_Adj *g);


int obter_adjacentes_m(Grafo *g, int v);
int obter_adjacentes_l(Grafo_Adj *g, int v);
int grafo_orientado(Grafo *g);

#endif //PROVA_3_GRAFO_H
