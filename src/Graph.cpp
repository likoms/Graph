//============================================================================
// Name        : Graph.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include "AdjacencyMatrix.h"
#include "Screen.h"
using namespace std;

int main() {
	AdjacencyMatrix am;
	//Screen screen;
	//string path=screen.askForFilename();
	am.createFromFile("matrix.txt");
	am.viewMatrix();
	return 0;
}
