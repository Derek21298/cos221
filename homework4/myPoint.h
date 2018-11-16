//
//	COS 221 Homework #4
//	Author: Derek Haas
//	Date: 10/24/18
//	Description: Creates two points (x, y, z) and (x1, y2, z3) and calculates
//		     distance between them
//

#include <iostream>
#include <cmath>

using namespace std;


// Create a class that makes a 2D point (x,y)
class MyPoint {

	protected:

		double x;
		double y;

	public:

		MyPoint();			
		MyPoint(double, double);
		double getX();
		double getY();
		double distance(MyPoint);

};

// No arg constructor to make point at (0,0)
MyPoint::MyPoint() {
	x = 0;
	y = 0;
}

// Constructor to make point at (xLoc, yLoc)
MyPoint::MyPoint(double xLoc, double yLoc) {
	x = xLoc;
	y = yLoc;
}

// Return the value of the x coordinate
double MyPoint::getX() {
	return x;
}

// Return the value of the y coordinate
double MyPoint::getY() {
	return y;
}

// Calculate the distance between the two points and return it
// sqrt( (x1-x2)^2 + (y1-y2)^2 ) is the distance between points
double MyPoint::distance(MyPoint thePoint) {
	double distance = sqrt(pow(thePoint.y - y, 2) + pow(thePoint.x - x, 2));
	return distance;
}

// Create derived class "ThreeDPoint" of "MyPoint"
class ThreeDPoint: public MyPoint {

	private: 
		
		double z;
		
	public:
		ThreeDPoint();
		ThreeDPoint(double, double, double);
		double getZ();
		const double distance(const ThreeDPoint&);
};

// No arg constructor to set the z coordinate as 0
// MyPoint no arg constructor is also called to initialize x and y  
ThreeDPoint::ThreeDPoint() {
	z = 0;
}

// Constructor to set the z coordinate as zLoc
// MyPoint constructor is also called to initialize x and y
ThreeDPoint::ThreeDPoint(double xLoc, double yLoc, double zLoc) : MyPoint(xLoc, yLoc) {
	z = zLoc;
}

// Return the value of the z coordinate
double ThreeDPoint::getZ() {
	return z;
}

// Calculate the distance between two 3D points and return it
// sqrt( (x1-x2)^2 + (y1-y2)^2 + (z1-z2)^2 ) is the distance between the points
const double ThreeDPoint::distance(const ThreeDPoint& theCoords) {
	const double distance = sqrt(pow(theCoords.z - z, 2) + pow(theCoords.y - y, 2) + pow(theCoords.x - x, 2));
	return distance;
}
