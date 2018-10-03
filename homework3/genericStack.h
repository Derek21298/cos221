//
//	COS 221 Homework #3
//	Author: Derek Haas
//	Date: 10/2/18
//	Description: Create a generic stack class using a vector
//

#include <vector>

using namespace std;

// Create the stack class to be used
template<typename T>
class Stack {

// Create functions of the stack to be used
public: 
	Stack();
	bool empty() const;
	T peek() const;
	void push(T number);
	T pop();
	int getSize() const;

// Keep elements in the stack private
private:
	vector<T> elements;
	int size;
};

// Create constructor
template<typename T> 
Stack<T>::Stack() {
}

// Create empty() that tells in the stack is empty or not (1 True: 0 False)
template<typename T>
bool Stack<T>::empty() const {
	return (elements.size() == 0);
}

// Create peek() to show top element of the stack
template<typename T>
T Stack<T>::peek() const {
	return elements.at(elements.size() - 1);
}

// Create push() to push the element to the top of the stack
template<typename T>
void Stack<T>::push(T number){
	elements.push_back(number);
}

// Create pop() to pop the top element off the stack
template<typename T>
T Stack<T>::pop() {
	T element = elements.at(elements.size() - 1);
	elements.pop_back();
	return element;
}

// Create getSize() to return the size of the stack
template<typename T>
int Stack<T>::getSize() const {
	return elements.size();
}

