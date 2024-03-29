#include <stdio.h>
#include "grafo.h"

//------------------------------------------------------------------------------

int main(void) {

	grafo g = le_grafo();

	//escreve_grafo(g);
	
	printf("Número de vértices = %d\n", n_vertices(g));
	printf("Número de arestas = %d\n", n_arestas(g));
	printf("Grau máximo = %d\n", grau_maximo(g));
	printf("Grau mínimo = %d\n", grau_minimo(g));
	printf("Grau médio = %d\n", grau_medio(g));
	regular(g) ? printf("Grafo regular\n") : printf("Grafo não regular\n");
	completo(g) ? printf("Grafo completo\n") : printf("Grafo não completo\n");
	conexo(g) ? printf("Grafo conexo\n") : printf("Grafo não conexo\n");
	bipartido(g) ? printf("Grafo bipartido\n") : printf("Grafo não bipartido\n");
	printf("Grafo com %d triângulos\n", n_triangulos(g));
	//complemento(g);
	
	destroi_grafo(g);

	return 0;
}
