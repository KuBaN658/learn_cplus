#include <iostream>
#include <string>

using namespace std;

int CountWord(string str);

int main() {
	string str;
	getline(cin, str);
	cout << CountWord(str);
}


int CountWord(string str) {
	int pos = 0;
	int count = 0;
	str += " ";
	while (pos < str.size() - 1) {
		pos = str.find(" ", pos);
		count++;
		pos++;
	}
	return count;
}