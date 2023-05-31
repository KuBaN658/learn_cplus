#include <iostream>
#include <iomanip>

using namespace std;

char ToUpperCase(char symbol);
char ToLowerCase(char symbol);


int main() {
	char chr;
	cin >> chr;
	if ('a' <= chr and chr <= 'z') {
		cout << ToUpperCase(chr);
	} else if ('A' <= chr and chr <= 'Z') {
		cout << ToLowerCase(chr);
	} else {
		cout << chr;
	}
}

char ToUpperCase(char symbol) {
	char diff = 'a' - 'A';
	return symbol - diff;
}

char ToLowerCase(char symbol) {
	char diff = 'a' - 'A';
	return symbol + diff;
}