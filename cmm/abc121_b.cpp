//#pragma disable(4996)
//
//#include <iostream>
//#include <climits>
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
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	INT N, M, C;
//	cin >> N >> M >> C;
//
//	INT* BArr = new INT[M];
//	FOR(i, 0, M) {
//		cin >> BArr[i];
//	}
//
//	INT ret = 0;
//
//	FOR(i, 0, N) {
//		INT cur = 0;
//
//		FOR(j, 0, M) {
//			INT A;
//			cin >> A;
//			cur += A * BArr[j];
//		}
//
//		cur += C;
//		if (cur > 0) {
//			ret++;
//		}
//	}
//
//	cout << ret;
//
//	DELETE_ARRAY(BArr);
//
//	return 0;
//}