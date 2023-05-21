#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

double power(double a, double n);

int main(){
	double a, n;
	cin >> a >> n;
	cout << power(a, n);
}
double power(double a, double n) {
	if (n == 0) return 1;
	else if (n == 1) return a;
	else if (n > 0) return a * power(a , n - 1);
	else return power(1 / double(a), - n);
}
