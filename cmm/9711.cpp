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
//int64 Ps[10001];
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int32 T;
//	cin >> T;
//
//	Ps[1] = 1;
//	Ps[2] = 1;
//
//	for (int32 testCase = 1; testCase <= T; testCase++) {
//		int64 P, Q;
//		cin >> P >> Q;
//
//		for (int64 i = 3; i <= P; i++) {
//			Ps[i] = Ps[i - 1] + Ps[i - 2];
//			Ps[i] %= Q;
//		}
//
//		cout << "Case #" << testCase << ": " << Ps[P] % Q << "\n";
//	}
//
//	return 0;
//}