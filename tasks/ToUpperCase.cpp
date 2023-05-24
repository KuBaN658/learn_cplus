#include <iostream>
#include <iomanip>

using namespace std;

char ToUpperCase(char symbol);

int main() {
	char chr;
	cin >> chr;
	cout << ToUpperCase(chr);
}

char ToUpperCase(char symbol) {
	char diff = 'a' - 'A';
	return ('a' <= symbol and symbol <= 'z')? symbol - diff : symbol;
}