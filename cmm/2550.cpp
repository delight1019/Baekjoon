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
//	INT* switches = new INT[N];
//	INT* lights = new INT[N];
//	INT* lightPos = new INT[N + 1];
//
//	FOR(i, 0, N) {
//		cin >> switches[i];
//	}
//
//	FOR(i, 0, N) {
//		cin >> lights[i];
//		lightPos[lights[i]] = i;
//	}
//
//	vector<INT> cache;
//	cache.push_back(-1);
//	INT* parents = new INT[N];
//	FOR(i, 0, N) {
//		INT cur = lightPos[switches[i]];
//		INT cacheIndex = lower_bound(cache.begin(), cache.end(), cur) - cache.begin();
//
//		if (cacheIndex == cache.size()) {
//			cache.push_back(cur);
//		}
//		else {
//			cache[cacheIndex] = cur;
//		}
//
//		parents[cur] = cache[cacheIndex - 1];
//	}
//
//	cout << cache.size() - 1 << "\n";
//
//	vector<INT> backs;
//	INT last = cache[cache.size() - 1];
//
//	while (last >= 0) {
//		backs.push_back(lights[last]);
//		last = parents[last];
//	}
//
//	sort(backs.begin(), backs.end());
//
//	for (auto& i : backs) {
//		cout << i << " ";
//	}
//
//	return 0;
//}