//
//	COS 221 HW #2
//	Author: Derek Haas
//	Date: 9/24/18
//	Description: Using pointers to find smallest element in an array of integers
//

#include <iostream>

using namespace std;

int smallestElement(int list[], int size);

int main(void){
	
	// Array of values to be tested from homework handout
	int testArray[] = {1, 2, 4, 5, 10, 100, 2, -22};
	
	// Getting the size of array
	int size = sizeof(testArray) / sizeof(testArray[0]);
	
	// Get the smallest value in the array
	int smallestValue = smallestElement(testArray, size);
	
	// Print out to console
	cout << "The smallest element in the array is:" << smallestValue << endl;
		
	return 0;
}

int smallestElement(int list[], int size){
	
	// Set minimum value to first value
	int min = *list;
	int i;
	
	for(i = 0; i < size; i++){
		
		// If value is lower than min, make it the new min
		if(*(list + i) < min){
			min = *(list + i);
		}
	}

	return min;
}
