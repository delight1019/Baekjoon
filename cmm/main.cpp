#pragma disable(4996)

#include <iostream>
#include <cstring>

using namespace std;

typedef signed int int32;
typedef unsigned int uint32;
typedef long long int64;
typedef unsigned long long uint64;

const int32 MAX_N = 100;
const int32 MAX_VALUE = 1000000;
int32 coins[MAX_N];
int32 copied[MAX_N];
int32 cache[MAX_N][10001];
bool used[100001] = { false, };

int32 min(int32 a, int32 b) {
	return a < b ? a : b;
}

int32 solve(int32 cur, int32 left, int32 n) {
	if (left == 0) return 0;
	if (cur == n) return MAX_VALUE;

	if (cache[cur][left] != -1) return cache[cur][left];

	cache[cur][left] = MAX_VALUE;
	int32 nextCoin = coins[cur];

	for (int i = 0; i <= left / nextCoin; i++) {
		cache[cur][left] = min(cache[cur][left], i + solve(cur + 1, left - i * nextCoin, n));
	}

	return cache[cur][left];
}

void mergeSort(int32 s, int32 e, int32* arr, int32* copied) {
	if (e - s == 1) return;

	int32 mid = s + (e - s) / 2;
	mergeSort(s, mid, arr, copied);
	mergeSort(mid, e, arr, copied);

	for (int i = s; i < e; i++) {
		copied[i] = arr[i];
	}

	int32 left = s;
	int32 right = mid;

	for (int i = s; i < e; i++) {
		if (left == mid) {
			arr[i] = copied[right++];
		}
		else if (right == e) {
			arr[i] = copied[left++];
		}
		else if (copied[left] < copied[right]) {
			arr[i] = copied[left++];
		}
		else {
			arr[i] = copied[right++];
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int32 n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> coins[i];
	}

	mergeSort(0, n, coins, copied);

	int l = 0;

	for (int i = 1; i < n; i++) {
		if (coins[l] != coins[i]) {
			coins[++l] = coins[i];
		}
	}

	memset(cache, -1, sizeof(cache));

	int32 ret = solve(0, k, l + 1);

	if (ret == MAX_VALUE) {
		cout << -1;
	}
	else {
		cout << ret;
	}

	return 0;
}