#include <iostream>
#include <string>

using namespace std;

string Ispalindrom(string str);

int main() {
	string str;
	getline(cin, str);
	cout << Ispalindrom(str);
}


string Ispalindrom(string str) {
	bool flag = true;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] != str[str.size() - i - 1]) {
			flag = false;
			break;
		}
	}
	return (flag)? "yes" : "no";
}