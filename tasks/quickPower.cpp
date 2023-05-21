#include <iostream>
#include <cmath>
using namespace std;

double QuickPower(double a, int n);

int main()
{
	double a;
	int n;
	cin >> a >> n;
	cout << QuickPower(a, n);
	return 0;
}

double QuickPower(double a, int n) {
	if (n == 0) return 1;
	else if (n == 1) return a;
	else if (n % 2) return a * QuickPower(a, n - 1);
	else return QuickPower(a * a, n / 2);

}