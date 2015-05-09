/*
 * Prim.h
 *
 *  Created on: May 9, 2015
 *      Author: piotr
 */

#ifndef PRIM_H_
#define PRIM_H_
#include "AdjacencyMatrix.h"

class Prim {
public:
	Prim();
	virtual ~Prim();
	bool makeAlgo(const AdjacencyMatrix& am);
};

#endif /* PRIM_H_ */
