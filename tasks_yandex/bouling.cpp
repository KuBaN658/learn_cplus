#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int pin, thrw;
	cin >> pin >> thrw;
	vector <bool> res;
	for (int i = 0; i < pin; i++) 
	{
		res.push_back(false);
	}
	
	for (int i = 0; i < thrw; i++)
	{
		int start, stop;
		cin >> start >> stop;
		for (int j = start - 1; j < stop; j++)
		{
			res[j] = true;
		}
	}
	
	for (int i = 0; i < pin; i++)
	{
		if (res[i])
		{
			cout << '.';
		}
		else
		{
			cout << 'I';
		}
	}
}
