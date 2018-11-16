//
//	Author: Derek Haas
//	Date: 11/16/18
//	Description: Implement the "remove(T element)" in LinkedList.h and show that it works
//


#include <iostream>
#include "LinkedList.h"
using namespace std;


void getWords(string, LinkedList<string>&);


int main() {

	// Create a LinkedList object of type string for the test sentence
	LinkedList<string> testList;
	
	cout << "The linked list sentence: " << endl << endl;
	
	const string testSentence = "DURING the whole of a dull, dark, and soundless day in the autumn of the year, when the clouds hung oppressively low in the heavens, I had been passing alone, on horseback, through a singularly dreary tract of country; and at length found myself, as the shades of the evening drew on, within view of the melancholy House of Usher.";

	cout << testSentence << endl << endl;

	// Remove punctuation and get words from the sentence
	getWords(testSentence, testList);	

	// Remove all instances of "of" from the sentence
	cout << "Removing all instances of 'of' from the sentence." << endl << endl;
	testList.remove("of");
	
	// Print out the words from the linked list
	for (int i = 0; i < testList.getSize(); i++) {

		cout << testList.get(i) << " ";
	}

	cout << endl;

	return 0;
}



// Function to get the words from a sentence and remove punctuation
void getWords(string sentence, LinkedList<string>& list) {

	int start = 0;
	int numChars = 0;
	bool firstLetter = true;
	string word = "";

	// Loop through each character
	for (int i = 0; i < sentence.size(); i++) {

		// Remove if not a letter or space (punctuation)
		if (!isalpha(sentence.at(i)) && !isspace(sentence.at(i))) {
			sentence.erase(i, 1);
		}
	}

	// New length of sentence
	int length = sentence.size();

	for (int i = 0; i < length; i++) {

		// If character is a letter
		if (isalpha(sentence.at(i))) {

			// If this is the first letter of a word
			if (firstLetter) {

				start = i;
				firstLetter = false;

			}

			// Add one to number of letters in the word
			numChars++;

		}

		// Else it is a space
		else {

			// Subtract startIndex form numChars to get the word
			word = sentence.substr(start, numChars);

			// Add the word to the list
			list.add(word);

			// Reset to find new word
			firstLetter = true;
			numChars = 0;

		}
	}

	// Add the last word to the list
	word = sentence.substr(start, numChars);
	list.add(word);
}
