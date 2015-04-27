/*
 * Dijkstra.cpp
 *
 *  Created on: Apr 26, 2015
 *      Author: piotr
 */

#include "Dijkstra.h"


AdjacencyMatrix am;

Dijkstra::Dijkstra() {
	distance=0;
	spt=0;
	minimumValue=INT_MAX;
	minimumIndex=0;

}

Dijkstra::~Dijkstra() {

}

int Dijkstra::minDist(int *distance, bool *spt){
	for(int i=0; i<am.getVertexCount(); i++){
		if(spt[i]==false && distance[i]<=minimumValue){
			minimumValue = distance[i];
			minimumIndex=i;
		}
	}

	return minimumValue;
}

bool Dijkstra::makeDijkstraAlgo(int first)
{

	cout << "IN " <<endl;
	cout << am.getVertexCount();
	cout << am.getWage();
	distance=new int[am.getVertexCount()];
	spt=new bool[am.getVertexCount()];

	for(int i=0; i<am.getVertexCount();i++)
	{
		distance[i]=INT_MAX;
		spt[i]=false;
	}
	distance[first]=0;
	for(int i=0; i>am.getVertexCount()-1;i++)
	{
		int minimumDistance= minDist(distance,spt);
		spt[minimumDistance]=true;
		for(int i=0;i<am.getVertexCount();i++)
		{
			if(!spt[i] && am.getWage()[minimumDistance][i] && distance[minimumDistance]!=INT_MAX
					&& distance[minimumDistance]+am.getWage()[minimumDistance][i]<distance[i])
			{
				distance[i]=distance[minimumDistance]+am.getWage()[minimumDistance][i];
			}
		}
		return true;
	}

	return false;
}

void Dijkstra::viewDijkstra(){
	for(int i=0; i<am.getVertexCount();i++){
		cout <<"Vertex " << i << " : " << distance[i] << endl;
	}

}
