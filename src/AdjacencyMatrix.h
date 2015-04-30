/*
 * AdjacencyMatrix.h
 *
 *  Created on: 23 kwi 2015
 *      Author: Piotr
 */

#pragma once
#ifndef ADJACENCYMATRIX_H_
#define ADJACENCYMATRIX_H_
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <climits>
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

	//


	//getters and setters
	int getEdgeCount() const;
	void setEdgeCount(int edgeCount);
	int** getMatrix() const;
	void setMatrix(int** matrix);
	int getVertexCount() const;
	void setVertexCount(int vertexCount);
	int getVertexFirst() const;
	void setVertexFirst(int vertexFirst);
	int **getWage() const;
};

#endif /* ADJACENCYMATRIX_H_ */
