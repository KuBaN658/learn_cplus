#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n][n];
	bool flag = true;
	
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	
	
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n; j++)
		{	
			if (j == i) continue;
			if (arr[i][j] != arr[j][i]) flag = false;
		}
	}
	
	if (flag)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	
}
