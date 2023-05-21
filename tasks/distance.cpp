#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2);

int main() {
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << distance(a, b, c, d);
	return 1;
}

double distance(double x1, double y1, double x2, double y2) {
	return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}
