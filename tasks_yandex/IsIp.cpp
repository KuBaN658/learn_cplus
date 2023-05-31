#include <iostream>
#include <string>
#include <vector>

using namespace std;


bool IsDigit(char chr);


int main() {
	bool flag = true;
	string str;
	getline(cin, str);
	int ip[8];
	int startIndex = 0;
	int endIndex = 0;
	for (int i = 0; i < 8; i += 2) {
		ip[i] = startIndex;
		endIndex = str.find('.', startIndex);
		startIndex = endIndex + 1;
		ip[i + 1] = endIndex;
	}

	if (ip[7] >= 0) {
		flag = false;
	}
	else {
		ip[7] = str.size();
	}

	for (int i = 0; i < 8; i += 2) {
		string temp = "";
		for (int j = ip[i]; j < ip[i + 1]; j++) {
			cout << str[j];
			if (not IsDigit(str[j])) {
				flag = false;
				break;
			}
			temp += str[j];
		}
		if (temp == "") {
			flag = false;
		}
		if (not flag) break;
		cout << '\n';
		if (stoi(temp) < 0 || stoi(temp) > 255) {
			flag = false;
		}
	}
	
	string res = (flag) ? "YES" : "NO";
	cout << res;
}


bool IsDigit(char chr) {
	return ('0' <= chr and chr <= '9') ? true : false;
}