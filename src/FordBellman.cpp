/*
 * FordBellman.cpp
 *
 *  Created on: Apr 30, 2015
 *      Author: piotr
 */

#include "FordBellman.h"


FordBellman::FordBellman() {
	this->distance=0;
	this->predecessor=0;
	am = 0;

}

FordBellman::~FordBellman() {
	// TODO Auto-generated destructor stub
}



void FordBellman::initialize(const AdjacencyMatrix& am)
{
	//cout << "Mess";

	int vertexCount=am.getVertexCount();
	int vertexFirst=am.getVertexFirst();
	//int edgeCount=am.getEdgeCount();
	//int **wage=am.getWage();
	//int **matrix=am.getMatrix();

	//cout << vertexCount;
	//cout << vertexFirst;
int *distance= new int[vertexCount];
int *predecessor= new int[vertexCount];
for(int i=1;i<=vertexCount;i++)
 {
   distance[i]=INT_MAX;
   predecessor[i]=0;
 }
 distance[vertexFirst]=0;
}

void FordBellman::update(const AdjacencyMatrix& am)
{
	int vertexCount = am.getVertexCount();
		int **wage=am.getWage();
 for(int i=1;i<=vertexCount-1;i++)
 {
  for(int u=1;u<=vertexCount;u++)
  {
   for(int v=1;v<=vertexCount;v++)
   {
    if(wage[u][v]!=0)
    {
     if(distance[v]>distance[u]+wage[u][v])
     {
      distance[v]=distance[u]+wage[u][v];
      predecessor[v]=u;
      //cout << distance[v];
      //cout << predecessor[v];
     }
    }
   }
  }
 }
}

void FordBellman::check(const AdjacencyMatrix &am)
{
	int vertexCount = am.getVertexCount();
	int **wage=am.getWage();
	for(int u=1;u<=vertexCount;u++)
 {
  for(int v=1;v<=vertexCount;v++)
  {
   if(wage[u][v]!=0)
   {
    if(distance[v]>distance[u]+wage[u][v])
    {
     cout << "Does not exist";
     return;
    }
   }
  }
 }

cout << "\n\nThere is no negative weight cycle and\n";
}

void FordBellman::view(const AdjacencyMatrix &am){
	int vertexCount=am.getVertexCount();
	cout <<" ****** The final paths and the distacnes are ******\n\n";
	for(int i=0;i<vertexCount;i++){
		cout << "Vertex" << i << " : " << distance[i]<<endl ;
	}

}


void FordBellman::algorithm(AdjacencyMatrix &am)
{
 initialize(am);
 update(am);
 check(am);
}
