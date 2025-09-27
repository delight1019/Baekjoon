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
//#define MAX(a, b) a < b ? b : a;
//#define MIN(a, b) a < b ? a : b;
//
//uint64 cache[64][128];
//
//// N ÃÊ, X °Å¸®
//uint64 solve(uint64 N, uint64 X) {
//	if (X == 0) return 0;
//	if (N == 0) return 1;
//
//	uint64& ret = cache[N][X];
//
//	if (ret != -1) return ret;
//
//	return ret = solve(N - 1, X + 1) + solve(N - 1, X - 1);
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	memset(cache, -1, sizeof(cache));
//
//	uint64 n, k;
//	cin >> k >> n;
//
//	if (k == 0) {
//		cout << 0;
//		return 0;
//	}
//
//	cout << solve(n, k);
//
//	return 0;
//}