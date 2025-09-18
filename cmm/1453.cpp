//#pragma disable(4996)
//
//#include <iostream>
//#include <cstring>
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
//const int32 MAX_N = 101;
//
//bool chairs[MAX_N] = { false, };
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int32 N;
//	cin >> N;
//
//	int32 ret = 0;
//
//	for (int32 n = 0; n < N; n++) {
//		int32 cur;
//		cin >> cur;
//
//		if (chairs[cur]) {
//			ret++;
//		}
//		else {
//			chairs[cur] = true;
//		}
//	}
//
//	cout << ret;
//
//	return 0;
//}