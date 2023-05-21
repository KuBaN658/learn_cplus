#include <iostream>
#include <cmath>
using namespace std;

bool IsPrime(int n);

int main()
{
	int n;
	cin >> n;
	if (IsPrime(n)) cout << "YES";
	else cout << "NO";
}

bool IsPrime(int n) {
	int divisor = 2;
	while (divisor <= sqrt(n)) {
		if (n % divisor == 0) {
			return false;
		}
		divisor++;
	}
	return true;
}