#include "ChocolateBox.h"
#include <iostream>
using namespace std;

static Chocolate** allocGrid(int w, int h, const Chocolate& fill) {
    Chocolate** grid = new Chocolate*[w];
    for (int i = 0; i < w; ++i) {
        grid[i] = new Chocolate[h];
        for (int j = 0; j < h; ++j)
            grid[i][j] = fill;
    }
    return grid;
} // end of alloGrid

static void freeGrid(Chocolate** grid, int w) {
    if (!grid) return;
    for (int i = 0; i < w; ++i)
        delete[] grid[i];
    delete[] grid;
} // end of freeGrid

// delagate construct
ChocolateBox::ChocolateBox(int w, int h, Chocolate c)
    : width(w), height(h), choco(allocGrid(w, h, c)) {}

// default construct
ChocolateBox::ChocolateBox()
    : ChocolateBox(2, 2, Chocolate()) {}

// delegate size
ChocolateBox::ChocolateBox(int w, int h)
    : ChocolateBox(w, h, Chocolate()) {}

// delegate chocolate
ChocolateBox::ChocolateBox(Chocolate c)
    : ChocolateBox(2, 2, c) {}

// copy construct
ChocolateBox::ChocolateBox(const ChocolateBox &other)
    : width(other.width), height(other.height),
      choco(allocGrid(other.width, other.height, Chocolate())) {
    for (int i = 0; i < width; ++i)
        for (int j = 0; j < height; ++j)
            choco[i][j] = other.choco[i][j];
} // end of ChocolateBox

// move construct
ChocolateBox::ChocolateBox(ChocolateBox &&other)
    : width(other.width), height(other.height), choco(other.choco) {
    other.width  = 0;
    other.height = 0;
    other.choco  = nullptr;
}

// copy operator
ChocolateBox& ChocolateBox::operator=(const ChocolateBox &other) {
    if (this == &other) return *this;
    freeGrid(choco, width);
    width  = other.width;
    height = other.height;
    choco  = allocGrid(width, height, Chocolate());
    for (int i = 0; i < width; ++i)
        for (int j = 0; j < height; ++j)
            choco[i][j] = other.choco[i][j];
    return *this;
} // end of operator

// move operator
ChocolateBox& ChocolateBox::operator=(ChocolateBox &&other) {
    if (this == &other) return *this;
    freeGrid(choco, width);
    width        = other.width;
    height       = other.height;
    choco        = other.choco;
    other.width  = 0;
    other.height = 0;
    other.choco  = nullptr;
    return *this;
} // end of operator

// destruct
ChocolateBox::~ChocolateBox() {
    freeGrid(choco, width);
} // end of destruct


// friend functions
bool operator==(const ChocolateBox &a, const ChocolateBox &b) {
    if (a.width != b.width || a.height != b.height) return false;
    for (int i = 0; i < a.width; ++i)
        for (int j = 0; j < a.height; ++j)
            if (!(a.choco[i][j] == b.choco[i][j])) return false;
    return true;
} // end of operator

bool operator!(const ChocolateBox &box) {
    if (!box.choco) return false;
    for (int i = 0; i < box.width; ++i)
        for (int j = 0; j < box.height; ++j)
            if (!(!box.choco[i][j])) return false;
    return true;
} // end of opertor

ChocolateBox operator+(const ChocolateBox &a, const ChocolateBox &b) {
    int newW = min(a.width,  b.width);
    int newH = min(a.height, b.height);
    ChocolateBox result(newW, newH);
    for (int i = 0; i < newW; ++i)
        for (int j = 0; j < newH; ++j)
            result.choco[i][j] = a.choco[i][j] + b.choco[i][j];
    return result;
} // end of operator

ostream& operator<<(ostream &out, const ChocolateBox &box) {
    if (!box.choco) {
        out << "(empty box)" << endl;
        return out;
    }
    for (int i = 0; i < box.width; ++i) {
        for (int j = 0; j < box.height; ++j) {
            out << "[" << box.choco[i][j] << "] ";
        }
        out << endl;
    }
    return out;
} // end of operator

istream& operator>>(istream &in, ChocolateBox &box) {
    if (!box.choco) return in;
    for (int i = 0; i < box.width; ++i)
        for (int j = 0; j < box.height; ++j) {
            cout << "Chocolate [" << i << "][" << j << "]: ";
            in >> box.choco[i][j];
        }
    return in;
} // end of operator

bool isEmpty(const ChocolateBox &box) {
    return box.choco == nullptr;
}// end of is empty