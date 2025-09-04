//#pragma disable(4996)
//
//#include <iostream>
//
//using namespace std;
//
//typedef signed int int32;
//typedef unsigned int uint32;
//typedef long long int64;
//typedef unsigned long long uint64;
//
//const int32 MAX_N = 4000;
//
//int64 A[MAX_N];
//int64 B[MAX_N];
//int64 C[MAX_N];
//int64 D[MAX_N];
//
//int64 AB[MAX_N * MAX_N];
//int64 CD[MAX_N * MAX_N];
//int64 copied[MAX_N * MAX_N];
//
//void mergeSort(int32 s, int32 e, int64* arr, int64* copied) {
//	if (e - s == 1) return;
//
//	int32 mid = s + (e - s) / 2;
//	mergeSort(s, mid, arr, copied);
//	mergeSort(mid, e, arr, copied);
//
//	for (int32 i = s; i < e; i++) {
//		copied[i] = arr[i];
//	}
//
//	int32 left = s;
//	int32 right = mid;
//
//	for (int32 i = s; i < e; i++) {
//		if (left == mid) {
//			arr[i] = copied[right++];
//		}
//		else if (right == e) {
//			arr[i] = copied[left++];
//		}
//		else if (copied[left] < copied[right]) {
//			arr[i] = copied[left++];
//		}
//		else {
//			arr[i] = copied[right++];
//		}
//	}
//}
//
//int32 lowerBound(int32 s, int32 e, int64 value) {
//	while (s + 1 < e) {
//		int32 mid = s + (e - s) / 2;
//
//		if (CD[mid] + value < 0) {
//			s = mid;
//		}
//		else {
//			e = mid;
//		}
//	}
//
//	return e;
//}
//
//int32 upperBound(int32 s, int32 e, int64 value) {
//	while (s + 1 < e) {
//		int32 mid = s + (e - s) / 2;
//
//		if (CD[mid] + value <= 0) {
//			s = mid;
//		}
//		else {
//			e = mid;
//		}
//	}
//
//	return e;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int32 n;
//	cin >> n;
//
//	for (int32 i = 0; i < n; i++) {
//		cin >> A[i] >> B[i] >> C[i] >> D[i];
//	}
//
//	int32 index = 0;
//
//	for (int32 i = 0; i < n; i++) {
//		for (int32 j = 0; j < n; j++) {
//			AB[index] = A[i] + B[j];
//			CD[index++] = C[i] + D[j];
//		}
//	}
//
//	mergeSort(0, index, AB, copied);
//	mergeSort(0, index, CD, copied);
//
//	int64 ret = 0;
//
//	for (int32 i = 0; i < index; i++) {
//		if (AB[i] + CD[0] > 0) continue;
//		if (AB[i] + CD[index - 1] < 0) continue;
//
//		int64 lower = (AB[i] + CD[0] == 0) ? 0 : lowerBound(0, index - 1, AB[i]);
//		int64 upper = (AB[i] + CD[index - 1] == 0) ? index : upperBound(0, index - 1, AB[i]);
//
//		ret += (upper - lower);
//	}
//
//	cout << ret;
//
//	return 0;
//}