#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	int n, m;
	cin >> n >> m;
	int arr[100][100] = {0};
	int sum_index = n + m - 1;
	int width = m;
	int height = n;
	int i = 0;
	int j = -1;
	int flag = 0;
	int bound = 0;
	for (int k = 1; k <= n * m; k++)
	{
		if (flag % 4 == 0)
		{
			j++;
			arr[i][j] = k;
			if (j == width - 1 - bound)
			{
				flag++;
			}
		}
		else if (flag % 4 == 1)
		{
			i++;
			arr[i][j] = k;
			if (i == height - 1 - bound)
			{
				flag++;
			}
		}
		else if (flag % 4 == 2)
		{
			j--;
			arr[i][j] = k;
			if (j == bound)
			{
				flag++;
				bound++;
			}
		}
		else if (flag % 4 == 3)
		{
			i--;
			arr[i][j] = k;
			if (i == bound)
			{
				flag++;
			}
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