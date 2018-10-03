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
	
	// Create stack object with type string
	Stack<string> inputs;
	
	// Push Bird, Cat, and Dog to the stack
	cout << "Pushing these strings to Stack: Bird, Cat, Dog" << endl << endl;
	inputs.push("Bird");
	inputs.push("Cat");
	inputs.push("Dog");	
	
	// Check if the stack is empty (Obviously not as stack just got pushed)
	cout << "Is the stack empty: ";
	if (inputs.empty() == 1) cout << "True" << endl << endl;
	else cout << "False" << endl << endl;
	
	// Loop 3 times to check size, peek at stack, and pop element
	for (int i = 0; i < 3; i++) {	

	cout << "Stack size: " << inputs.getSize() << endl;
	cout << "Peek at the stack: " << inputs.peek() << endl;
	cout << "Popping element from stack: " << inputs.pop() << endl << endl;
	
	}

	// Check if the stack is empty (Obviously yes as all 3 elements are popped)
	cout << "Is the stack empty: ";
	if (inputs.empty() == 1) cout << "True" << endl;
	else cout << "False" << endl;

}

