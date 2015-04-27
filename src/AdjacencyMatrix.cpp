/*
 * AdjacencyMatrix.cpp
 *
 *  Created on: 23 kwi 2015
 *      Author: Piotr
 */
// TODO think about means of vertexFirst;
// TODO dij and bell algo

#include "AdjacencyMatrix.h"

AdjacencyMatrix::AdjacencyMatrix() {
	this->vertexCount=0;
	this->vertexFirst=0;
	this->edgeCount=0;
	this->matrix=0;
	this->wage=0;
	//
	this->distance=0;
	this->spt=0;
	this->minimumValue=INT_MAX;
	this->minimumIndex=0;


}

AdjacencyMatrix::~AdjacencyMatrix() {

}


bool AdjacencyMatrix::createFromFile(string path) {
	fstream file;
	file.open(path.c_str(), fstream::in);
	if (file.good())
	{
		int vertexF,vertexE,wag;
		//cout << "file opened" << endl;
		file >> this->edgeCount;
		file >> this->vertexCount;
		file >> this->vertexFirst;
		//cout << this->edgeCount;
		//cout << this->vertexCount;
		//cout << this->vertexFirst;

		matrix = new int *[vertexCount];
		wage   = new int *[vertexCount];

		for (int i = 0; i < vertexCount; i++)
		{
			matrix[i]=new int[vertexCount];
			wage[i]=new int[vertexCount];
		}

		//fill matrix by zeros
		for (int i = 0; i < vertexCount; i++)
		{

			for(int j=0; j<vertexCount;j++)
			{
				matrix[i][j]=0;
				wage[i][j]=0;
				//cout << matrix[i][j];
				//cout << wage[i][j];
			}
			//cout << endl;
		}


		// fill matrix by 1

		for(int i=0; i<edgeCount; i++)
		{
			file >> vertexF >> vertexE >> wag;
			this->matrix[vertexF][vertexE]=1;
			this->wage[vertexF][vertexE]=wag;
			//cout << matrix[vertexF][vertexE];
			//cout << wage[vertexF][vertexE];
		}

		file.close();
		return true;
	}
	//cout << "File does not opened" << endl;
	return false;
}
void AdjacencyMatrix::viewMatrix(){
	cout << " Adjacency Matrix " << endl;
	for (int i = 0; i < vertexCount; i++)
			{

				for(int j=0; j<vertexCount;j++)
				{
					cout << matrix[i][j];

				}
				cout << endl;
			}
	cout << " Matrix wages " << endl;
	for (int i = 0; i < vertexCount; i++)
				{

					for(int j=0; j<vertexCount;j++)
					{
						cout << " "<<wage[i][j] << " ";

					}
					cout << endl;
				}

}
//Dijkstra
int AdjacencyMatrix::minDist(int *distance, bool *spt){
	for(int i=vertexFirst; i<vertexCount+vertexFirst; i++)
	{
			if(spt[i]==false && distance[i]<=minimumValue){
				minimumValue = distance[i];
				minimumIndex=i;
			}
		}

		return minimumValue;
}

bool AdjacencyMatrix::makeDijkstraAlgo(){

		return false;
	}

void AdjacencyMatrix::viewDijkstra()
{
	for(int i=0; i<vertexCount;i++)
	{
		cout <<"Vertex " << i+1 << " : " << distance[i]<< endl;
	}

}

int AdjacencyMatrix::getEdgeCount() const {
	return edgeCount;
}

void AdjacencyMatrix::setEdgeCount(int edgeCount) {
	this->edgeCount = edgeCount;
}

int** AdjacencyMatrix::getMatrix() const {
	return matrix;
}

void AdjacencyMatrix::setMatrix(int** matrix) {
	this->matrix = matrix;
}

int AdjacencyMatrix::getVertexCount() const {
	return vertexCount;
}

void AdjacencyMatrix::setVertexCount(int vertexCount) {
	this->vertexCount = vertexCount;
}

int AdjacencyMatrix::getVertexFirst() const {
	return vertexFirst;
}

void AdjacencyMatrix::setVertexFirst(int vertexFirst) {
	this->vertexFirst = vertexFirst;
}

int** AdjacencyMatrix::getWage() const {
	return wage;
}


