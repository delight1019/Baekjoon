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
//
//const int32 MAX_H = 100;
//const int32 MAX_W = 100;
//const int32 deltaR[4] = { 0, 0, 1, -1 };
//const int32 deltaC[4] = { 1, -1, 0, 0 };
//
//char map[MAX_H + 2][MAX_W + 2];
//bool visited[MAX_H + 2][MAX_W + 2];
//bool keys[50];
//bool visitedWalls[50];
//
//struct Point {
//	int32 r;
//	int32 c;
//};
//
//Point walls[50][10000];
//int32 wallIndexes[50];
//
//class MyQueue {
//private:
//	Point* values = new Point[10000];
//	int32 count = 0;
//	int32 s = 0;
//	int32 e = 0;
//public:
//	void Push(Point p) {
//		values[e++] = p;
//		count++;
//	}
//
//	Point Pop() {
//		Point ret = values[s];
//		s++;
//		count--;
//		return ret;
//	}
//
//	bool IsEmpty() {
//		return count == 0;
//	}
//
//	void Clear() {
//		count = 0;
//		s = 0;
//		e = 0;
//	}
//};
//
//MyQueue* queue = new MyQueue();
//
//bool isWall(char cur) {
//	return (cur - 'A' >= 0) && (cur - 'Z' <= 0);
//}
//
//bool isKey(char cur) {
//	return (cur - 'a' >= 0) && (cur - 'z' <= 0);
//}
//
//void Print(int32 N, int32 M) {
//	cout << "\n";
//
//	for (int32 i = 0; i <= N + 1; i++) {
//		for (int32 j = 0; j <= M + 1; j++) {
//			cout << map[i][j];
//		}
//		cout << "\n";
//	}
//
//	cout << "\n";
//}
//
//int32 solve(int32 r, int32 c, int32 N, int32 M) {
//	int32 ret = 0;
//
//	queue->Clear();
//
//	Point start;
//	start.r = r;
//	start.c = c;
//
//	queue->Push(start);
//	visited[start.r][start.c] = true;
//
//	while (!queue->IsEmpty()) {
//		Point cur = queue->Pop();
//
//		if (map[cur.r][cur.c] == '$') {
//			map[cur.r][cur.c] = '.';
//			ret++;
//		}
//
//		for (int i = 0; i < 4; i++) {
//			int32 nextR = cur.r + deltaR[i];
//			int32 nextC = cur.c + deltaC[i];
//
//			if (nextR < 0 || nextR > N + 1 || nextC < 0 || nextC > M + 1) continue;
//			if (visited[nextR][nextC]) continue;
//			if (map[nextR][nextC] == '*') continue;
//
//			if (isWall(map[nextR][nextC])) {
//				char curWall = map[nextR][nextC];
//				char curKey = tolower(curWall);
//
//				if (keys[curKey - 'a']) {
//					map[nextR][nextC] = '.';
//
//					Point next;
//					next.r = nextR;
//					next.c = nextC;
//					queue->Push(next);
//					visited[next.r][next.c] = true;
//				}
//				else {
//					visitedWalls[map[nextR][nextC] - 'A'] = true;
//					visited[nextR][nextC] = true;
//				}
//			}
//			else if (isKey(map[nextR][nextC])) {
//				char curKey = map[nextR][nextC];
//
//				if (keys[curKey - 'a']) { // Alread have
//
//				}
//				else {
//					keys[curKey - 'a'] = true;
//					char wallChar = toupper(curKey);
//
//					if (visitedWalls[wallChar - 'A']) {
//						int32 wallValue = wallChar - 'A';
//
//						for (int i = 0; i < wallIndexes[wallValue]; i++) {
//							Point cur = walls[wallValue][i];
//
//							if (visited[cur.r][cur.c]) {
//								map[cur.r][cur.c] = '.';
//								queue->Push(cur);
//								visited[cur.r][cur.c] = true;
//							}
//						}
//					}
//				}
//
//				map[nextR][nextC] = '.';
//				Point next;
//				next.r = nextR;
//				next.c = nextC;
//				queue->Push(next);
//				visited[next.r][next.c] = true;
//
//				/*cout << "key: " << curKey << "\n";
//				Print(N, M);*/
//			}
//			else {
//				Point next;
//				next.r = nextR;
//				next.c = nextC;
//				queue->Push(next);
//				visited[next.r][next.c] = true;
//			}
//		}
//	}
//
//	return ret;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int32 T;
//	cin >> T;
//
//	for (int32 testCase = 1; testCase <= T; testCase++) {
//		for (int i = 0; i < 50; i++) {
//			keys[i] = false;
//			wallIndexes[i] = 0;
//			visitedWalls[i] = false;
//		}
//
//		int32 h, w;
//		cin >> h >> w;
//
//		for (int i = 1; i <= h; i++) {
//			for (int j = 1; j <= w; j++) {
//				cin >> map[i][j];
//				visited[i][j] = false;
//
//				if (isWall(map[i][j])) {
//					int32 wallIndex = map[i][j] - 'A';
//					Point cur;
//					cur.r = i;
//					cur.c = j;
//					walls[wallIndex][wallIndexes[wallIndex]++] = cur;
//				}
//			}
//		}
//
//		for (int j = 0; j <= w + 1; j++) {
//			map[0][j] = '.';
//			map[h + 1][j] = '.';
//			visited[0][j] = false;
//			visited[h + 1][j] = false;
//		}
//
//		for (int i = 0; i <= h + 1; i++) {
//			map[i][0] = '.';
//			map[i][w + 1] = '.';
//			visited[i][0] = false;
//			visited[i][w + 1] = false;
//		}
//
//		string key;
//		cin >> key;
//
//		if (key != "0") {
//			for (int i = 0; i < key.length(); i++) {
//				keys[key[i] - 'a'] = true;
//
//				int32 wallValue = toupper(key[i]) - 'A';
//
//				for (int i = 0; i < wallIndexes[wallValue]; i++) {
//					Point cur = walls[wallValue][i];
//					map[cur.r][cur.c] = '.';
//				}
//
//				/*cout << "key: " << key[i] << "\n";
//				Print(h, w);*/
//			}
//		}
//
//		int32 ret = solve(0, 0, h, w);
//
//		cout << ret << "\n";
//	}
//
//	return 0;
//}