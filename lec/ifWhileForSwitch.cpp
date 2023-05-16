#include <iostream>


int main() 
{
	int x = 10;
	while (x > 0) 
	{
		x--;
		if (x % 2 == 0) continue;
		std::cout << x << ' ';
		if (x == 5) break;
	}
	
	std::cout << "\n------------\n";
	
	int i = 10;
	do 
	{
		std::cout << i << ' ';
		i++;
	} 
	while (i < 20);
	
	std::cout << "\n------------\n";
	
	for (int i = 0; i < 10; i += 2) 
	{
		if (i == 2) continue;
		if (i == 6) break;
		std::cout << i << ' ';
	}
	
	std::cout << "\n------------\n";
	
	int a;
	char l, y, z;
	a = 10;
	l = 'L';
	y = 'Y';
	z = (a > 0)? l:y;
	std::cout << z;
	
	std::cout << "\n------------\n";
	
	
	x = 0;
	switch (x) 
	{
		case 0: std::cout << "zero";
		break;
		case 1: std::cout << "one";
		break;
		default: std::cout << "default";
		break;
	}
	
}
