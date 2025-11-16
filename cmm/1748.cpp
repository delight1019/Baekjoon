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
//	uint64 N;
//	cin >> N;
//
//	uint64 ret = 0;
//	uint64 temp = 10;
//	uint64 j = 1;
//
//	while (true) {
//		if (temp <= N) {
//			ret += (temp - (temp / 10)) * j;
//		}
//		else {
//			ret += (N - (temp / 10 - 1)) * j;
//			break;
//		}
//
//		j++;
//		temp *= 10;
//	}
//
//	cout << ret;
//
//	return 0;
//}