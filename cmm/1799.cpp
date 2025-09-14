//#pragma disable(4996)
//
//#include <iostream>
//#include <vector>
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
//#define MAX(a, b) a < b ? b : a;
//
//const int32 MAX_SIZE = 10;
//const int32 INVALID = 0;
//const int32 VALID = 1;
//const int32 BISHOP = 2;
//
//int32 gSize;
//int32 gMap[MAX_SIZE][MAX_SIZE];
//int32 gAnswer[2];
//bool cache1[MAX_SIZE * 2 + 1];
//bool cache2[MAX_SIZE * 2 + 1];
//
//bool canBishop(int32 r, int32 c) {
//	if (gMap[r][c] == INVALID) return false;
//	if (cache1[r - c + gSize]) return false;
//	if (cache2[r + c]) return false;
//
//	return true;
//}
//
//void putOn(int32 r, int32 c) {
//	cache1[r - c + gSize] = true;
//	cache2[r + c] = true;
//}
//
//void takeOff(int32 r, int32 c) {
//	cache1[r - c + gSize] = false;
//	cache2[r + c] = false;
//}
//
//void solve(int32 r, int32 c, int32 count, int32 color) {
//	if (c >= gSize) {
//		r++;
//		c = (r % 2 == color) ? 0 : 1;
//	}
//	if (r >= gSize) {
//		gAnswer[color] = MAX(gAnswer[color], count);
//		return;
//	}
//
//	if (canBishop(r, c)) {
//		putOn(r, c);
//		solve(r, c + 2, count + 1, color);
//		takeOff(r, c);
//	}
//	solve(r, c + 2, count, color);
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> gSize;
//
//	for (int32 i = 0; i < gSize; i++) {
//		for (int32 j = 0; j < gSize; j++) {
//			cin >> gMap[i][j];
//		}
//	}
//
//	solve(0, 0, 0, 0);
//	solve(0, 1, 0, 1);
//
//	cout << gAnswer[0] + gAnswer[1];
//
//	return 0;
//}