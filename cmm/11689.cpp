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
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	uint64 n;
//	cin >> n;
//
//	uint64 ret = n;
//
//	uint64 p = 2;
//
//	while (p * p <= n) {
//		if (n % p == 0) {
//			ret /= p;
//			ret *= (p - 1);
//
//			while (n % p == 0) {
//				n /= p;
//			}
//		}
//
//		p++;
//	}
//
//	if (n > 1) {
//		ret /= n;
//		ret *= (n - 1);
//	}
//
//	cout << ret;
//
//	return 0;
//}