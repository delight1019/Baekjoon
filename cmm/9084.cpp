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
//const int32 MAX_N = 20;
//const int32 MAX_M = 10000;
//int32 coins[MAX_N];
//
//int32 cache[MAX_M + 1][MAX_N];
//
//int32 getMax(int32 a, int32 b) {
//	return a > b ? a : b;
//}
//
//int32 solve(int32 cur, int32 N, int32 m) {
//	if (m == 0) return 1;
//	if (cur == N) return 0;
//
//	int32& ret = cache[m][cur];
//
//	if (ret != -1) return ret;
//
//	int32 retValue = 0;
//
//	int32 curCoin = coins[cur];
//	int32 temp = m;
//
//	while (temp >= 0) {
//		retValue += solve(cur + 1, N, temp);
//		temp -= curCoin;
//	}
//
//	return (ret = retValue);
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int32 T;
//	cin >> T;
//
//	for (int32 testCase = 0; testCase < T; testCase++) {
//		int32 N, M;
//		cin >> N;
//
//		for (int32 i = 0; i < N; i++) {
//			cin >> coins[i];
//		}
//
//		cin >> M;
//
//		memset(cache, -1, sizeof(cache));
//		int32 ret = solve(0, N, M);
//		cout << ret << "\n";
//	}
//
//	return 0;
//}