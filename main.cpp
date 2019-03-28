#include <iostream>

#define CHARS 128

using namespace std;

bool isVowel(char c) {
	return
		c == 'a' ||
		c == 'e' ||
		c == 'i' ||
		c == 'o' ||
		c == 'u';
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
