//#pragma disable(4996)
//
//#include <iostream>
//#include <climits>
//#include <cmath>
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
//#define MAX(a, b) a < b ? b : a
//#define MIN(a, b) a < b ? a : b
//#define ABS(a) a < 0 ? -a : a
//#define DELETE_ARRAY(arr) if (arr) delete[] arr
//#define FOR(v, S, E) for (int v = S; v < E; v++)
//
//typedef int32 INT;
//
//bool visited[2027];
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	INT N;
//	cin >> N;
//
//	memset(visited, false, sizeof(visited));
//
//	while (N > 1 && false == visited[N]) {
//		visited[N] = true;
//		INT cur = 0;
//		INT temp = N;
//
//		while (temp > 0) {
//			cur += pow((temp % 10), 2);
//			temp /= 10;
//		}
//		N = cur;
//	}
//
//	if (N == 1) {
//		cout << "Yes";
//	}
//	else {
//		cout << "No";
//	}
//
//	return 0;
//}