#include <iostream>

#define CHARS 128

using namespace std;

bool isVowel(char c) {
	switch(c) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			return true;
		default:
			return false;
	}
}

int main (void) {
	int charCount[CHARS] = {0};
	string text;
	
	while(getline(cin, text)) {		
		for (char& c : text) {
			charCount[c]++;
		}
	}
		
	for (int c = 0; c < CHARS; ++c) {
		if (charCount[c] && isVowel(c)) {
			cout << (char) c << ": " << charCount[c] << endl;
		}
	}
	
	return 0;
}
