#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	int n, m;
	cin >> n >> m;
	int arr[30][30] = {0};
	int count = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = count;
			count++;
		}
		i++;
		for (int k = m - 1; k >= 0; k--)
		{
			arr[i][k] = count;
			count++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << setw(4) << arr[i][j];
		}
		cout << '\n';
	}	
}