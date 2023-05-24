#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


bool IsDigit(char chr);


int main() {
	char chr;
	cin >> chr;
	cout << (IsDigit(chr) ? "YES" : "NO");
}


bool IsDigit(char chr) {
	return ('0' <= chr and chr <= '9') ? true : false;
}