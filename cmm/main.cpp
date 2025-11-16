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

int64 cache[1000001] = { 0, };
int64 sum[1000001] = { 0, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int32 i = 1; i <= 1000000; i++) {
		for (int32 j = 1; j <= 1000000; j++) {
			if (i * j > 1000000) break;

			cache[i * j] += i;
		}
	}

	for (int32 i = 1; i <= 1000000; i++) {
		sum[i] = sum[i - 1] + cache[i];
	}

	int32 T;
	cin >> T;

	for (int32 testCase = 1; testCase <= T; testCase++) {
		int32 N;
		cin >> N;

		cout << sum[N] << "\n";
	}
	
	return 0;
}