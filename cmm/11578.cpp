//#pragma disable(4996)
//
//#include <iostream>
//#include <cstring>
//#include <cmath>
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
//typedef int64 INT;
//
//constexpr INT MAX_N = 10;
//constexpr INT MAX_M = 10;
//constexpr INT MAX_VALUE = 10000;
//
//INT N, M;
//INT allSolved;
//INT students[MAX_M];
//
//INT ret = MAX_VALUE;
//
//void calculate(INT count, INT current, INT solved) {
//	if (current == M) {
//		if (solved == allSolved) {
//			ret = MIN(ret, count);
//		}
//
//		return;
//	}
//
//	calculate(count, current + 1, solved);
//	calculate(count + 1, current + 1, solved | students[current]);
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> N >> M;
//	allSolved = 0;
//
//	for (INT n = 0; n < N; n++) {
//		allSolved |= (1ll << n);
//	}
//
//	for (INT m = 0; m < M; m++) {
//		INT t;
//		cin >> t;
//
//		students[m] = 0;
//
//		for (INT i = 0; i < t; i++) {
//			INT problem;
//			cin >> problem;
//
//			students[m] |= (1ll << (problem - 1));
//		}
//	}
//
//	calculate(0ll, 0ll, 0ll);
//
//	if (ret == MAX_VALUE) {
//		cout << -1;
//	}
//	else {
//		cout << ret;
//	}
//
//	return 0;
//}