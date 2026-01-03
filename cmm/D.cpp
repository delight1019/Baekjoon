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
//vector<INT> AArr;
//
//INT getMin(INT i, INT j, INT k) {
//	if (i < j) {
//		return MIN(i, k);
//	}
//	else {
//		return MIN(j, k);
//	}
//}
//
//INT getMax(INT i, INT j, INT k) {
//	if (i < j) {
//		return MAX(j, k);
//	}
//	else {
//		return MAX(i, k);
//	}
//}
//
//INT gcd(INT a, INT b) {
//	if (a > b) {
//		INT temp = a;
//		a = b;
//		b = temp;
//	}
//
//	while (a > 0) {
//		INT temp = b % a;
//		b = a;
//		a = temp;
//	}
//
//	return b;
//}
//
//INT calculate(const INT& value, map<INT, INT>& curMap) {
//	if (value % 5 != 0) return 0;
//
//	INT x = value / 5;
//
//	if (curMap.find(x * 7) == curMap.end()) return 0;
//	if (curMap.find(x * 3) == curMap.end()) return 0;
//
//	return curMap[x * 7] * curMap[x * 3];
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
//		INT temp;
//		cin >> temp;
//		AArr.push_back(temp);
//	}
//
//	map<INT, INT> LMap;
//	map<INT, INT> RMap;
//
//	FOR(i, 0, N) {
//		INT cur = AArr[i];
//		if (RMap.find(cur) == RMap.end()) {
//			RMap.insert(make_pair(cur, 1));
//		}
//		else {
//			RMap[cur]++;
//		}
//	}
//
//	INT ret = 0;
//
//	FOR(i, 0, N) {
//		INT cur = AArr[i];
//		RMap[cur]--;
//
//		if (LMap.empty() == false) {
//			ret += calculate(cur, LMap);
//		}
//		if (RMap.empty() == false) {
//			ret += calculate(cur, RMap);
//		}
//
//		if (LMap.find(cur) == LMap.end()) {
//			LMap.insert(make_pair(cur, 1));
//		}
//		else {
//			LMap[cur]++;
//		}
//	}
//
//	cout << ret;
//
//	return 0;
//}