#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector <int> vec;
	vector <int> res;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{	if (i == j && i == n - 1)
			{
				res.push_back(vec[i]);
			}
			if (i == j) continue;
			if (vec[i] == vec[j]) break;
			if (j == n - 1)
			{
				res.push_back(vec[i]);
			}
		}
	}
	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i] << ' ';
	}
	
}
