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
	
	string testString;
	
	cout << "Enter string to be tested" << endl;
	getline(cin, testString);

	if(isPalindrome(testString)){
		cout << "'" << testString << "' is a palindrome" << endl;
	}
	else{
		cout << "'" << testString << "' is NOT a palindrome" << endl;
	}
	 
}


bool isPalindrome(const string& s){

	int length = s.size() - 1;
	int i;
	
	for(i = 0; i < length; i++, length--){
		
		if(tolower(s[i]) != tolower(s[length])){
			return false;
		}
	}
	return true;
}
