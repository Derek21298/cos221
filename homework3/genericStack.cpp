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
	
	cout << "Pushing these strings to Stack: Bird, Cat, Dog" << endl << endl;
	inputs.push("Bird");
	inputs.push("Cat");
	inputs.push("Dog");	
	
	cout << "Is the stack empty: ";
	if (inputs.empty() == 1) cout << "True" << endl << endl;
	else cout << "False" << endl << endl;
	

	for (int i = 0; i < 3; i++) {	

	cout << "Stack size: " << inputs.getSize() << endl;
	cout << "Peek at the stack: " << inputs.peek() << endl;
	cout << "Popping element from stack: " << inputs.pop() << endl << endl;
	
	}

	cout << "Is the stack empty: ";
	if (inputs.empty() == 1) cout << "True" << endl;
	else cout << "False" << endl;
		
}

