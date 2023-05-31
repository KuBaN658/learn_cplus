#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int arr[n][m];
	
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	
	int col1, col2;
	int temp;
	cin >> col1 >> col2;
	
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < m; j++)
		{	
			if (j == col1)
			{
				temp = arr[i][col1];
				arr[i][col1] = arr[i][col2];
				arr[i][col2] = temp;
			}
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}
	
}
