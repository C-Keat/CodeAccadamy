#include <iostream>


// Define is_palindrome() here:
bool is_palindrome(std::string text) {

	//create storage orginal word
	std::string orginalText = text;
	bool isSame = false;
	int wordLength = text.length();
	int n = wordLength - 1;

	//for loop using swap methord to switch values at each index;
	for (int i = 0; i < (wordLength/2); i++){

		std::swap(text[i], text[n]);
		n = n - 1;
	}

	//check to see if stored work is same as text
	if (text == orginalText) {
		isSame = true;
	}
	else {
		isSame = false;
	}

	return isSame;

}

int main() {

	std::cout << is_palindrome("madam") << "\n";
	std::cout << is_palindrome("ada") << "\n";
	std::cout << is_palindrome("lovelace") << "\n";

}