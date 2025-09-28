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
//int32 price(int32 C, int32 P, int32 pr) {
//	int32 ret = 0;
//
//	while (C >= 0) {
//		C -= P;
//		ret += pr;
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
//	int32 N;
//	cin >> N;
//
//	int32 Y = 0;
//	int32 M = 0;
//
//	for (int32 n = 0; n < N; n++) {
//		int32 cur;
//		cin >> cur;
//
//		Y += price(cur, 30, 10);
//		M += price(cur, 60, 15);
//	}
//
//	if (Y == M) {
//		cout << "Y M " << Y;
//	}
//	else if (Y < M) {
//		cout << "Y " << Y;
//	}
//	else {
//		cout << "M " << M;
//	}
//
//	return 0;
//}