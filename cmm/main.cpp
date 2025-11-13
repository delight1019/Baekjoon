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

const int DELTA_R[4] = { 1, -1, 0, 0 };
const int DELTA_C[4] = { 0, 0, 1, -1 };

char candies[50][50];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int32 N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> candies[i][j];
		}
	}

	int32 ret = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < 4; k++) {
				int r = i + DELTA_R[k];
				int c = j + DELTA_C[k];

				if (r >= 0 && r < N && c >= 0 && c < N) {
					char prev = candies[i][j];
					char cur = candies[r][c];

					candies[i][j] = cur;
					candies[r][c] = prev;

					int row = 1;
					int col = 1;

					for (int tr = i - 1; tr >= 0; tr--) {
						if (candies[tr][j] == cur) {
							row++;
						}
						else break;
					}

					for (int tr = i + 1; tr < N; tr++) {
						if (candies[tr][j] == cur) {
							row++;
						}
						else break;
					}

					for (int tc = j - 1; tc >= 0; tc--) {
						if (candies[i][tc] == cur) {
							col++;
						}
						else break;
					}
					for (int tc = j + 1; tc < N; tc++) {
						if (candies[i][tc] == cur) {
							col++;
						}
						else break;
					}

					candies[i][j] = prev;
					candies[r][c] = cur;

					ret = MAX(ret, row);
					ret = MAX(ret, col);
				}
			}
		}
	}

	cout << ret;

	return 0;
}