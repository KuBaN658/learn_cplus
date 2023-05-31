#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int arr[20][20] = {0};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}

	int k;
	cin >> k;
	int count = 0;
	bool flag = true;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == 0) {
				count++;
			}
			else {
				count = 0;
			}
			if (count == k) {
				cout << i + 1;
				flag = false;
				break;
			}
		}
		if (count == k)
		{
			break;
		}
		count = 0;
	}
	if (flag) cout << 0;
}