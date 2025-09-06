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
//int64 map[101][10][1024]; // 방문한 자리수, 현재 선택한 숫자, 지금까지 거쳐온 숫자
//
//const int64 MOD = 1000000000;
//
//int64 solve(int n) {
//	int64 ret = 0;
//
//	for (int i = 0; i < 10; i++) {
//		ret += map[n][i][1023];
//		ret %= MOD;
//	}
//
//	return ret;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	for (int i = 1; i <= 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			for (int k = 0; k < 10; k++) {
//				map[i][j][k] = 0;
//			}
//		}
//	}
//
//	for (int j = 1; j < 10; j++) {
//		map[1][j][1 << j] = 1;
//	}
//
//	for (int i = 2; i <= 100; i++) {
//		for (int j = 0; j < 10; j++) {
//			for (int k = 0; k < 1024; k++) {
//				if (j - 1 >= 0) {
//					map[i][j][k | (1 << j)] += map[i - 1][j - 1][k];
//				}
//				if (j + 1 <= 9) {
//					map[i][j][k | (1 << j)] += map[i - 1][j + 1][k];
//				}
//				map[i][j][k | (1 << j)] %= MOD;
//			}
//		}
//	}
//
//	int64 N;
//	cin >> N;
//
//	cout << solve(N);
//
//	return 0;
//}