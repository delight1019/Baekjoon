//#pragma disable(4996)
//
//#include <iostream>
//#include <cstring>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <stack>
//
//using namespace std;
//
//typedef signed short int16;
//typedef unsigned short uint16;
//typedef signed int int32;
//typedef unsigned int uint32;
//typedef long long int64;
//typedef unsigned long long uint64;
//typedef unsigned char ubyte;
//
//#define MAX(a, b) a < b ? b : a
//#define MIN(a, b) a < b ? a : b
//#define ABS(a) a < 0 ? -a : a
//
//int32 N, M;
//int32 pays[2001] = { 0, };
//int32 T[1001][2001];
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> N >> M;
//
//	for (int32 n = 1; n <= N; n++) {
//		cin >> pays[n];
//	}
//
//	for (int32 n = 1; n <= N; n++) {
//		for (int32 m = 1; m <= N + M; m++) {
//			cin >> T[n][m];
//
//			pays[n] -= T[n][m];
//			pays[m] += T[n][m];
//		}
//	}
//
//	for (int32 i = 1; i <= N + M; i++) {
//		cout << pays[i] << " ";
//	}
//
//	return 0;
//}