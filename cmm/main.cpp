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

const int32 MAX_VALUE = 100000000;

int32 P[10001];
int32 N;

int32 cache[10001];

int32 calculate(int32 n) {
	if (n <= 0) return 0;

	int32& ret = cache[n];

	if (ret != -1) return ret;

	ret = P[n];

	for (int32 i = 1; i <= n; i++) {
		ret = MIN(ret, P[i] + calculate(n - i));
	}

	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	memset(cache, -1, sizeof(cache));

	cin >> N;

	for (int32 n = 1; n <= N; n++) {
		cin >> P[n];
	}

	int32 ret = calculate(N);

	cout << ret;

	return 0;
}