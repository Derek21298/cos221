//
//	COS 221 Homework #3
//	Author: Derek Haas
//	Date: 10/2/18
//	Description: Create a generic stack class using a vector
//

#include <iostream>
#include "genericStack.h"
#include <vector>


using namespace std;

int main(int argc, char **argv){

	Stack<string> inputs;
	
	cout << "Pushing Bird, Cat, and Dog to stack" << endl
	inputs.push("Bird");
	inputs.push("Cat");
	inputs.push("Dog");
	
	cout << "Stack size:" << inputs.getSize() << endl
	cout << "Peek at the stack" << inputs.peek() << endl

	
}

