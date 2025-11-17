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

const int32 MAX_N = 100000;
const int32 DEVIDE = 9901;

int32 cache[3][MAX_N + 1];

int32 calculate(int32 pre, int32 n) {
	if (n == 0) return 1;

	int32& ret = cache[pre][n];

	if (ret != -1) {
		return ret;
	}

	if (pre == 0) {
		ret = calculate(0, n - 1) % DEVIDE;
		ret += calculate(1, n - 1) % DEVIDE;
		ret %= DEVIDE;
		ret += calculate(2, n - 1) % DEVIDE;
		ret %= DEVIDE;		
	}
	else if (pre == 1) {
		ret = calculate(2, n - 1) % DEVIDE;
		ret += calculate(0, n - 1) % DEVIDE;
		ret %= DEVIDE;
	}
	else if (pre == 2) {
		ret = calculate(1, n - 1) % DEVIDE;
		ret += calculate(0, n - 1) % DEVIDE;
		ret %= DEVIDE;
	}

	return ret;
}      

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	memset(cache, -1, sizeof(cache));

	int32 N;
	cin >> N;

	cout << calculate(0, N);

	return 0;
}