#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> horizontal;
	vector <int> vertical;
	int temp_hor, temp_ver;
	for (int i = 0; i < 8; i++)
	{
		cin >> temp_hor >> temp_ver;
		horizontal.push_back(temp_hor);
		vertical.push_back(temp_ver);
	}
	bool flag = false;
	for (int i = 0; i < 8; i++) 
	{	
		for (int j = 0; j < 8; j++)
		{
			if (i == j) continue;
			if (horizontal[i] - horizontal[j] == vertical[i] - vertical[j] 
			|| horizontal[i] - horizontal[j] == vertical[j] - vertical[i] 
			|| horizontal[j] - horizontal[i] == vertical[i] - vertical[j] 
			|| horizontal[j] - horizontal[i] == vertical[j] - vertical[i]) flag = true;
			else if (horizontal[i] == horizontal[j] || vertical[i] == vertical[j]) flag = true;
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
