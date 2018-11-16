//
//	Author: Derek Haas
//	Data: 11/2/18
//	Description: Recursive function to print all permutations of a string
//


#include <iostream>
#include <string>

using namespace std;

void displayPermutation(const string&, const string&);
void displayPermutation(const string&);

int main() {

	string userString;

	// Prompt the user to enter a string
	cout << "Enter a string to be permuted: ";
	cin >> userString;

	// Display the permutations of the user's string
	displayPermutation(userString);

	return 0;
}


// This function does the work on the strings and prints all the permutaions
void displayPermutation(const string& s1, const string& s2) {

	// If the permutation is ready (all chars in s1), print the permutation (s1)
	if (s2.empty()) {
		cout << s1 << endl;
	}

	// If the permutation is NOT ready, swap/append chars between string1 and string2 to get it closer to a permutation
	else {

		// Iterate through based on the size of s2
		for (int i = 0; i < s2.size(); i++) {

			// Initialize strings 1 & 2
			// These strings are given a value inside the for loop as they need to be reset after every iteration
			string string1 = s1;
			string string2 = s2;

			// Append the ith char of string2 onto string1
			string1.append(1, string2.at(i));

			// Remove the ith char of string2
			string2.erase(i, 1);

			// Recursively call the function with a new s1 and s2
			displayPermutation(string1, string2);

		}
	}
}

// This function is called by the user. It only exists to simplify the user's call (it only requires a single argument)
void displayPermutation(const string& s) {

	// Call the real displayPermutation function with an empty s1 and a full s2
	displayPermutation("",s);

}
