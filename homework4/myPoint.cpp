//
//	COS 221 Homework #4
//	Author: Derek Haas
//	Date: 10/24/18
//	Description: Creates two points (x, y, z) and (x1, y2, z3) and calculates
//		     distance between them
//

#include <iostream>
#include "myPoint.h"

using namespace std;


int main(void){

	// Create point1 at (0,0,0)
	ThreeDPoint point1;
	
	// Create point2 at (10,30,25.5)
	ThreeDPoint point2(10, 30, 25.5);

	// Get the x, y, and z coordinates of both points
	double point1_xLoc = point1.getX();
	double point1_yLoc = point1.getY();
	double point1_zLoc = point1.getZ();

	double point2_xLoc = point2.getX();
	double point2_yLoc = point2.getY();
	double point2_zLoc = point2.getZ();

	
	// Print out the coordinates to the consol
	cout << "First Point: (" << point1_xLoc << ", " << point1_yLoc << ", " << point1_zLoc << ")" << endl;
	cout << "Second Point: (" << point2_xLoc << ", " << point2_yLoc << ", " << point2_zLoc << ")" << endl;

	// Calculate the distance and print
	cout << "Distance between these points is: " << point1.distance(point2) << endl;

	return 0;	
}
