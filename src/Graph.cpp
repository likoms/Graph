//============================================================================
// Name        : Graph.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Dijkstra.h"
#include "AdjacencyMatrix.h"
#include "Screen.h"
using namespace std;

int main() {
	AdjacencyMatrix am;
	Screen screen;
	Dijkstra dijkstra;
	//string path=screen.askForFilename();
	am.createFromFile("matrix.txt");
	//am.viewMatrix();
	int first=am.getVertexFirst();
	//dijkstra.makeDijkstraAlgo(first);
	//dijkstra.viewDijkstra();
	cout << first;
	am.makeDijkstraAlgo();
	am.viewDijkstra();
	return 0;
}
