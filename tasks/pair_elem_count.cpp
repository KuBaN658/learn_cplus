#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector <int> vec;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j) continue;
			if (vec[i] == vec[j]) count++;
		}
	}
	
	cout << count / 2;
	
}
				
