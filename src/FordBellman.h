/*
 * FordBellman.h
 *
 *  Created on: Apr 30, 2015
 *      Author: piotr
 */

#ifndef FORDBELLMAN_H_
#define FORDBELLMAN_H_
#include "AdjacencyMatrix.h"
#include <algorithm>
#include <climits>



class FordBellman{
public:
	FordBellman();
	virtual ~FordBellman();
	void BellmanFord(const AdjacencyMatrix& am);


private:
	//int infinity;




};

#endif /* FORDBELLMAN_H_ */
