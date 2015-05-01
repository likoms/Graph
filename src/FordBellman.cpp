/*
 * FordBellman.cpp
 *
 *  Created on: Apr 30, 2015
 *      Author: piotr
 */

#include "FordBellman.h"

FordBellman::FordBellman() {
	infinity = INT_MAX;

}

FordBellman::~FordBellman() {
	// TODO Auto-generated destructor stub
}

void FordBellman::BellmanFord(const AdjacencyMatrix& am) {
	int vertexCount = am.getVertexCount();
	int vertexFirst = am.getVertexFirst();
	int **wage = am.getWage();
	//cout << vertexCount<<endl;
	//cout << vertexFirst<<endl;

	int *dist = new int[vertexCount];
	int *prev = new int[vertexCount];

	// Step 1: Initialize distances from src to all other vertices as INFINITE
	for (int i = 0; i < vertexCount; i++) {
		dist[i] = infinity;
	}
	dist[vertexFirst] = 0;

	// Step 2: Relax all edges |V| - 1 times. A simple shortest path from src
	// to any other vertex can have at-most |V| - 1 edges
	// iterate for all vertex
	for (int k = 0; k < vertexCount - 1; k++) {
		//Iterate for source vertex
		for (int source = 0; source < vertexCount; source++) {
			// iterate for destination vertex
			for (int dest = 0; dest < vertexCount; dest++)
			{
				//cout << wage[source][dest];

				if (dist[dest]==infinity)
				{
					if (dist[source] + wage[source][dest] > infinity) {
						dist[dest] = dist[source] + wage[source][dest];
						prev[dest] = source;
					}
				}else
				{
					if (dist[source] + wage[source][dest] < dist[dest])
					{
							dist[dest] = dist[source] + wage[source][dest];
					}
				}
				//for second iteration


			}
			cout << endl;

		}
	}
	//print out
	for (int i = 0; i < vertexCount; i++) {
		cout << dist[i] << endl;
	}

	// Step 3: check for negative-weight cycles.  The above step guarantees
	// shortest distances if graph doesn't contain negative weight cycle.
	// If we get a shorter path, then there is a cycle.
	/*
	 for (int i = 0; i < E; i++)
	 {
	 int u = graph->edge[i].src;
	 int v = graph->edge[i].dest;
	 int weight = graph->edge[i].weight;
	 if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
	 printf("Graph contains negative weight cycle");
	 }

	 printArr(dist, V);
	 */

	delete[] dist;
	delete[] prev;

}

