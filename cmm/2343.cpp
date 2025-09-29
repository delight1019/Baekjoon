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
//const int32 MAX_N = 100000;
//
//int32 N, M;
//vector<int32> lectures;
//vector<int32> sums;
//
//bool IsPossible(int32 t) {
//	int32 c = 1;
//	vector<int32>::iterator it = upper_bound(sums.begin(), sums.end(), t);
//
//	while (it != sums.end()) {
//		int32 temp = *(it - 1) + t;
//		it = upper_bound(it, sums.end(), temp);
//		c++;
//
//		if (c > M) return false;
//	}
//
//	return c <= M;
//}
//
//int32 solve(int32 lo, int32 hi) {
//	while (lo + 1 < hi) {
//		int32 mid = (lo + hi) / 2;
//
//		if (IsPossible(mid)) {
//			hi = mid;
//		}
//		else {
//			lo = mid;
//		}
//	}
//
//	return hi;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> N >> M;
//
//	lectures.resize(N);
//	sums.resize(N + 1);
//
//	sums[0] = 0;
//
//	for (int32 n = 0; n < N; n++) {
//		cin >> lectures[n];
//
//		sums[n + 1] = sums[n] + lectures[n];
//	}
//
//	cout << solve(sums[0], sums[N]);
//
//	return 0;
//}