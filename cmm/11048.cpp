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
//const int32 MAX_N = 1000;
//const int32 MAX_M = 1000;
//
//int32 cache[MAX_N][MAX_M];
//int32 candies[MAX_N][MAX_M];
//
//int32 N, M;
//
//int32 calculate(int32 n, int32 m) {
//	if (n == N || m == M) return 0;
//
//	int32& ret = cache[n][m];
//
//	if (ret != -1) return ret;
//
//	ret = MAX(ret, candies[n][m] + calculate(n + 1, m));
//	ret = MAX(ret, candies[n][m] + calculate(n, m + 1));
//	ret = MAX(ret, candies[n][m] + calculate(n + 1, m + 1));
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
//	cin >> N >> M;
//
//	for (int32 n = 0; n < N; n++) {
//		for (int32 m = 0; m < M; m++) {
//			cin >> candies[n][m];
//		}
//	}
//
//	cout << calculate(0, 0);
//
//	return 0;
//}