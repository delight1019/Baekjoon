#pragma disable(4996)

#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
#include <algorithm>

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

int64 AValues[37];
int64 BValues[37];

bool isExpressible(char x, int32 n) {
	if ('0' <= x && x <= '9') {
		int32 nx = x - '0';
		return nx < n;
	}
	else {
		int32 nx = (x - 'a') + 10;
		return nx < n;
	}
}

int32 toNumber(char x) {
	if ('0' <= x && x <= '9') {
		return x - '0';
	}
	else {
		return (x - 'a') + 10;
	}
}

int64 checkString(string XA, int32 n) {
	int64 ret = 0;

	for (int32 i = 0; i < XA.length(); i++) {
		int nx = toNumber(XA[i]);

		if (nx >= n) {
			return -1;
		}

		ret *= n;
		ret += nx;

		// overflow
		if (ret < 0) {
			return -1;
		}
	}

	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string XA, XB;
	cin >> XA >> XB;	

	for (int i = 2; i <= 36; i++) {
		AValues[i] = checkString(XA, i);
		BValues[i] = checkString(XB, i);
	}	

	int32 ret = 0;
	int32 retA = 0;
	int32 retB = 0;

	for (int i = 2; i <= 36; i++) {
		if (AValues[i] == -1) continue;

		for (int j = 2; j <= 36; j++) {
			if (i == j) continue;

			if (AValues[i] == BValues[j]) {
				ret++;
				retA = i;
				retB = j;
			}
		}
	}

	if (ret == 0) {
		cout << "Impossible";
	}
	else if (ret > 1) {
		cout << "Multiple";
	}
	else {
		cout << AValues[retA] << " " << retA << " " << retB;
	}

	return 0;
}                                      