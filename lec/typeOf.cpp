#include <iostream>

int main()
{
	short x8;
	int x16;
	long x32;
	long long x64;
	
	std::cout << "x8" << ": " << sizeof(x8) << "\n";
	std::cout << "x8" << ": " << sizeof(x16) << "\n";
	std::cout << "x8" << ": " << sizeof(x32) << "\n";
	std::cout << "x8" << ": " << sizeof(x64) << "\n";
}
