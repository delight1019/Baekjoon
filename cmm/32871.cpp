//#pragma disable(4996)
//
//#include <iostream>
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
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int32 T;
//	cin >> T;
//
//	for (int32 testCase = 1; testCase <= T; testCase++) {
//		uint64 n, m;
//		cin >> n >> m;
//
//		if (n == 1 || m == 1) {
//			cout << "YES" << "\n";
//			continue;
//		}
//
//		if ((n + m - 4) % 2 == 0) {
//			cout << "NO" << "\n";
//		}
//		else {
//			cout << "YES" << "\n";
//		}
//	}
//
//	return 0;
//}