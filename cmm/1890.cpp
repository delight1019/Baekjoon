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
//const int32 MAX_N = 100;
//
//int64 board[MAX_N][MAX_N];
//int64 cache[MAX_N][MAX_N];
//
//int32 N;
//
//int64 calculate(int32 r, int32 c) {
//	if (r >= N || c >= N) return 0;
//	if (r == N - 1 && c == N - 1) return 1;
//
//	int64& ret = cache[r][c];
//
//	if (ret != -1) return ret;
//
//	if (board[r][c] == 0) {
//		ret = 0;
//	}
//	else {
//		int64 next = board[r][c];
//		ret = calculate(r + next, c);
//		ret += calculate(r, c + next);
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
//	memset(cache, -1, sizeof(cache));
//	cin >> N;
//
//	for (int32 n = 0; n < N; n++) {
//		for (int32 m = 0; m < N; m++) {
//			cin >> board[n][m];
//		}
//	}
//
//	cout << calculate(0, 0);
//
//	return 0;
//}