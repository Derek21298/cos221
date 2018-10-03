//
//	COS 221 Homework #3
//	Author: Derek Haas
//	Date: 10/2/18
//	Description: Create a generic stack class using a vector
//

#include <vector>

using namespace std;

template<typename T>
class Stack {

public: 
	Stack();
	bool empty() const;
	T peek() const;
	void push();
	T pop();
	int getSize() const;

private:
	vector<T> elements;
	int size;
};



template<typename T> 
Stack<T>::Stack() {
}

template<typename T>
bool Stack<T>::empty() const {
	return (elements.size() == 0);
}

template<typename T>
T Stack<T>::peek() const {
	return elements.at(elements.size);
}

template<typename T>
void Stack<T>::push(T number){
	elements.push_back(number);
}

template<typename T>
T Stack<T>::pop() {
	T element = elements.at(elements.size() - 1);
	elements.pop_back;
	return element;
}

template<typename T>
int Stack<T>::getSize() const {
	return elements.size();
}

