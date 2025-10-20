//#pragma disable(4996)
//
//#include <iostream>
//#include <cstring>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <stack>
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
//#define ToNum(a) a - 'A'
//
//const int32 MAX_N = 20;
//
//int32 N, M;
//int32 x, y;
//int32 K;
//
//int32 numMap[MAX_N][MAX_N];
//
//struct Dice {
//	int32 x;
//	int32 y;
//	int32 top;
//	int32 bottom;
//	int32 north;
//	int32 south;
//	int32 west;
//	int32 east;
//
//	Dice(int32 x, int32 y, int32 t, int32 b, int32 n, int32 s, int32 w, int32 e) {
//		this->x = x;
//		this->y = y;
//		this->top = t;
//		this->bottom = b;
//		this->north = n;
//		this->south = s;
//		this->west = w;
//		this->east = e;
//	}
//
//	void CheckBottom() {
//		if (numMap[x][y] == 0) {
//			numMap[x][y] = bottom;
//		}
//		else {
//			bottom = numMap[x][y];
//			numMap[x][y] = 0;
//		}
//	}
//
//	void RollEast() {
//		y++;
//		int32 temp = top;
//		top = west;
//		west = bottom;
//		bottom = east;
//		east = temp;
//
//		CheckBottom();
//	}
//
//	void RollWest() {
//		y--;
//		int32 temp = top;
//		top = east;
//		east = bottom;
//		bottom = west;
//		west = temp;
//
//		CheckBottom();
//	}
//
//	void RollNorth() {
//		x--;
//		int32 temp = top;
//		top = south;
//		south = bottom;
//		bottom = north;
//		north = temp;
//
//		CheckBottom();
//	}
//
//	void RollSouth() {
//		x++;
//		int32 temp = top;
//		top = north;
//		north = bottom;
//		bottom = south;
//		south = temp;
//
//		CheckBottom();
//	}
//};
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> N >> M;
//	cin >> x >> y;
//	cin >> K;
//
//	for (int32 n = 0; n < N; n++) {
//		for (int32 m = 0; m < M; m++) {
//			cin >> numMap[n][m];
//		}
//	}
//
//	Dice dice(x, y, 0, 0, 0, 0, 0, 0);
//
//	for (int32 k = 0; k < K; k++) {
//		int32 arg;
//		cin >> arg;
//
//		if (arg == 1) {
//			if (dice.y == M - 1) continue;
//			dice.RollEast();
//		}
//		else if (arg == 2) {
//			if (dice.y == 0) continue;
//			dice.RollWest();
//		}
//		else if (arg == 3) {
//			if (dice.x == 0) continue;
//			dice.RollNorth();
//		}
//		else if (arg == 4) {
//			if (dice.x == N - 1) continue;
//			dice.RollSouth();
//		}
//
//		cout << dice.top << "\n";
//	}
//
//	return 0;
//}