#include <iostream>
using namespace std;


int * max_element(int * p, int * q) {
	int * pmax = p;
	for (; p != q; p++) {
		if (*p > *pmax) pmax = p;
	}
	
	return pmax;
}

int main() {
	int m[10];
	int * pmax = max_element(m, m + 10);
	cout << "Maximum = " << *pmax << endl;
	return 0;
}
