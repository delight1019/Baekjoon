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
//const int32 DENO = 1000000007;
//
//vector<int64> menus;
//int32 factors[300000];
//int64 sums[300000] = { 0, };
//
//int64 calc(int32 i, int32 j) {
//	int64 factor = factors[j - i - 1];
//	return ((menus[j] - menus[i]) * factor) % DENO;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int32 N;
//	cin >> N;
//
//	int64 factor = 1;
//
//	for (int32 n = 0; n < N; n++) {
//		int64 temp;
//		cin >> temp;
//		menus.push_back(temp);
//
//		if (n > 0) {
//			factor *= 2;
//			factor %= DENO;
//		}
//
//		factors[n] = factor;
//	}
//
//	sort(menus.begin(), menus.end());
//
//	for (int32 n = 0; n < N; n++) {
//		if (n == 0) {
//			sums[n] = 0;
//		}
//		else {
//			sums[n] += sums[n - 1] * 2;
//			sums[n] %= DENO;
//			int64 temp = menus[n] - menus[n - 1];
//			int64 temp2 = factors[n] - 1;
//			int64 temp3 = (temp * temp2) % DENO;
//			sums[n] += temp3;
//			sums[n] %= DENO;
//		}
//	}
//
//	int64 ret = 0;
//
//	for (int32 i = 0; i < N; i++) {
//		ret += sums[i];
//		ret %= DENO;
//	}
//
//	cout << ret;
//
//	return 0;
//}