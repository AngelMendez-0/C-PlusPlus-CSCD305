#include "Graph.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

bool Graph::loadCityInformation(const char* filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        return false;
    } // end of if

    string line;
    while (getline(file, line)) {
        if (line.empty()) continue;

        istringstream iss(line);
        char type;
        iss >> type;

        if (type == 'p') {
            float x, y, z;
            iss >> x >> y >> z;
            cityCoordinates.push_back(Point3D(x, y, z));
        } // end of if

        else if (type == 'c') {
            int a, b, c;
            iss >> a >> b >> c;
            cityIndices.push_back(a);
            cityIndices.push_back(b);
            cityIndices.push_back(c);
        } // end of else if
    } // end of while

    file.close();
    return !cityCoordinates.empty();
} // end of loadCityInfo

void Graph::Generate() {
    for (int i = 0; i + 2 < (int)cityIndices.size(); i += 3) {
        int a = cityIndices[i];
        int b = cityIndices[i + 1];
        int c = cityIndices[i + 2];

        Connectivity[a].insert(b);
        Connectivity[a].insert(c);
        Connectivity[b].insert(a);
        Connectivity[b].insert(c);
        Connectivity[c].insert(a);
        Connectivity[c].insert(b);
    } // end of for
} // end of generate

void Graph::Print() {
    cout << "Printing information for all cities :" << endl;
    for (auto& entry : Connectivity) {
        cout << "  [" << entry.first << " ]";
        for (int neighbor : entry.second) {
            cout << " " << neighbor;
        } // end of for
        cout << endl;

    } // end of for
} // end of print

void Graph::showConnectivity(int a) {
    cout << "Showing Connectivity for Node " << a << " :" << endl;

    if (Connectivity.find(a) == Connectivity.end()) {
        cout << "  City " << a << " not found." << endl;
        return;
    } // end of if

    const Point3D& cityA = cityCoordinates[a];
    for (int neighbor : Connectivity[a]) {
        const Point3D& cityB = cityCoordinates[neighbor];
        float dist = cityA.distanceTo(cityB);
        cout << "  [" << a << "-" << neighbor << "]: "
             << fixed << setprecision(4) << dist << endl;
    } // end of for
} // end of showConnectivity
