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
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int32 N, M;
//	cin >> N >> M;
//
//	int32 package = 1000;
//	int32 one = 1000;
//
//	for (int32 m = 0; m < M; m++) {
//		int32 p, o;
//		cin >> p >> o;
//
//		package = MIN(package, p);
//		one = MIN(one, o);
//	}
//
//	int32 ret = 1000 * N;
//
//	for (int32 i = 0; i <= (N / 6) + 1; i++) {
//		int32 temp = i * package;
//		if (N - i * 6 >= 0) {
//			temp += (N - i * 6) * one;
//		}
//		ret = MIN(ret, temp);
//	}
//
//	cout << ret;
//
//	return 0;
////}