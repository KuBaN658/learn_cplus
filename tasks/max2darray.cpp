#include <iostream>
using namespace std;

int main()
{
	int n, m, max, hor, ver;
	cin >> n >> m;
	int arr[n][m] = {0};
	hor = ver = 0;
	
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	
	
	max = arr[0][0];
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] > max) 
			{
				max = arr[i][j];
				hor = i;
				ver = j;
			}
		}
	}
	
	cout << hor << ' ' << ver;
	
}
