#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>


using namespace std;

struct Point
{
	int x;
	int y;
};

bool cmp(Point one, Point two) {
	return pow(one.x, 2) + pow(one.y, 2) < pow(two.x, 2) + pow(two.y, 2);
}

int main() {
	int n;
	vector <Point> points;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		int y;
		cin >> x >> y;
		Point temp;
		temp.x = x;
		temp.y = y;
		points.push_back(temp);
	}

	sort(points.begin(), points.end(), cmp);

	for (auto el : points) {
		cout << el.x << " " << el.y << endl;
	}
}
