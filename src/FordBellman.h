/*
 * FordBellman.h
 *
 *  Created on: Apr 30, 2015
 *      Author: piotr
 */

#ifndef FORDBELLMAN_H_
#define FORDBELLMAN_H_
#include "AdjacencyMatrix.h"
#include <climits>



class FordBellman{
public:
	FordBellman();
	virtual ~FordBellman();
	void initialize(const AdjacencyMatrix& am);
	void update(const AdjacencyMatrix& am);
	void check(const AdjacencyMatrix &am);
	void algorithm(AdjacencyMatrix &am);
	void view(const AdjacencyMatrix &am);

private:
	int *distance;
	int *predecessor;
	AdjacencyMatrix *am;



};

#endif /* FORDBELLMAN_H_ */
