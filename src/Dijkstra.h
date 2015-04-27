/*
 * Dijkstra.h
 *
 *  Created on: Apr 26, 2015
 *      Author: piotr
 */
#pragma once
#ifndef DIJKSTRA_H_
#define DIJKSTRA_H_
#include "AdjacencyMatrix.h"
#include <climits>


class Dijkstra {
public:
	Dijkstra();
	virtual ~Dijkstra();
	int minDist(int *distance, bool *spt);
	void viewDijkstra();
	bool makeDijkstraAlgo(int first);

private:
	int *distance;
	bool *spt;
	int minimumValue=INT_MAX;
	int minimumIndex;

};

#endif /* DIJKSTRA_H_ */