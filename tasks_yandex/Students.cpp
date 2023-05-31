#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;


struct Student
{
	string name;
	string family;
	double avg_point;
};

bool cmp(Student one, Student two) {
	return one.avg_point > two.avg_point;
}

int main() {
	int n;
	vector <Student> students;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string name;
		string family;
		cin >> name >> family;
		double sum = 0;
		int temp;
		for (int j = 0; j < 3; j++) {
			cin >> temp;
			sum += temp;
		}
		Student student;
		student.name = name;
		student.family = family;
		student.avg_point = sum / 3.0;
		students.push_back(student);
	}

	stable_sort(students.begin(), students.end(), cmp);

	for (auto el : students) {
		cout << el.name << " " << el.family << endl;
	}
}