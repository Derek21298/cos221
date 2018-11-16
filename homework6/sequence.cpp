//
//	COS 221 Fall 2018
//	Author: Derek Haas
//	Date: 11/9/18
//	Description: User enters string of numbers ending with 0.  Program will detect the longest
//		     subsequence with the same number.
//


#include <iostream>
#include <vector>
#include <string>


using namespace std;


int main() {

	string initInput;		// String to hold initial input
	int input;			// An int for each input
	vector<int> series;		// Vector of ints to hold the sequence
	bool firstDigit = true; 	// A boolean to indicate if the digit is the first digit
	int count = 1;	  		// Number of consecutive int
	int maxIndex = 0; 		// Index of the first consecutive int
	int maxCount = 1; 		// Maximum number of consecutive ints
	int maxVal;	  		// Value of the most consecutive int


	cout << "Enter a series of numbers (Enter 0 when done): ";

	// While loop to let user enter input values until 0 is entered
	while (input != 0) {
		
		// Get a number
		cin >> initInput;

		// Check that the entered string is an int
		// find_first_not_of returns the index of the first char that's not an int
		// If string::npos is returned the input is an int
		if(initInput.find_first_not_of("0123456789") != string::npos) {

			cout << "ERROR: Your input contains invalid characters!" << endl;
			return 0;

		}

		// Convert the string to an int.
		input = stoi(initInput);
		
		// Handle the case if 0 is the first digit entered
		if (firstDigit && (input == 0)) {

			cout << "Empty series: terminating." << endl;
			return 0;

		}
		
		// The first digit was entered so false
		firstDigit = false;

		// Add the int to the vector
		series.push_back(input);

	}

	// Iterate through the vector and find the longest sequence of the same number
	for (int index = 0; index < series.size() - 1; index++) {
		
		if (series.at(index) == series.at(index + 1)) {

			count++;

			// If there is a new max number of consecutive ints, change the max count
			if (count > maxCount) {

			maxCount = count;
			maxIndex = index - (count - 2);

			}
		}

		else {
			// Reset count because the two elements are not the same
			count = 1;
		}
	}

	maxVal = series.at(maxIndex);

	cout << "The longest same-number sequence starts at index " << (maxIndex + 1) << " with " << maxCount << " values of " << maxVal << "." << endl;

	return 0;
}

