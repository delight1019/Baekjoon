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
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int32 N;
//	double current;
//	double gg, gb, bg, bb;
//
//	cin >> N >> current;
//	cin >> gg >> gb >> bg >> bb;
//
//	double g = 1 - current;
//	double b = current;
//
//	for (int32 n = 0; n < N; n++) {
//		double tg = g;
//		double tb = b;
//
//		g = tg * gg + tb * bg;
//		b = tg * gb + tb * bb;
//	}
//
//
//	cout << round(g * 1000) << "\n";
//	cout << round(b * 1000) << "\n";
//
//	return 0;
//}