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

const int32 MAX_N = 20;

const int32 deltaR[4] = { 0, 0, 1, -1 };
const int32 deltaC[4] = { 1, -1, 0, 0 };

int32 classRoom[MAX_N][MAX_N] = { {0, }, };
int32 orders[MAX_N * MAX_N];
int32 friends[MAX_N * MAX_N + 1][4];

struct Chair {
	int32 r;
	int32 c;
	int32 score;

	Chair(int32 r, int32 c, int32 s) {
		this->r = r;
		this->c = c;
		this->score = s;
	}
};

int32 getScore(int32 number, int32 r, int32 c, int32 N) {
	if (classRoom[r][c] != 0) return -1;

	int32 score = 0;

	for (int32 n = 0; n < 4; n++) {
		int32 nextR = r + deltaR[n];
		int32 nextC = c + deltaC[n];

		if (nextR >= 0 && nextR < N && nextC >= 0 && nextC < N) {
			if (classRoom[nextR][nextC] == 0) {
				score += 1;
			}
			else {
				for (int i = 0; i < 4; i++) {
					if (classRoom[nextR][nextC] == friends[number][i]) {
						score += 10;
						break;
					}
				}
			}
		}
	}

	return score;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int32 N;
	cin >> N;

	for (int32 i = 0; i < N * N; i++) {
		int32 cur;
		cin >> cur;

		orders[i] = cur;

		for (int32 j = 0; j < 4; j++) {
			cin >> friends[cur][j];
		}
	}

	for (int32 i = 0; i < N * N; i++) {
		int32 cur = orders[i];

		Chair best(-1, -1, -1);

		for (int32 r = 0; r < N; r++) {
			for (int32 c = 0; c < N; c++) {
				int32 score = getScore(cur, r, c, N);

				if (best.score < score) {
					best.r = r;
					best.c = c;
					best.score = score;
				}
			}
		}

		classRoom[best.r][best.c] = cur;
	}

	int32 ret = 0;

	for (int32 r = 0; r < N; r++) {
		for (int32 c = 0; c < N; c++) {
			int32 cur = classRoom[r][c];
			int32 curScore = 0;

			for (int i = 0; i < 4; i++) {
				int32 nextR = r + deltaR[i];
				int32 nextC = c + deltaC[i];

				if (nextR >= 0 && nextR < N && nextC >= 0 && nextC < N) {
					for (int j = 0; j < 4; j++) {
						if (classRoom[nextR][nextC] == friends[cur][j]) {
							if (curScore == 0) {
								curScore = 1;
							}
							else {
								curScore *= 10;
							}
							break;
						}
					}
				}
			}

			ret += curScore;
		}
	}

	cout << ret;

	return 0;
}                                      