//
//	COS 221 HW #2
//	Author: Derek Haas
//	Date: 9/24/18
//	Description: Using pointers to find smallest element in an array of integers
//

#incldue <iostream>

using namespace std;

int smallestElement(int list, int size);

int main(){
	
	int testArray[] = {1, 2, 4, 5, 10, 100, 2, -22};

	size = testArrary.size();

	smallestValue = smallestElement(testArray, size);

	cout << "The smallest element in the array is:" << smallestValue << endl;
}

int smallestElement(int list, int size){
	
	int min = *list;
	int i;

	for(i = 0; i < size; i++){

		if(*(list + i) < min){
			min = *(list + i);
		}
	}

	return min;
}