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
//const int32 MAX_N = 100000;
//
//struct Player {
//	int32 index;
//	int32 value;
//};
//
//int32 scores[MAX_N] = { 0, };
//Player players[MAX_N];
//Player copied[MAX_N];
//
//void mergeSort(int32 s, int32 e, Player* arr, Player* copied) {
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
//		else if (copied[left].value < copied[right].value) {
//			arr[i] = copied[left++];
//		}
//		else {
//			arr[i] = copied[right++];
//		}
//	}
//}
//
//int32 binarySearch(int32 s, int32 e, int32 value) {
//	while (s <= e) {
//		int32 mid = s + (e - s) / 2;
//
//		if (players[mid].value == value) return mid;
//
//		if (players[mid].value < value) {
//			s = mid + 1;
//		}
//		else {
//			e = mid - 1;
//		}
//	}
//
//	return -1;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int32 N;
//	cin >> N;
//
//	for (int32 i = 0; i < N; i++) {
//		cin >> players[i].value;
//		players[i].index = i;
//	}
//
//	mergeSort(0, N, players, copied);
//	int32 maxValue = players[N - 1].value;
//
//	for (int32 i = 0; i < N; i++) {
//		int32 c = 2;
//
//		while (players[i].value * c <= maxValue) {
//			int32 ret = binarySearch(i + 1, N - 1, c * players[i].value);
//
//			if (ret != -1) {
//				scores[players[i].index]++;
//				scores[players[ret].index]--;
//			}
//
//			c++;
//		}
//	}
//
//	for (int32 i = 0; i < N; i++) {
//		cout << scores[i] << " ";
//	}
//
//	return 0;
//}