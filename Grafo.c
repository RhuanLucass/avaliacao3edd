//
// Created by rhuan on 08/02/2022.
//

#include "Grafo.h"
#include <stdlib.h>
#include <stdio.h>

struct grafo {
    int V;
    int A;
    int **adj;
};
struct grafo_adj {
    int V;
    int A;
    Vertice **adj;
};
struct vertice_adj {
    int v;
    Vertice *prox;
};
Grafo* criar_grafo(int v) {
    Grafo * g = (Grafo*) malloc(sizeof(Grafo));
    g->V = v;
    g->A = 0;
    alocar_matriz(&(g->adj), v, v, 0);
    return g;
}
void alocar_matriz(int *** m, int l, int c, int val) {
    int **maux = malloc(l*sizeof(int *));
    int i, j;
    for (i = 0; i < l; i++)
        maux[i] = malloc(c*sizeof(int));
    for (i = 0; i < l; i++)
        for (j = 0; j < c; j++)
            maux[i][j] = val;
    *m = maux;
}
void inserir_aresta(Grafo *g, int v1, int v2, int peso) {
    if (g->adj[v1][v2] ==0) {
        g->adj[v1][v2] = peso;
        g->A++;
    }
}
void remover_aresta(Grafo *g, int v1, int v2) {
    if (g->adj[v1][v2] !=0) {
        g->adj[v1][v2] = 0;
        g->A--;
    }
}
Grafo_Adj* criar_grafo_adj (int v) {
    Grafo_Adj * g = malloc (sizeof (Grafo_Adj));
    g->V = 0;
    g->A = 0;
    g->adj = malloc(v*sizeof(Vertice*));
    int i;
    for (i = 0; i <v; i++)
        g->adj[i] = NULL;
    return g;
}
Vertice* novo_vertice (int v, Vertice *prox) {
    Vertice *a = malloc(sizeof(Vertice));
    a->v = v;
    a->prox = prox;
    return a;
}
void inserir_aresta_adj(Grafo_Adj *g, int v1, int v2) {
    Vertice * aux;
    for (aux = g->adj[v1]; aux!= NULL; aux = aux->prox) {
        if (aux->v == v2)
            return;
    }
    g->adj[v1] = novo_vertice(v2, g->adj[v1]);
    g->A++;
}
void mostrar_grafo(Grafo *g) {
    printf("GRAFO:\n");
    int i,j;
    for (i = 0; i < g->V; i++) {
        printf("%d: ", i);
        for (j = 0; j < g->V; j++)
            if (g->adj[i][j] !=0)
                printf("%d ", j);
        printf("\n");
    }
    printf("\n");
}

#include "Grafo.h"
