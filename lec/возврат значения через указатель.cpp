#include <iostream>
using namespace std;

bool max_element (int * p, int * q, int * res) {
	if (p == q) return false;
	*res = *p;
	for (; p != q; p++) {
		if (*p > *res) *res = *p;
	}
	return true;
}

int main() {
	int max = 0;
	int m[15];
	if (max_element(m, m + 10, &max))
		cout << "Maximum = " << max << endl;
	return 0;
}
