//
//	COS 221
//	Author: Derek Haas
//	Date: 12-6-18
//	Description: Add a remove() function that removes the specified value from a first-class
//		     container.  Only the first occurance of a matching value in the container
//		     is removed
//

#include <iostream>
#include <vector>

using namespace std;

// Prototype for remove()
template<typename ElementType, typename ContainerType>
void remove(ContainerType&, const ElementType&);


int main(){

	vector<int> input;
	int i;

	// Push values 1-6 into the vector
	for(i = 1; i <=6; i++){
		
		input.push_back(i);

	}

	// Print starting container values
	cout << "The Starting Container Values: " << endl;

	for(vector<int>::const_iterator i = input.begin(); i != input.end(); i++) {
		cout << *i << "";
	}
	
	cout << endl;		

	// Remove the value 4 from the container with the new remove() function
	cout << "Remove The Value 4 From The Container." << endl;

	remove(input, 4);

	// Print the new container values
	cout << "The New Container: " << endl;

	for(vector<int>::const_iterator i = input.begin(); i != input.end(); i++) {
		cout << *i << "";
	}
	
	cout << endl;

	// Try to remove the value 4 again
	cout << "Try To Remove 4 Again..." << endl;

	remove(input, 4);

	return 0;

}

// Remove function for the contianer
template<typename ElementType, typename ContainerType>
void remove(ContainerType& container, const ElementType& value){
	
	// Use an iterator with the same type of the container
	typename ContainerType::iterator i;
	
	// Search through each element in the container
	for(i = container.begin(); i != container.end(); i++){
		
		// If the index value is the element value
		if(*i == value){
			
			// Erase it
			container.erase(i);
			return;
		}

	}
	
	// Error if the value was not found
	cout << "ERROR: " << value << " WAS NOT FOUND!" << endl;

	return;
}



