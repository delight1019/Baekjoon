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
//const int32 MAX_N = 1000;
//const int32 MAX_M = 1000;
//
//char map[MAX_N][MAX_M];
//bool visited[MAX_N][MAX_M];
//int32 cycle[MAX_N][MAX_M];
//
//int32 ret = 0;
//
//struct delta {
//	int32 r;
//	int32 c;
//};
//
//delta goTo(int32 r, int32 c) {
//	delta ret;
//
//	if (map[r][c] == 'U') {
//		ret.r = -1;
//		ret.c = 0;
//	}
//	else if (map[r][c] == 'D') {
//		ret.r = 1;
//		ret.c = 0;
//	}
//	else if (map[r][c] == 'L') {
//		ret.r = 0;
//		ret.c = -1;
//	}
//	else if (map[r][c] == 'R') {
//		ret.r = 0;
//		ret.c = 1;
//	}
//
//	return ret;
//}
//
//int32 findCycle(int32 r, int32 c) {
//	while (true) {
//		if (visited[r][c]) break;
//
//		visited[r][c] = true;
//		delta d = goTo(r, c);
//		r += d.r;
//		c += d.c;
//	}
//
//	if (cycle[r][c] != -1) {
//		return cycle[r][c];
//	}
//	else {
//		return ++ret;
//	}
//}
//
//void checkCycle(int32 r, int32 c, int32 cycleValue) {
//	while (true) {
//		if (cycle[r][c] != -1) {
//			break;
//		}
//
//		cycle[r][c] = cycleValue;
//		delta d = goTo(r, c);
//		r += d.r;
//		c += d.c;
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int32 N, M;
//	cin >> N >> M;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> map[i][j];
//			cycle[i][j] = -1;
//			visited[i][j] = false;
//		}
//	}
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			if (visited[i][j]) continue;
//
//			int32 cycleValue = findCycle(i, j);
//			checkCycle(i, j, cycleValue);
//		}
//	}
//
//	cout << ret;
//
//	return 0;
//}