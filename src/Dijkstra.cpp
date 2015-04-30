/*
 * Dijkstra.cpp
 *
 *  Created on: Apr 26, 2015
 *      Author: piotr
 */

#include "Dijkstra.h"




Dijkstra::Dijkstra() {

	distance=0;
	spt=0;


}

Dijkstra::~Dijkstra() {

}
int Dijkstra::minDist(int *distance, bool *spt,int vertexCount){
	 // Initialize min value

		   int min = INT_MAX, min_index;

		   for (int v = 0; v < vertexCount; v++)
		     if (spt[v] == false && distance[v] <= min)
		         min = distance[v], min_index = v;

		   return min_index;
}

bool Dijkstra::makeDijkstraAlgo(const AdjacencyMatrix& am)
{

	int vertexCount=am.getVertexCount();
	int vertexFirst=am.getVertexFirst();
	int **wage=am.getWage();

	distance=new int[vertexCount]; //store shortest distance from 0 to i
			spt=new bool[vertexCount];     //return true for SPT distance from start to i

			//Initialize by INTMAX and false
			for(int i=0;i<am.getVertexCount();i++)
			{
				spt[i]=false;
				distance[i]=INT_MAX;
			}
			distance[vertexFirst]=0; // because from first to first vertex is 0, because we don't move

			//Find SP for all vertex
			for (int count = 0; count < vertexCount-1; count++)
			     {
			       // Pick the minimum distance vertex from the set of vertices not
			       // yet processed. u is always equal to src in first iteration.
			       int u = minDist(distance, spt,vertexCount);


			       // Mark the picked vertex as processed
			       spt[u] = true;

			       // Update dist value of the adjacent vertices of the picked vertex.
			       for (int v = 0; v < am.getVertexCount(); v++)

			         // Update dist[v] only if is not in sptSet, there is an edge from
			         // u to v, and total weight of path from src to  v through u is
			         // smaller than current value of dist[v]
			         if (!spt[v] && wage[u][v] && distance[u] != INT_MAX
			                                       && distance[u]+wage[u][v] < distance[v])
			            distance[v] = distance[u] + wage[u][v];
			     }

			return true;
}



void Dijkstra::viewDijkstra(const AdjacencyMatrix& am){

	for(int i=0; i<am.getVertexCount();i++){
		cout <<"Vertex " << i << " : " << distance[i] << endl;
	}

}
