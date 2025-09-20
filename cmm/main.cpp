#pragma disable(4996)

#include <iostream>
#include <cstring>
#include <vector>
#include <queue>

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

const int64 DENO = 1000000007;

using MAT = vector<vector<uint64>>;

const MAT factor = {
	{0, 1, 1, 0, 0, 0, 0, 0}, // 0
	{1, 0, 1, 1, 0, 0, 0, 0}, // 1
	{1, 1, 0, 1, 1, 0, 0, 0}, // 2
	{0, 1, 1, 0, 1, 1, 0, 0}, // 3
	{0, 0, 1, 1, 0, 1, 1, 0}, // 4
	{0, 0, 0, 1, 1, 0, 0, 1}, // 5
	{0, 0, 0, 0, 1, 0, 0, 1}, // 6
	{0, 0, 0, 0, 0, 1, 1, 0}, // 7
};

const MAT id = {
	{1, 0, 0, 0, 0, 0, 0, 0},
	{0, 1, 0, 0, 0, 0, 0, 0},
	{0, 0, 1, 0, 0, 0, 0, 0},
	{0, 0, 0, 1, 0, 0, 0, 0},
	{0, 0, 0, 0, 1, 0, 0, 0},
	{0, 0, 0, 0, 0, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, 1, 0},
	{0, 0, 0, 0, 0, 0, 0, 1}
};

MAT multiplyMat(const MAT& mat1, const MAT& mat2) {
	MAT ret(8, vector<uint64>(8));

	for (int i = 0; i < 8; i++) {		
		for (int j = 0; j < 8; j++) {
			uint64 temp = 0;

			for (int k = 0; k < 8; k++) {
				temp += mat1[i][k] * mat2[k][j];
				temp %= DENO;
			}

			ret[i][j] = temp;
		}
	}

	return ret;
}

MAT solve(int32 d) {
	if (d == 0) return id;
	if (d == 1) return factor;

	MAT temp = solve(d / 2);
	MAT ret = multiplyMat(temp, temp);

	return d % 2 == 0 ? ret : multiplyMat(ret, factor);
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int64 D;
	cin >> D;

	MAT ansMat = solve(D);

	cout << ansMat[0][0];

	return 0;
}                                      