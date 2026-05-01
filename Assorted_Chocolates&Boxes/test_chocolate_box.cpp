#include <iostream>
#include "ChocolateBox.h"
using namespace std;

int main(){

    //Calls the default constructor 

	

    ChocolateBox cBox;
	cout << "Chocolates in cBox= " << endl;
    cout << cBox << endl;

    ChocolateBox cBoxOne(cBox);
    
    cout << "Now, you can fill Box One with assorted chocolates: " << endl;
    cin >> cBoxOne;

	cout << endl;
	cout << "Chocolates in cBoxOne= " << endl;
    cout << cBoxOne << endl;

	ChocolateBox cBoxTwo(2, 2, Chocolate("Dark", 0.75));

	cout << "Chocolates in cBoxTwo= " << endl;
	cout << cBoxTwo << endl;
	                                                      // can modify Chocolate entries now!
	ChocolateBox cBoxThree = cBoxOne + cBoxTwo;       //adds two ChocolateBox
	cout << "Chocolates in cBoxThree = " << endl;
	cout << cBoxThree << endl;
	
	cout << " \"1\"  will be printed if chocolates in cBoxOne and cBoxTwo are equal" << endl;
	cout << (cBoxOne == cBoxTwo) << endl; //if all chocolates in a box are of the same type
	
	if (!cBoxTwo)
		cout << "It is not \"Dark\"!" << endl; //if all chocolates in the box is Dark chocolate, then returns true
	else
		cout << "It is \"Dark\"." << endl;

	ChocolateBox cBoxFour;               //Creates a ChocolateBox with the default constructor

	cBoxFour = move(cBoxTwo);                              //moves cBoxtwo to cBoxFour
	cout << "Chocolates in cBoxFour= " << endl;
	cout << cBoxFour << endl;
	ChocolateBox cBoxFive = move(cBoxOne);         //moves cBoxOne to cBoxFive
	cout << "Chocolates in cBoxFive= " << endl;
	cout << cBoxFive << endl;

	cout << "Chocolates in cBoxOne= " << endl;
	cout << cBoxOne << endl;
	
	cout << "Chocolates in cBoxTwo= " << endl;
	cout << cBoxTwo << endl;
   
}
