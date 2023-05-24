#include <iostream>
#include <iomanip>

using namespace std;

void func(int *arr, int *num, int number);


int main() {
	int arr[5] = {0};
	int num = 0;
	func(arr, &num, 8);
	cout << arr[0] << " " << num;
}

void func(int *arr, int *num, int number) {
	arr[0] = number;
	*num = number;
}