// P9-1.cpp, Conner Sunderhaus, 10/22/26
// this program counts the vowels in the string entered
#include <iostream>
#include <string>
using namespace std;


int countVowel(string str);

int main() {

	string input;
	
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q") break;
		cout << "Vowel Count: " << countVowel(input) << endl;
	}
}

int countVowel(string str) {

	int vowelCount = 0;
	int pos = 0;
	bool letter_left = true;

	while (letter_left) {
		if (pos <= str.length()) {
			if (str[pos] == 'a' || str[pos] == 'A' || str[pos] == 'e' || str[pos] == 'E' || str[pos] == 'i' || str[pos] == 'I' || str[pos] == 'o' || str[pos] == 'O' || str[pos] == 'u' || str[pos] == 'U') {
				vowelCount++;
			}
			pos++;
			letter_left = true;
		}
		else letter_left = false;
		
	}

	return vowelCount;
}