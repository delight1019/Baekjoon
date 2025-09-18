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

const int32 MAX_N = 1000;

int32 dice[7];

int32 calcScore() {
	int32 two = 0;

	for (int32 i = 1; i <= 6; i++) {
		if (dice[i] == 4) {
			return 50000 + i * 5000;
		}
		if (dice[i] == 3) {
			return 10000 + i * 1000;
		}
		if (dice[i] == 2) {
			two++;
		}
	}

	if (two == 2) {
		int32 ret = 2000;

		for (int32 i = 1; i <= 6; i++) {
			if (dice[i] == 2) {
				ret += i * 500;
			}
		}

		return ret;
	}
	else if (two == 1) {
		for (int32 i = 1; i <= 6; i++) {
			if (dice[i] == 2) {
				return 1000 + i * 100;
			}
		}
	}
	else {
		for (int32 i = 6; i > 0; i--) {
			if (dice[i] > 0) {
				return i * 100;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int32 N;
	cin >> N;

	int32 ret = 0;

	for (int32 n = 0; n < N; n++) {
		memset(dice, 0, sizeof(dice));		

		for (int i = 0; i < 4; i++) {
			int32 temp;
			cin >> temp;
			dice[temp]++;
		}

		ret = MAX(ret, calcScore());
	}

	cout << ret;

	return 0;
}                                      