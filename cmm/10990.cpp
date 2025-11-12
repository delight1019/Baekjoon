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
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int32 N;
//	cin >> N;
//
//	for (int32 n = 0; n < N; n++) {
//		int32 M = N + n;
//
//		for (int32 m = 1; m <= M; m++) {
//			if (m == (N - n) || m == (N + n)) {
//				cout << '*';
//			}
//			else {
//				cout << ' ';
//			}
//		}
//
//		cout << "\n";
//	}
//
//	return 0;
//}