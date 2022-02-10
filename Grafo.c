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
    g->V = v;
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

void mostrar_grafo_adj(Grafo_Adj *g) {
    printf("GRAFO:\n");
    int i,j;
    Vertice  *aux;
    for (i = 0; i < g->V; i++) {
        printf("%d: ", i);
        for (aux = g->adj[i]; aux != NULL; aux = aux->prox) {
            printf(" %d ", aux->v);
            j++;
        }
        printf("\n");
    }
    printf("\n");
}


//5-a)
int obter_adjacentes_m(Grafo *g, int v) {
    printf("Nos adjacentes de %d: ", v);
    for (int i = 0; i < g->V; i++) {
        if (g->adj[v][i] != 0) {
            printf("%d  ", i);
        }
    }
    return 0;
}

//5-b)
int obter_adjacentes_l(Grafo_Adj *g, int v) {
    Vertice  *temp;
    printf("Nos adjacentes de %d: ", v);
    for (temp = g->adj[v]; temp != NULL; temp = temp->prox) {
        printf("%d  ", temp->v);
    }
    printf("\n");
}

//6
int grafo_orientado(Grafo *g) {
    for (int i = 0; i < g->V; i++) {
        for (int j = 0; j < g->V; j++)
            if (g->adj[i][j] != g->adj[j][i]) {
                printf("\nO grafo eh orientado\n\n");
                return 1;
            }
    }
    printf("\n\nO grafo nao eh orientado\n");
    return 0;
}

#include "Grafo.h"
