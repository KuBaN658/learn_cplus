#include <iostream>
using namespace std;

bool contains1(int * m, int size, int value){
	for (int i = 0; i != size; i++) {
		if (m[i] == value) return true;
	}
	return false;
}
// ����� ����� �������, ������������ � ����������� ����������

bool contains2(int * p, int * q, int value) {
	// p - ��������� �� ������ �������
	// q - ��������� �� ���� �� ��������
	for (; p != q; p++) {
		if(*p == value) return true;
	}
	return false;
}

int main() {
	int arr[] = {1, 2, 3, 4};
	cout << contains2(arr, arr + 4, 5);
}
