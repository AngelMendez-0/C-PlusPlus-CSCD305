#pragma once
#include <string>
#include <iostream>
using namespace std;

class Chocolate {
    string type;
    double cocoa;
public:
    // constructors
    Chocolate(const string choco, double c);  // delegatee
    Chocolate();                               // default: Milk, 25%
    Chocolate(const string choco);             // delegating
    Chocolate(double c);                       // delegating

    // copy constructor
    Chocolate(const Chocolate &other);
    Chocolate& operator=(const Chocolate &other);

    // setters
    Chocolate& setType(string cType);
    Chocolate& setCocoaPercentage(double c);

    // getters
    string getType() const;
    double getCocoaPercentage() const;

    // friend operators
    friend bool operator==(const Chocolate &chocoOne, const Chocolate &chocoTwo);
    friend Chocolate operator+(const Chocolate &chocoOne, const Chocolate &chocoTwo);
    friend bool operator!(const Chocolate &choc);
    friend istream& operator>>(istream&, Chocolate&);
    friend ostream& operator<<(ostream&, const Chocolate&);

}; // end of Chocolate