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

const int32 MAX_N = 100000;

int32 N;

int32 board[MAX_N + 1][3];
int32 maxCache[MAX_N + 1][3];
int32 minCache[MAX_N + 1][3];

int32 calculateMax(int32 r, int32 c) {
	if (r > N || c < 0 || c >= 3) return 0;

	int32& ret = maxCache[r][c];

	if (ret != -1) return ret;

	ret = calculateMax(r + 1, c - 1);
	ret = MAX(ret, calculateMax(r + 1, c));
	ret = MAX(ret, calculateMax(r + 1, c + 1));

	ret += board[r][c];

	return ret;
}

int32 calculateMin(int32 r, int32 c) {
	if (r > N || c < 0 || c >= 3) return 10000000;
	if (r == N) return board[r][c];

	int32& ret = minCache[r][c];

	if (ret != -1) return ret;

	ret = calculateMin(r + 1, c - 1);
	ret = MIN(ret, calculateMin(r + 1, c));
	ret = MIN(ret, calculateMin(r + 1, c + 1));

	ret += board[r][c];

	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	memset(board, 0, sizeof(board));
	memset(maxCache, -1, sizeof(maxCache));
	memset(minCache, -1, sizeof(minCache));

	cin >> N;

	for (int32 n = 1; n <= N; n++) {
		for (int32 c = 0; c < 3; c++) {
			cin >> board[n][c];
		}
	}

	cout << calculateMax(0, 1) << " " << calculateMin(0, 1);

	return 0;
}