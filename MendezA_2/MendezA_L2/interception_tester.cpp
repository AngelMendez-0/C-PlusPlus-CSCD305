/* Test file for Assignment 2 */

#include <iostream>
#include "Radar.h"
#include "Airspace.h"
#include "Point3D.h"
using namespace std;

int main()
{
	// Variables to receive values from user
	double radius, height, centerX, centerY, centerZ, positionX, positionY, positionZ;
	char exitInfo;
	while (true) {
		cout << "\nConstructing the airspace." << endl;
		cout << "Enter the airspace radius: " << endl;
		cin >> radius;

		cout << "Enter the airspace height : " << endl;
		cin >> height;

		cout << "\nNow the center info." << endl;
		cout << "Enter the x coordinate of the center: " << endl;
		cin >> centerX;
		cout << "Enter the y coordinate of the center: " << endl;
		cin >> centerY;
		cout << "Enter the z coordinate of the center: " << endl;
		cin >> centerZ;


		cout << "\nPosition of the enemy plane." << endl;

		cout << "Enter the x coordinate of the enemy plane: " << endl;
		cin >> positionX;
		cout << "Enter the y coordinate of the enemy plane: " << endl;
		cin >> positionY;
		cout << "Enter the z coordinate of the enemy plane: " << endl;
		cin >> positionZ;


		// Creating the class instances
		Point3D pos{ positionX, positionY, positionZ };

		Point3D center{ centerX, centerY, centerZ };

		Airspace s{ radius, height, center };

		Radar r{ pos };


		r.checkViolation(s);

		cout << "Type 'C'/'c' to continue!" << endl;

		cin >> exitInfo;

		if (exitInfo != 'C' && exitInfo != 'c')
			exit(0);

		else
			cout << "Provide another set of info!" << endl;
			
	}
	
		

		

	return 0;
}