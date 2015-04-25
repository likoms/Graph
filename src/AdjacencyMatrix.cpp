/*
 * AdjacencyMatrix.cpp
 *
 *  Created on: 23 kwi 2015
 *      Author: Piotr
 */

#include "AdjacencyMatrix.h"

AdjacencyMatrix::AdjacencyMatrix() {
	this->vertexCount=0;
	this->vertexFirst=0;
	this->edgeCount=0;
	this->wage=0;
	this->matrix=0;

}

AdjacencyMatrix::~AdjacencyMatrix() {
	// TODO Auto-generated destructor stub
}

bool AdjacencyMatrix::createFromFile(string path) {
	fstream file;
	file.open(path.c_str(), ios::in);
	if (file.good()) {
		cout << "file opened" << endl;
		file >> this->edgeCount;
		file >> this->vertexCount;
		file >> this->vertexFirst;
		matrix = new int *[edgeCount];
		wage = new int *[edgeCount];
		//fill matrix by zeros
		for (int i = 0; i < vertexCount; i++) {
			for(int j=0; j<vertexCount;j++){
				matrix[i][j]=0;
				wage[i][j]=0;
				cout << matrix[i][j] << " " ;
				cout << wage[i][j] << " ";
			}
		}
		// fill matrix by 1
		for(int i=0; i<edgeCount; i++){
			int vertexF,vertexE,wag;
			file >> vertexF;
			file >> vertexE;
			file >> wag;
			matrix[vertexF][vertexE]=1;
			this->wage[vertexF][vertexE]=wag;
		}
		file.close();
		return true;
	}
	cout << "File does not opened" << endl;
	return false;
}

void AdjacencyMatrix::viewMatrix(){
	cout << " Adjacency Matrix ";
	for(int i=0; i<edgeCount; i++)
	{
			for(int j=0; i<edgeCount;i++){
				i+=vertexFirst;
				cout << this->matrix[i][j] << " ";
			}
			cout<< endl;
	}
}

