//#pragma disable(4996)
//
//#include <iostream>
//#include <cstring>
//#include <vector>
//#include <queue>
//#include <algorithm>
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
//const int32 DENO = 10007;
//int64 cache[53][53];
//
//int64 binomial(int64 n, int64 k) {
//	if (k == 0 || n == k) return 1;
//
//	int64& ret = cache[n][k];
//
//	if (ret != -1) return ret;
//
//	ret = binomial(n - 1, k) + binomial(n - 1, k - 1);
//	ret %= DENO;
//	return ret;
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
//	memset(cache, -1, sizeof(cache));
//
//	int64 ret = 0;
//
//	for (int32 i = 1; 4 * i <= N; i++) {
//		int64 temp = binomial(13, i) * binomial(52 - 4 * i, N - 4 * i);
//		temp %= DENO;
//
//		if (i % 2 == 0) {
//			ret -= temp;
//
//			if (ret < 0) ret += DENO;
//		}
//		else {
//			ret += temp;
//		}
//
//		ret %= DENO;
//	}
//
//	cout << ret;
//
//	return 0;
//}