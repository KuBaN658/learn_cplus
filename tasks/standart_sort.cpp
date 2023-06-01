#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main() {
	vector <int> data;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		data.push_back(temp);
	}
	sort(data.begin(), data.end());
	for (int i = 0; i < n; i++) {
		cout << data[i] << " ";
	}
}