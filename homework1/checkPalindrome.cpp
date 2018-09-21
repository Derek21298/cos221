//
// COS 221 Data Structures 
// Homework #1 - Check Palindrome
//
// Author: Derek Haas
// Date: 9-18-18
//
// Description: Checks whether a string is a palindrome assuming letters are case-insensitive
//


#include <string>
#include <iostream>

using namespace std;


bool isPalindrome(const string& s);


int main(int argc, char **argv){

	// String to be tested if a palindrome
	string testString;
	
	// Ask user for input
	cout << "Enter string to be tested" << endl;
	getline(cin, testString);

	// If the string is a palindrome
	if(isPalindrome(testString)){
		cout << "'" << testString << "' is a palindrome" << endl;
	}
	// If the string is NOT a palindrome
	else{
		cout << "'" << testString << "' is NOT a palindrome" << endl;
	}
	 
	return 0;
}


bool isPalindrome(const string& s){

	// Get length of string (minus 1 for null terminator)
	int length = s.size() - 1;
	int i;
	
	// Start at beginning and end of string and increment/decrement until they meet in the middle
	for(i = 0; i < length; i++, length--){
		
		// If a character does not equal the same character, the string is not a palindrome
		if(tolower(s[i]) != tolower(s[length])){
			return false;
		}
	}
	// Passed all characters, string is palindrome 
	return true;
}
