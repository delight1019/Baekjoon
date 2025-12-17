//#pragma disable(4996)
//
//#include <iostream>
//#include <cstring>
//#include <cmath>
//#include <queue>
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
//bool rooms[101];
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	INT T;
//	cin >> T;
//
//	for (INT testCase = 1; testCase <= T; testCase++) {
//		INT N;
//		cin >> N;
//		memset(rooms, false, sizeof(rooms));
//
//		for (INT i = 1; i <= N; i++) {
//			for (INT j = i; j <= N; j += i) {
//				rooms[j] = !rooms[j];
//			}
//		}
//
//		INT ret = 0;
//
//		for (INT i = 1; i <= N; i++) {
//			if (rooms[i]) {
//				ret++;
//			}
//		}
//
//		cout << ret << "\n";
//	}
//
//	return 0;
//}