#include <iostream>
#include <string>
#include <set>

using namespace std;


int main() {
	int n;
	cin >> n;
	set <int> numbers;
	int num;
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (numbers.find(num) == numbers.end()) {
			cout << "NO\n";
		}
		else {
			cout << "YES\n";
		}
		numbers.insert(num);
	}
}
