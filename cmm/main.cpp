#pragma disable(4996)

#include <iostream>
#include <cstring>

using namespace std;

typedef signed int int32;
typedef unsigned int uint32;
typedef long long int64;
typedef unsigned long long uint64;

const int32 MAX_N = 16;
const int32 max_k = (1 << 16) - 1;
const int32 MAX_VALUE = 1000000000;

int64 W[MAX_N + 1][MAX_N + 1];
int64 cache[MAX_N][max_k];

int64 Min(int64 a, int64 b) {
	return a < b ? a : b;
}

int64 DFS(int32 curNode, int32 visited, int32 N, int32 completed) {
	if (visited == completed) {
		if (W[curNode][0] == 0) return MAX_VALUE;
		return W[curNode][0];
	}

	if (cache[curNode][visited] != -1) return cache[curNode][visited];
	cache[curNode][visited] = MAX_VALUE;

	for (int i = 0; i < N; i++) {
		if (W[curNode][i] == 0) continue;
		if (visited & (1 << i)) continue;

		cache[curNode][visited] = Min(cache[curNode][visited], W[curNode][i] + DFS(i, visited | (1 << i), N, completed));
	}

	return cache[curNode][visited];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int32 N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> W[i][j];
		}
	}

	memset(cache, -1, sizeof(cache));
	cout << DFS(0, 1, N, (1 << N) - 1);

	return 0;
}