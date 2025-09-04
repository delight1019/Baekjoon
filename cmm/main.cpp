#pragma disable(4996)

#include <iostream>

using namespace std;

typedef signed int int32;
typedef unsigned int uint32;
typedef long long int64;
typedef unsigned long long uint64;

const int32 MAX_N = 5000;

int64 liquids[MAX_N];
int64 copied[MAX_N];

void mergeSort(int32 s, int32 e, int64* arr, int64* copiedArr) {
	if (e - s == 1) return;

	int32 mid = s + (e - s) / 2;
	mergeSort(s, mid, arr, copiedArr);
	mergeSort(mid, e, arr, copiedArr);

	for (int32 i = s; i < e; i++) {
		copiedArr[i] = arr[i];
	}

	int32 left = s;
	int32 right = mid;

	for (int32 i = s; i < e; i++) {
		if (left == mid) {
			arr[i] = copiedArr[right++];
		}
		else if (right == e) {
			arr[i] = copiedArr[left++];
		}
		else if (copiedArr[left] < copiedArr[right]) {
			arr[i] = copiedArr[left++];
		}
		else {
			arr[i] = copiedArr[right++];
		}
	}
}

int64 getABS(int64 value) {
	return value > 0 ? value : -value;
}

int32 binarySearch(int32 s, int32 e, int64 curValue) {
	while (s <= e) {
		int32 mid = s + (e - s) / 2;

		if (liquids[mid] + curValue == 0) return mid;

		if (liquids[mid] + curValue < 0) {
			int64 curRet = getABS(liquids[mid] + curValue);

			if (mid + 1 <= e) {
				int64 nextRet = getABS(liquids[mid + 1] + curValue);

				if (nextRet < curRet) {
					s = mid + 1;
				}
				else {
					return mid;
				}
			}
			else {
				return mid;
			}
		}
		else {
			int64 curRet = getABS(liquids[mid] + curValue);

			if (mid - 1 >= s) {
				int64 nextRet = getABS(liquids[mid - 1] + curValue);

				if (nextRet < curRet) {
					e = mid - 1;
				}
				else {
					return mid;
				}
			}
			else {
				return mid;
			}
		}
	}

	return -1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int32 N;
	cin >> N;

	for (int32 i = 0; i < N; i++) {
		cin >> liquids[i];
	}

	mergeSort(0, N, liquids, copied);

	int64 ret = 5000000000;
	int64 ret1, ret2, ret3;

	for (int32 i = 0; i < N; i++) {
		for (int32 j = N - 1; j > i; j--) {
			int32 temp = binarySearch(i + 1, j - 1, liquids[i] + liquids[j]);

			if (temp == -1) continue;

			int64 cur = getABS(liquids[i] + liquids[j] + liquids[temp]);

			if (cur < ret) {
				ret1 = i;
				ret2 = temp;
				ret3 = j;
				ret = cur;
			}
		}
	}

	cout << liquids[ret1] << " " << liquids[ret2] << " " << liquids[ret3];

	return 0;
}