#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "Set.h"

struct graph {
	int nV;
    bool **adj; // g->adj[i][j] == true if edge from i to j
};

typedef int Vertex;
typedef struct graph *Graph;

Set reachable(Graph g, Vertex src) {
	Set s = SetNew();

	doReachable(g, src, s);
	
	return s;
}

void doReachable(Graph g, Vertex v, Set s) {
	SetInsert(s, v);
	for (int i = 0; i < g->nV; i++) {
		if (g->adj[v][i] == true && !SetContains(s, i)) {
			// vertex i is a neighbour of v, and hasnt yet been visited
			doReachable(g, i, s);
		}
	}
}

