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
			this->matrix[vertexF-1][vertexE-1]=1;
			this->wage[vertexF-1][vertexE-1]=wag;
			//cout << matrix[vertexF][vertexE];
			//cout << wage[vertexF][vertexE];
		}

		file.close();
		return true;
	}
	cout << "File does not opened" << endl;
	return false;
}



void AdjacencyMatrix::viewMatrix(){
	cout << " Adjacency Matrix " << endl;
	for (int i = 0; i < vertexCount; i++)
			{

				for(int j=0; j<edgeCount;j++)
				{
					cout << matrix[i][j];

				}
				cout << endl;
			}
	cout << " Matrix wages " << endl;
	for (int i = 0; i < vertexCount; i++)
				{

					for(int j=0; j<edgeCount;j++)
					{
						cout << " "<<wage[i][j] << " ";

					}
					cout << endl;
				}

}

