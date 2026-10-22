// P9-1.cpp, Conner Sunderhaus, 10/22/26
// this program counts the vowels in the string entered
#include <iostream>
using namespace std;


int countCharacter(string str);

int main() {
	cout << countCharacter("hello");
}

int countCharacter(string str) {
	return str.length();
}
