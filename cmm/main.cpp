#pragma disable(4996)

#include <iostream>
#include <cstring>

using namespace std;

typedef signed short int16;
typedef unsigned short uint16;
typedef signed int int32;
typedef unsigned int uint32;
typedef long long int64;
typedef unsigned long long uint64;
typedef unsigned char ubyte;

#define MAX(a, b) a < b ? b : a;
#define MIN(a, b) a < b ? a : b;

int32 getMax(int32 a, int32 b) {
	return MAX(a, b);
}

int32 getMin(int32 a, int32 b) {
	return MIN(a, b);
}

struct Point {
	int32 x;
	int32 y;
};

struct Line {
	Point p1;
	Point p2;
};

const int32 MAX_N = 3000;

Line lines[MAX_N];

int32 ccw(Point p1, Point p2, Point p3) {
	int32 temp = (p2.x - p1.x) * (p3.y - p1.y) - (p3.x - p1.x) * (p2.y - p1.y);
	return temp > 0 ?
		1 :
		temp < 0 ?
		-1 : 0;
}

bool isIntersect(Line l1, Line l2) {
	int c1 = ccw(l1.p1, l1.p2, l2.p1) * ccw(l1.p1, l1.p2, l2.p2);
	int c2 = ccw(l2.p1, l2.p2, l1.p1) * ccw(l2.p1, l2.p2, l1.p2);

	if (c1 <= 0 && c2 <= 0) {
		if (c1 == 0 && c2 == 0) {
			return (getMin(l1.p1.x, l1.p2.x) <= getMax(l2.p1.x, l2.p2.x)) &&
				(getMin(l2.p1.x, l2.p2.x) <= getMax(l1.p1.x, l1.p2.x)) &&
				(getMin(l1.p1.y, l1.p2.y) <= getMax(l2.p1.y, l2.p2.y)) &&
				(getMin(l2.p1.y, l2.p2.y) <= getMax(l1.p1.y, l1.p2.y));

		}

		return true;
	}

	return false;
}

int32 parents[MAX_N];
int32 sizes[MAX_N];
bool checked[MAX_N] = { false, };

int32 find(int32 x) {
	if (parents[x] == x) return x;

	parents[x] = find(parents[x]);
	return parents[x];
}

void doUnion(int32 x, int32 y) {
	x = find(x);
	y = find(y);

	if (x == y) return;

	if (sizes[x] > sizes[y]) {
		parents[y] = x;
		sizes[x] += sizes[y];
	}
	else {
		parents[x] = y;
		sizes[y] += sizes[x];
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int32 N;
	cin >> N;

	for (int32 n = 0; n < N; n++) {
		Line& curline = lines[n];
		cin >> curline.p1.x >> curline.p1.y >> curline.p2.x >> curline.p2.y;

		parents[n] = n;
		sizes[n] = 1;
	}

	for (int32 i = 0; i < N; i++) {
		for (int32 j = i + 1; j < N; j++) {
			if (isIntersect(lines[i], lines[j])) {
				doUnion(i, j);
			}
		}
	}

	int32 retCount = 0;
	int32 retMax = 0;

	for (int32 i = 0; i < N; i++) {
		if (!checked[find(i)]) {
			checked[find(i)] = true;
			retMax = MAX(retMax, sizes[find(i)]);
			retCount++;
		}
	}

	cout << retCount << "\n";
	cout << retMax;

	return 0;
}                                      