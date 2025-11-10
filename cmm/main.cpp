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

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int32 R, C, ZR, ZC;

	cin >> R >> C >> ZR >> ZC;

	for (int32 r = 0; r < R; r++) {
		string input;
		cin >> input;

		for (int32 zr = 0; zr < ZR; zr++) {
			for (int32 c = 0; c < C; c++) {
				for (int32 zc = 0; zc < ZC; zc++) {
					cout << input[c];
				}
			}

			cout << "\n";
		}
	}

	return 0;
}