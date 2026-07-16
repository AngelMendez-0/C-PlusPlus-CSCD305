#pragma once
#include "Chocolate.h"
#include <iostream>
using namespace std;

class ChocolateBox {

    friend bool operator==(const ChocolateBox&, const ChocolateBox&);
    friend bool operator!(const ChocolateBox&);
    friend ChocolateBox operator+(const ChocolateBox&, const ChocolateBox&);
    friend ostream& operator<<(ostream&, const ChocolateBox&);
    friend istream& operator>>(istream&, ChocolateBox&);
    friend bool isEmpty(const ChocolateBox&);

public:
    // delegate constructor
    ChocolateBox(int w, int h, Chocolate c);

    // delegating constructor
    ChocolateBox();
    ChocolateBox(int w, int h);
    ChocolateBox(Chocolate c);

    ChocolateBox(const ChocolateBox&);
    ChocolateBox(ChocolateBox&&);
    ChocolateBox& operator=(const ChocolateBox&);
    ChocolateBox& operator=(ChocolateBox&&);
    ~ChocolateBox();

private:
    int width;
    int height;
    Chocolate** choco;

}; // end of ChocolateBox