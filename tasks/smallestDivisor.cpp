#include <iostream>
using namespace std;

int MinDivisor(int n);

int main()
{
	int n;
	cin >> n;
	cout << MinDivisor(n);
}

int MinDivisor(int n) {
	int divisor = 2;
	while (divisor <= sqrt(n)) {
		if (n % divisor == 0) {
			return divisor;
		}
		divisor++;
	}
	return n;
}