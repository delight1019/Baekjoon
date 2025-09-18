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

bool cache[10];

int32 solve(int64 X) {
	memset(cache, false, sizeof(cache));

	while (X > 0) {
		cache[X % 10] = true;
		X /= 10;
	}

	int32 ret = 0;

	for (int32 i = 0; i < 10; i++) {
		if (cache[i]) ret++;
	}

	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int32 T;
	cin >> T;

	for (int32 testCase = 1; testCase <= T; testCase++) {
		int64 X;
		cin >> X;

		cout << solve(X) << "\n";
	}

	return 0;
}                                      