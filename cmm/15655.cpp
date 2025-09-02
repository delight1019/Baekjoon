//#pragma disable(4996)
//
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//typedef signed int int32;
//typedef unsigned int uint32;
//typedef long long int64;
//typedef unsigned long long uint64;
//
//const int32 MAX_N = 8;
//
//int32 Arr[MAX_N];
//int32 CopiedArr[MAX_N];
//
//void mergeSort(int32 s, int32 e, int32* arr, int32* copiedArr) {
//	if (e - s == 1) return;
//
//	int32 mid = s + (e - s) / 2.0;
//	mergeSort(s, mid, arr, copiedArr);
//	mergeSort(mid, e, arr, copiedArr);
//
//	for (int32 i = s; i < e; i++) {
//		copiedArr[i] = arr[i];
//	}
//
//	int32 left = s;
//	int32 right = mid;
//
//	for (int32 i = s; i < e; i++) {
//		if (right == e) {
//			arr[i] = copiedArr[left++];
//		}
//		else if (left == mid) {
//			arr[i] = copiedArr[right++];
//		}
//		else if (copiedArr[left] < copiedArr[right]) {
//			arr[i] = copiedArr[left++];
//		}
//		else {
//			arr[i] = copiedArr[right++];
//		}
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int32 N, M;
//	cin >> N >> M;
//
//	for (int i = 0; i < N; i++) {
//		cin >> Arr[i];
//	}
//
//	mergeSort(0, N, Arr, CopiedArr);
//
//	int32* indexArr = new int32[M];
//
//	for (int i = 0; i < M; i++) {
//		indexArr[i] = i;
//	}
//
//	bool isDone = false;
//
//	while (!isDone) {
//		for (int i = 0; i < M; i++) {
//			cout << Arr[indexArr[i]] << " ";
//		}
//		cout << "\n";
//
//		int32 m = M - 1;
//
//		while (true) {
//			if (m < 0) {
//				isDone = true;
//				break;
//			}
//
//			indexArr[m]++;
//
//			if (indexArr[m] == (N + m - (M - 1))) {
//				m--;
//				continue;
//			}
//			else {
//				for (int32 i = m + 1; i < M; i++) {
//					indexArr[i] = indexArr[i - 1] + 1;
//				}
//				break;
//			}
//		}
//	}
//
//	return 0;
//}