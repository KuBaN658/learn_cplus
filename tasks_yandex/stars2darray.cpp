#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	char arr[n][n] = {'.'};
	
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j or i + j == n - 1 or
			 i == n / 2 or j == n / 2)
			{
				arr[i][j] = '*';
			} else arr[i][j] = '.';
		}
	}
	
	
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}
	
}
