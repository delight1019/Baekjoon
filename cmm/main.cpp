#pragma disable(4996)

#include <iostream>
#include <cmath>

using namespace std;

typedef signed int int32;
typedef unsigned int uint32;
typedef long long int64;
typedef unsigned long long uint64;
typedef long double double64;

struct Point {
	double64 x;
	double64 y;
};

const int32 MAX_N = 10000;

Point points[MAX_N];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int32 N;
	cin >> N;	

	for (int32 i = 0; i < N; i++) {
		cin >> points[i].x >> points[i].y;
	}

	double64 ret = 0.0;
	int32 j = N - 1;

	for (int i = 0; i < N; i++) {
		ret += (points[j].x + points[i].x) * (points[j].y - points[i].y);
		j = i;
	}

	ret /= 2.0;
	ret = abs(ret);

	cout << fixed;
	cout.precision(1);
	cout << ret;

	return 0;
}