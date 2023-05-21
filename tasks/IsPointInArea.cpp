#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

bool IsPointInArea(double x, double y);


int main() {
	double x, y;
	cin >> x >> y;
	if (IsPointInArea(x, y)) cout << "YES";
	else cout << "NO";
}


bool IsPointInArea(double x, 
					 double y) {
	return y <= -x and
		   y <= 2 * x + 2 and
		   sqrt(pow(x + 1, 2) + pow(y - 1, 2)) >= 2 or 
		   y >= -x and
		   y >= 2 * x + 2 and
		   sqrt(pow(x + 1, 2) + pow(y - 1, 2)) <= 2;
	
}
