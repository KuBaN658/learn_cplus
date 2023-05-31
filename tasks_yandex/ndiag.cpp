#include <iostream>
using namespace std;

int main() 
{
	int n;
	cin >> n;
	int arr[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	
	int k;
	cin >> k;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i - k == j)
			{
			cout << arr[i][j] << ' ';
			}
		}
	}
}
