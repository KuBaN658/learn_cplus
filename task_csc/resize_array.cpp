#include <iostream>


using namespace std;

char* resize(const char* str, unsigned size, unsigned new_size)
{
	char* data = new char[new_size];
	for (int i = 0; i < size && i < new_size; i++) {
		data[i] = str[i];
	}
	delete[] str;
	return data;

}

char* getline()
{
	char c;
	unsigned size = 100, step = 100;
	unsigned counter = 0;
	char* data = new char[size];
	while (cin.get(c)) {
		if (c == '\n') {
			break;
		}
		if (counter > size - 1) {
			data = resize(data, size, size + step);
			size += step;
		}
		data[counter] = c;
		counter++;
	}
	if (counter > size - 1) {
		data = resize(data, size, size + step);
	}
	data[counter] = '\0';
	return data;
}