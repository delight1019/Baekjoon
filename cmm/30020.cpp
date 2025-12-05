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
//typedef int32 INT;
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	INT A, B;
//	cin >> A >> B;
//
//	if (A <= B || A > 2 * B) {
//		cout << "NO";
//		return 0;
//	}
//
//	INT K = A - B;
//
//	cout << "YES\n";
//	cout << K << "\n";
//
//	while (K > 1) {
//		cout << "aba\n";
//		A -= 2;
//		B -= 1;
//		K--;
//	}
//
//	for (INT b = 0; b < B; b++) {
//		cout << "ab";
//	}
//
//	cout << "a";
//
//	return 0;
//}