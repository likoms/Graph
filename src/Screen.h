/*
 * Screen.h
 *
 *  Created on: 23 kwi 2015
 *      Author: Piotr
 */

#ifndef SCREEN_H_
#define SCREEN_H_
#include <string>
#include <iostream>
#include <cstdio>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

class Screen {
public:
	Screen();
	virtual ~Screen();
	int displayFirstScreen();
	int displaySecondScreen();
	int displayThirdScreen();
	void clearScreen();
	void wait();
	string askForFilename();
};

#endif /* SCREEN_H_ */
