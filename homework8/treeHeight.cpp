//
// COS 221 Homework 8
// Author: Derek Haas
// Date: 11/30/18
// Description: Find the height of a binary tree
//

#include <iostream>
#include <string>
#include "BST.h"

using namespace std;

void getWords(string sentence, BST<string>& tree);

int main() {

	BST<string> tree;

	// Test sentence for the binary search tree
	const string testSentence = "DURING the whole of a dull, dark, and soundless day in the autumn of the year, when the clouds hung oppressively low in the heavens, I had been passing alone, on horseback, through a singularly dreary tract of country; and at length found myself, as the shades of the evening drew on, within view of the melancholy House of Usher.";

	// Print the sentence
	cout << "Test Sentence: " << endl << testSentence << endl << endl;

	// Get the words of the sentence and insert into tree
	getWords(testSentence, tree);

	// Print the height of the binary search tree
	cout << "The Height of the Binary Search Tree is: " << endl << tree.height() << endl << endl;

	// Print the BST with an inorder traversal
	cout << "The Binary Search Tree sentence with an inorder traversal: " << endl;
	tree.inorder();
	cout << endl;

	return 0;
}

// Reused function from HW7 to get words from a sentence and insert to a binary search tree
void getWords(string sentence, BST<string>& tree) {

	int start = 0;
	int numChars = 0;
	bool firstLetter = true;
	string word = "";
	int i;

	// Loop through each character
	for(i = 0; i < sentence.size(); i++) {

		// Remove if not a letter or space (punctuation)
		if(isalpha(sentence.at(i))) {
			
			// If this is the first letter of a word
			if(firstLetter) {
			
				start = i;
				firstLetter = false;
			
			}

			// Add one to number of letters in the word
			numChars++;
	
		}

		// Else it is a space
		else {
		
			// Subtract startIndex from numChars to get the word
			word = sentence.substr(start, numChars);
			
			// Add the word to the tree
			tree.insert(word);

			// Reset to find new word
			firstLetter = true;
			numChars = 0;

		}

	}

	// Add the last word to the list
	word = sentence.substr(start, numChars);
	tree.insert(word);
}







