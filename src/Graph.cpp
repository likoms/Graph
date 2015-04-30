//============================================================================
// Name        : Graph.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Dijkstra.h"
#include "FordBellman.h"
#include "Screen.h"
using namespace std;

int main() {
	AdjacencyMatrix am;
	Screen screen;
	Dijkstra dijkstra;
	FordBellman fb;
	//string path=screen.askForFilename();
	am.createFromFile("matrix.txt");
	//am.viewMatrix();

	//dijkstra.makeDijkstraAlgo(am);
	//dijkstra.viewDijkstra(am);
	fb.initialize(am);
	//fb.algorithm(am);
	//fb.view();
	//cout << first;


	//cout << am.dijkstras();
	return 0;
}
