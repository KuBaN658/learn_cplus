#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

bool IsPointInCircle(double x, double y, double xc, double yc, double r);


int main() {
	double x, y, xc, yc, r;
	cin >> x >> y >> xc >> yc >> r;
	if (IsPointInCircle(x, y, xc, yc, r)) cout << "YES";
	else cout << "NO";
}


bool IsPointInCircle(double x, 
					 double y,
					 double xc, 
					 double yc, 
					 double r) {
	return sqrt(pow((x - xc), 2) + pow((y - yc), 2)) <= r;
}
