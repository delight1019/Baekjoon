#pragma disable(4996)

#include <iostream>
#include <cstring>
#include <cmath>

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

typedef int64 INT;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	INT n;
	cin >> n;

	INT ret = 0;

	for (INT i = 3; i <= n; i += 3) {
		for (INT j = 3; j <= n; j += 3) {
			if (i + j < n) {
				ret++;
			}
		}
	}

	cout << ret;

	return 0;
}