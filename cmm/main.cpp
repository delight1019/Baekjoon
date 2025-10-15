#pragma disable(4996)

#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>

using namespace std;

typedef signed short int16;
typedef unsigned short uint16;
typedef signed int int32;
typedef unsigned int uint32;
typedef long long int64;
typedef unsigned long long uint64;
typedef unsigned char ubyte;

#define MAX(a, b) a < b ? b : a
#define MIN(a, b) a < b ? a : b
#define ABS(a) a < 0 ? -a : a

const int32 MAX_N = 250000;

int64 counts[MAX_N + 1];
int64 sums[MAX_N + 1];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int32 N, X;
	cin >> N >> X;

	sums[0] = 0;

	for (int32 n = 1; n <= N; n++) {
		cin >> counts[n];
		sums[n] = sums[n - 1] + counts[n];
	}

	int64 maxCounts = 0;
	int64 maxPeriods = 0;

	for (int32 n = 0; n + X <= N; n++) {
		int64 curCount = sums[n + X] - sums[n];

		if (curCount == maxCounts) {
			maxPeriods++;
		}
		else if (curCount > maxCounts) {
			maxCounts = curCount;
			maxPeriods = 1;
		}
	}

	if (maxCounts == 0) {
		cout << "SAD";
	}
	else {
		cout << maxCounts << "\n";
		cout << maxPeriods;
	}

	return 0;
}