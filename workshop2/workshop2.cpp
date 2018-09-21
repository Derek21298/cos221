//
//	COS 221
//	Author: Derek Haas
//	Date: 9/21/18
//	Description: Aveeraging of array values
//

#include <iostream>
#include "workshop.h"

using namespace std;

int main(int arg, char **argv){

	double dArray[ARRAYSIZE];
	
	getArray(dArray, ARRAYSIZE);
	double theAvg = average(dArray, ARRAYSIZE);
	
	cout << "Average of the array is: " << theAvg << endl

	return 0;
}

void getArray(double *array, int size){
	

	for(int i = 0; i < size; i++) {

		double buf;
		cout << "Enter element #" << i + 1 << ": ";
		cin >> buf;
		*(array + i) = buf; 
		//cout << endl

	}
	return 0;
}


int average(const int * array, int size){

	int sum = 0;
	
	for(int foo = 0; foo < size; foo++){
		
		sum += *(array + foo);

	}

	return((int)(sum / size))

}


double average(const double * array, int size){

	double sum = 0.0;
	
	for(int foo = 0; foo < size; foo++){
		
		sum += *(array + foo);

	}

	return(sum / size);

}


