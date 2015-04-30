/*
 * FordBellman.h
 *
 *  Created on: Apr 30, 2015
 *      Author: piotr
 */

#ifndef FORDBELLMAN_H_
#define FORDBELLMAN_H_
#include "AdjacencyMatrix.h"

class FordBellman {
public:
	FordBellman();
	virtual ~FordBellman();

	void initialize(const AdjacencyMatrix &am);
	void update();
	void check();
	void algorithm(const AdjacencyMatrix &am);
	void view();
private:
	int vertexCount;
	int vertexFirst;
	int edgeCount;
	int **wage;
	int **matrix;
	int *distance;
	int *predecessor;



};

#endif /* FORDBELLMAN_H_ */
