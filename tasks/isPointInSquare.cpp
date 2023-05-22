#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

bool IsPointInSquare(double x, double y);


int main() {
	double x, y;
	cin >> x >> y;
	if (IsPointInSquare(x, y)) cout << "YES";
	else cout << "NO";
}


bool IsPointInSquare(double x, double y) {
	return abs(x) + abs(y) <= 1;
}

bool IsPointInSquare(double x, double y);


int main() {
	double x, y;
	cin >> x >> y;
	if (IsPointInSquare(x, y)) cout << "YES";
	else cout << "NO";
}


bool IsPointInSquare(double x, double y) {
	return abs(x) + abs(y) <= 1;
}

