/*
 * FordBellman.cpp
 *
 *  Created on: Apr 30, 2015
 *      Author: piotr
 */
//TODO refactor graph
#include "FordBellman.h"

FordBellman::FordBellman() {


}

FordBellman::~FordBellman() {
	// TODO Auto-generated destructor stub
}

void FordBellman::BellmanFord(const AdjacencyMatrix& am) {
	const int infinity=10000;

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
		prev[i]=-1;
	}

	dist[vertexFirst] = 0;
	// Step 2: Relax all edges |V| - 1 times. A simple shortest path from src
	// to any other vertex can have at-most |V| - 1 edges
	// iterate for all vertex
	for (int k = 0; k < vertexCount-1; k++) {
		//Iterate for source vertexx
		for (int i = 0; i < vertexCount; i++)
		{
			// iterate for destination vertex
			for (int j = 0; j < vertexCount; j++)
			{

				 if (dist[i] > dist[j] + wage[j][i] && wage[j][i]!=0) {
				                    dist[i] = dist[j] + wage[j][i];
				                }

		}
	}
}

	for (int i = 0; i < vertexCount; i++) {
	        for (int j = 0; j < vertexCount; j++) {
	            if (dist[i] > dist[j] + wage[j][i] && wage[j][i]!=0) {
	                cout << "The graph contains a negative cycle!";
	            }
	        }
	    }
	//print out
	for (int i = 0; i < vertexCount; i++) {
		cout << dist[i] << endl;
	}


	delete[] dist;
	delete[] prev;

}

