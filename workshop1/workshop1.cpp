/*
	 Work shop 1
	Author: Derek Haas
	Date: 9/14/2018
	Sort contents of a string
*/

#include <iostream>
#include <string>
#include "workshop1.h"
#include "StringSort.h"


using namespace std;


int main(int argc, char **argv){

	doHomework();

	return 0;
}

void doHomework(){

	StringSort ss;
	string theString;

	theString = getUserInput();
	ss.sort(theString);
	cout << "Sorted: " << theString << endl;

}

string getUserInput(){

	string buffer;
	cout << PROMPT << endl;
	getline(cin,buffer);

	return(buffer);
}
