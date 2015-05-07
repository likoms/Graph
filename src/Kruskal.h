/*
 * Kruskal.h
 *
 *  Created on: May 7, 2015
 *      Author: piotr
 */

#ifndef KRUSKAL_H_
#define KRUSKAL_H_
#include "AdjacencyMatrix.h"

class Kruskal {
public:
	Kruskal();
	virtual ~Kruskal();
	bool makeAlgo(const AdjacencyMatrix& am);
};

#endif /* KRUSKAL_H_ */
