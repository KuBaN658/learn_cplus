#include <iostream>
#include <string>
#include <set>

using namespace std;


int main() {
	int n;
	cin >> n;
	set <int> numbers;
	set <int> result;
	int num;
	for (int i = 0; i < n; i++) {
		cin >> num;
		numbers.insert(num);
	}
	cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (numbers.find(num) != numbers.end()) {
			result.insert(num);
		}
	}
	for (auto i : result) {
		cout << i << " ";
	}
}