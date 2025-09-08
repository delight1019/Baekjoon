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
//uint64 cache[64];
//
//uint64 fSum(uint64 x) {
//	uint64 ret = x & 1;
//	uint32 bitIndex = 63;
//
//	while (bitIndex > 0) {
//		if (x & (1LL << bitIndex)) {
//			ret += cache[bitIndex - 1] + (x - (1LL << bitIndex) + 1);
//			x -= (1LL << bitIndex);
//		}
//
//		bitIndex--;
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
//	cache[0] = 1;
//
//	for (int i = 1; i < 64; i++) {
//		cache[i] = 2 * cache[i - 1] + (1LL << i);
//	}
//
//	uint64 A, B;
//	cin >> A >> B;
//
//	cout << fSum(B) - fSum(A - 1);
//
//	return 0;
//}