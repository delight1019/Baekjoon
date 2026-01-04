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
//typedef int64 INT;
//
//const INT MAX_VALUE = 200000;
//
//struct Kite {
//	INT A;
//	INT B;
//
//	bool operator < (const Kite& other) const {
//		if (A == other.A) {
//			return B > other.B;
//		}
//
//		return A < other.A;
//	}
//};
//
//vector<Kite> kites;
//
//INT LIS(INT N) {
//	vector<INT> cache;
//	cache.push_back(-1);
//
//	for (auto& kite : kites) {
//		auto it = lower_bound(cache.begin(), cache.end(), kite.B);
//
//		if (it == cache.end()) {
//			cache.push_back(kite.B);
//		}
//		else {
//			*it = kite.B;
//		}
//	}
//
//	return cache.size() - 1;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	INT N;
//	cin >> N;
//
//	FOR(i, 0, N) {
//		Kite kite;
//		cin >> kite.A >> kite.B;
//		kites.push_back(kite);
//	}
//
//	sort(kites.begin(), kites.end());
//
//	cout << LIS(N);
//
//	return 0;
//}