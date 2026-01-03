//#pragma disable(4996)
//
//#include <iostream>
//#include <cstring>
//#include <cmath>
//#include <queue>
//#include <map>
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
//
//	cin >> A >> B;
//
//	INT ret = 0;
//	INT cur = 1;
//
//	while (cur < B) {
//		cur += A - 1;
//		ret++;
//	}
//
//	cout << ret;
//
//	return 0;
//}