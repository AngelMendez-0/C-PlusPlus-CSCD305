#include <iostream>
#include "Graph.h"

using namespace std;

int main(int argc, char** argv){
	Graph g;

	bool cityInformation = g.loadCityInformation("Terrain.obj");
	
	if (!cityInformation) {
		cerr << "No information available";
		return 0;
	}
	
	g.Generate();

	g.Print();

	g.showConnectivity(0);
	g.showConnectivity(13);
	return 0;
}


