#include "Chocolate.h"
#include <iostream>
using namespace std;

// --- Cocoa lookup helper ---
static double cocoaForType(const string& t) {
    if (t == "Milk")  return 25.0;
    if (t == "White") return 0.0;
    if (t == "Ruby")  return 45.0;
    if (t == "Dark")  return 75.0;
    return 25.0; // fallback
}

Chocolate::Chocolate(const string choco, double c)
    : type(choco), cocoa(c) {}

Chocolate::Chocolate()
    : Chocolate("Milk", 25.0) {}

Chocolate::Chocolate(const string choco)
    : Chocolate(choco, cocoaForType(choco)) {}

Chocolate::Chocolate(double c)
    : Chocolate("Milk", c) {}

Chocolate::Chocolate(const Chocolate &other)
    : Chocolate(other.type, other.cocoa) {}

Chocolate& Chocolate::operator=(const Chocolate &other) {
    if (this != &other) {
        type  = other.type;
        cocoa = other.cocoa;
    }
    return *this;
} // end of operator

// setters
Chocolate& Chocolate::setType(string cType) {
    type = cType;
    return *this;
} // end of setType

Chocolate& Chocolate::setCocoaPercentage(double c) {
    cocoa = c;
    return *this;
} // end of setCocoaPercentage

// getters
string Chocolate::getType() const { return type; }
double Chocolate::getCocoaPercentage() const { return cocoa; }


bool operator==(const Chocolate &chocoOne, const Chocolate &chocoTwo) {
    return chocoOne.type == chocoTwo.type;
} // end of operator

Chocolate operator+(const Chocolate &chocoOne, const Chocolate &chocoTwo) {
    string newType = (chocoOne.type == chocoTwo.type)
                     ? chocoOne.type
                     : chocoOne.type + chocoTwo.type;
    double newCocoa = (chocoOne.cocoa + chocoTwo.cocoa) / 2.0;
    return Chocolate(newType, newCocoa);
} // end of operator

bool operator!(const Chocolate &choc) {
    return choc.type == "Dark";
} // end of operator

istream& operator>>(istream &in, Chocolate &choc) {
    cout << "Enter chocolate type (Milk/White/Ruby/Dark): ";
    in >> choc.type;
    // Normalize: capitalize first letter, lowercase the rest
    if (!choc.type.empty()) {
        choc.type[0] = toupper(choc.type[0]);
        for (size_t i = 1; i < choc.type.size(); ++i)
            choc.type[i] = tolower(choc.type[i]);
    } // end of if
    cout << "Enter cocoa percentage: ";
    in >> choc.cocoa;
    return in;
} // end of operator

ostream& operator<<(ostream &out, const Chocolate &choc) {
    out << choc.type << " (" << choc.cocoa << "%)";
    return out;
} // end of operator