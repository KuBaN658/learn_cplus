#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;



int main() {
	map <string, vector<string> > dict;
	int n;
	int stopIndex = 0;
	cin >> n;
	string line, value;
	vector <string> keys;
	cin.ignore(1, '\n');
	for (int i = 0; i < n; i++) {
		getline(cin, line);
		int index = line.find(' ');
		value = string(line, 0, index);
		int startIndex = index + 3;
		while (stopIndex != -1) {
			stopIndex = line.find(", ", startIndex);
			if (stopIndex == -1) {
				keys.push_back(string(line, startIndex, line.size()));
			}
			else {
				keys.push_back(string(line, startIndex, stopIndex - startIndex));
			}
			startIndex = stopIndex + 2;
			for (int j = 0; j < keys.size(); j++) {
				dict[keys[j]].push_back(value);
				
				keys.clear();
			}
		}
		stopIndex = 0;
	}
	for (auto& item : dict) {
		cout << item.first << " - ";
		for (int i = 0; i < item.second.size(); i++) {
			cout << item.second[i];
			if (i != item.second.size() - 1) {
				cout << ", ";
			}
			if (i != item.second.size() - 1) {
				cout << '\n';
			}
		}
	}
}