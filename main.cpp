#include <iostream>

#define CHARS 128

using namespace std;

int main (void) {
	int charCount[CHARS] = {0};
	string text;
	
	getline(cin, text);
	
	for (char& c : text) {
		charCount[c]++;
	}
	
	for (int i = 0; i < CHARS; ++i) {
		if (charCount[i]) {
			cout << (char) i << ": " << charCount[i] << endl;
		}
	}
	
	return 0;
}
