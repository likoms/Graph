//============================================================================
// Name        : Graph.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Dijkstra.h"
#include "Screen.h"
using namespace std;

int main() {
	AdjacencyMatrix am;
	Screen screen;
	Dijkstra dijkstra;
	//string path=screen.askForFilename();
	am.createFromFile("matrix.txt");
	//am.viewMatrix();

	dijkstra.makeDijkstraAlgo();
	dijkstra.viewDijkstra();
	//cout << first;


	//cout << am.dijkstras();
	return 0;
}
