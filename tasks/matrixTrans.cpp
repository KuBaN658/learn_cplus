#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int arr[100][100] = {0};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[j][i];
		}
	}


	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}
}