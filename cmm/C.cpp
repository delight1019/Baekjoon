//#pragma disable(4996)
//
//#include <iostream>
//#include <climits>
//#include <cmath>
//#include <cstring>
//#include <vector>
//#include <algorithm>
//#include <set>
//#include <map>
//#include <list>
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
//#define DELETE_ARRAY(arr) if (arr) delete[] arr
//#define FOR(v, S, E) for (int v = S; v < E; v++)
//
//typedef int32 INT;
//
//const INT MAX_VALUE = 10000000;
//vector<INT> cache;
//INT visited[MAX_VALUE + 1];
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	INT c = 1;
//
//	while (c * c < MAX_VALUE) {
//		cache.push_back(c * c);
//		c++;
//	}
//
//	INT N;
//	cin >> N;
//	memset(visited, 0, sizeof(visited));
//
//	for (INT i = 0; i < cache.size(); i++) {
//		for (INT j = i + 1; j < cache.size(); j++) {
//			INT temp = cache[i] + cache[j];
//			if (temp > N) continue;
//			visited[temp]++;
//		}
//	}
//
//	INT ret = 0;
//
//	FOR(i, 0, MAX_VALUE + 1) {
//		if (visited[i] == 1) {
//			ret++;
//		}
//	}
//
//	cout << ret << "\n";
//
//	FOR(i, 0, MAX_VALUE + 1) {
//		if (visited[i] == 1) {
//			cout << i << " ";
//		}
//	}
//
//	return 0;
//}