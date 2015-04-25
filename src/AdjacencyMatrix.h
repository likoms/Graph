/*
 * AdjacencyMatrix.h
 *
 *  Created on: 23 kwi 2015
 *      Author: Piotr
 */

#ifndef ADJACENCYMATRIX_H_
#define ADJACENCYMATRIX_H_
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
using namespace std;



class AdjacencyMatrix{

private:
	int vertexCount;
	int vertexFirst;
	int edgeCount;
	int **wage;
	int **matrix;

public:
	AdjacencyMatrix();
	virtual ~AdjacencyMatrix();
	bool createFromFile(string path);
	void viewMatrix();



};

#endif /* ADJACENCYMATRIX_H_ */
