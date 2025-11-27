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
//	uint64 N, F;
//	cin >> N >> F;
//
//	N -= (N % 100);
//
//	for (uint64 n = 0; n < 100; n++) {
//		if ((N + n) % F == 0) {
//			if (n < 10) {
//				cout << 0;
//			}
//			cout << n;
//			break;
//		}
//	}
//
//	return 0;
//}