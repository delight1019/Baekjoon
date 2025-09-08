//#pragma disable(4996)
//
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//typedef signed int int32;
//typedef unsigned int uint32;
//typedef long long int64;
//typedef unsigned long long uint64;
//typedef unsigned char ubyte;
//
//const int32 MAX_VALUE = 10000000;
//
//ubyte ddr[100000];
//int32 cache[100000][5][5];
//
//int32 getAbs(int32 a) {
//	return a < 0 ? -a : a;
//}
//
//int32 getPoint(int32 source, int32 dest) {
//	if (source == 0) return 2;
//	else if (source == dest) return 1;
//	else if (getAbs(dest - source) == 2) return 4;
//	else return 3;
//}
//
//int32 getMin(int32 a, int32 b) {
//	return a < b ? a : b;
//}
//
//int32 solve(int32 cur, int32 left, int32 right) {
//	if (ddr[cur] == 0) return 0;
//
//	int& ret = cache[cur][left][right];
//	if (ret != -1) return ret;
//
//	ret = MAX_VALUE;
//	ubyte dest = ddr[cur];
//
//	if (right != dest) {
//		ret = getMin(ret, solve(cur + 1, dest, right) + getPoint(left, dest));
//	}
//
//	if (left != dest) {
//		ret = getMin(ret, solve(cur + 1, left, dest) + getPoint(right, dest));
//	}
//
//	return ret;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	memset(cache, -1, sizeof(cache));
//	int32 index = 0;
//
//	while (true) {
//		int32 curValue;
//		cin >> curValue;
//
//		if (curValue == 0) break;
//
//		ddr[index++] = curValue;
//	}
//
//	cout << solve(0, 0, 0);
//
//	return 0;
//}