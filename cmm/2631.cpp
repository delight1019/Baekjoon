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
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	INT N;
//	cin >> N;
//
//	vector<INT> children;
//
//	FOR(i, 0, N) {
//		INT cur;
//		cin >> cur;
//		children.push_back(cur);
//	}
//
//	vector<INT> lisCache;
//
//	for (auto& i : children) {
//		auto it = lower_bound(lisCache.begin(), lisCache.end(), i);
//		if (it == lisCache.end()) {
//			lisCache.push_back(i);
//		}
//		else {
//			*it = i;
//		}
//	}
//
//	cout << N - lisCache.size();
//
//	return 0;
//}