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
#include "Kruskal.h"
using namespace std;

int main() {

	AdjacencyMatrix am;
	Screen screen;
	Dijkstra dijkstra;
	FordBellman fb;
	Kruskal kl;
	//string path=screen.askForFilename();

	am.createFromFile("matrix.txt");
	kl.makeAlgo(am);
	//fb.BellmanFord(am);
	//fb.view(am);


	//am.viewMatrix();
	//dijkstra.makeDijkstraAlgo(am);
	//dijkstra.viewDijkstra(am);
	//fb.algorithm(am);
	//fb.view(am);
	//cout << first;


	//cout << am.dijkstras();
	return 0;
}
