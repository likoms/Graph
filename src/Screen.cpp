/*
 * Screen.cpp
 *
 *  Created on: 23 kwi 2015
 *      Author: Piotr
 */

#include "Screen.h"

Screen::Screen() {
	// TODO Auto-generated constructor stub

}

Screen::~Screen() {
	// TODO Auto-generated destructor stub
}

int Screen::displayFirstScreen(){
    int choice=0;
    cout<<"_________				 ________|"<<endl;
	cout<<"1. Tablica                        |"<<endl;
	cout<<"2. Lista                          |"<<endl;
	cout<<"3. Kopiec                         |"<<endl;
	cout<<"4. Zamknij program                |"<<endl;

	cout<<"__________________________________|"<<endl << endl;
	cout<<"#Wybieram:  ";
	cin>>choice;
    this->clearScreen();
	return choice;
}

void Screen::clearScreen(){
	#ifdef _WIN32
        system("cls");
	#else
        system("clear");
	#endif
}
void Screen::wait(){
	cin.get();
	cin.get();
}

int Screen::displaySecondScreen(){
    int choice=0;
    cout<<"_____Wczytaj dane do  struktury____|"<<endl;
    cout<<"1. Zbuduj                          |"<<endl;
    cout<<"2. Utworz losowo                   |"<<endl;
    cout<<"3. Powrot                          |"<<endl;
    cout<<"___________________________________|"<<endl << endl;
    cin>>choice;
    this->clearScreen();
	return choice;

}
int Screen::displayThirdScreen(){
    int choice=0;
    cout<<"______Operacje na strukturze______|"<<endl;
	cout<<"1.Dodaj element                   |"<<endl;
	cout<<"2.Usun element                    |"<<endl;
	cout<<"3.Wyszukaj element                |"<<endl;
	cout<<"4.Wyswietl                        |"<<endl;
	cout<<"5.Powrot                          |"<<endl;
	cout<<"__________________________________|"<<endl << endl;
	cin>>choice;
	this->clearScreen();
	return choice;
    }

string Screen::askForFilename(){
	string data;
	cout << "Podaj nazwe pliku: ";
	cin >> data;
	return data;
}
