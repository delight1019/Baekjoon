//#pragma disable(4996)
//
//#include <iostream>
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
//const int32 MAX_N = 100;
//int32 numbers[MAX_N];
//
//int64 GCD(int32 a, int32 b) {
//	if (a < b) {
//		int32 temp = a;
//		a = b;
//		b = temp;
//	}
//
//	while (b > 0) {
//		int32 r = a % b;
//		a = b;
//		b = r;
//	}
//
//	return a;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int32 t;
//	cin >> t;
//
//	for (int32 testCase = 1; testCase <= t; testCase++) {
//		int32 n;
//		cin >> n;
//
//		for (int32 i = 0; i < n; i++) {
//			cin >> numbers[i];
//		}
//
//		int64 ret = 0;
//
//		for (int32 i = 0; i < n; i++) {
//			for (int32 j = i + 1; j < n; j++) {
//				ret += GCD(numbers[i], numbers[j]);
//			}
//		}
//
//		cout << ret << "\n";
//	}
//
//	return 0;
//}