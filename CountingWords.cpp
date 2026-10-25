// CountingWords.cpp - Anna Myers - 25 October 2026
// Description: Counts the words in a string entered by the user.
// Words are separated by one or more spaces.

#include <iostream>
#include <string>

using namespace std;

// Function prototypes
int countWords(string str);

int main(void) {
	// Define string
	string str;

	// User input
	cout << "Please enter string: ";
	getline(cin, str);

	// Call the function and display result
	cout << countWords(str) << endl;

	return 0;
}

int countWords(string str) {
	// Returns the number of words in string
	// Define counter and a boolean variable to remember if its inside a word
	int count = 0;
	bool inWord = false;

	// Look at each character in string
	for (int i = 0; i < str.length(); i++) {
		if (str[i] != ' ') {
			// Non-space if not in a word, a new word begins
			if (!inWord) {
				count++;
				inWord = true;
			}
		}
		else {
			// A space ends current word
			inWord = false;
		}
	}
	return count;
}