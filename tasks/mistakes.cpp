#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <set>

using namespace std;

char ToLowerCase(char symbol);


int main() {
	map <string, set<int> > dict;
	int n, count;
	count = 0;
	cin >> n;
	cin.ignore(1, '\n');
	string line;
	string word;
	int index;
	vector<int> indeces;
	for (int i = 0; i < n; i++) {
		getline(cin, word);
		for (int j = 0; j < word.size(); j++) {
			if (word[j] < 'a') {
				index = j;
				char chr = word[j];
				word.replace(j, 1, 1, ToLowerCase(chr));
			}
		}
		dict[word].insert(index);
	}

	getline(cin, line);
	int start = 0;
	int stop = 0;
	while (stop != -1)
	{
		stop = line.find(' ', start);
		if (stop != -1)
		{
			word = string(line, start, stop - start);
		} else 
		{
			word = string(line, start, line.size());
		}

		for (int i = 0; i < word.size(); i++) {
			if (word[i] < 'a') {
				indeces.push_back(i);
				char chr = word[i];
				word.replace(i, 1, 1, ToLowerCase(chr));
			}
			
		}

		if (indeces.size() != 1) {
			count++;
			cout << "!= 1" << endl;
		} else if (dict.find(word) == dict.end())
		{

		}
		else if (dict[word].find(indeces[0]) == dict[word].end()) {
			count++;
			cout << "Not find" << endl;
		}
		indeces.clear();
		start = stop + 1;
	}

	for (auto& item : dict) {
		cout << item.first << " - ";
		for (auto& x : item.second) {
			cout << x << ' ';
		}
		cout << '\n';
	}
	cout << count;
}
