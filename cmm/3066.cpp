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
//vector<INT> ports;
//
//INT LIS() {
//	vector<INT> cache;
//
//	for (auto& p : ports) {
//		auto it = lower_bound(cache.begin(), cache.end(), p);
//
//		if (it == cache.end()) {
//			cache.push_back(p);
//		}
//		else {
//			*it = p;
//		}
//	}
//
//	return cache.size();
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	INT T;
//	cin >> T;
//
//	FOR(testCase, 1, T + 1) {
//		ports.clear();
//
//		INT N;
//		cin >> N;
//
//		FOR(i, 0, N) {
//			INT cur;
//			cin >> cur;
//			ports.push_back(cur);
//		}
//
//		cout << LIS() << "\n";
//	}
//
//	return 0;
//}