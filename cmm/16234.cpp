//#pragma disable(4996)
//
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//typedef signed int int32;
//typedef unsigned int uint32;
//typedef long long int64;
//typedef unsigned long long uint64;
//
//const int32 MAX_N = 50;
//const int32 deltaR[4] = { 0, 0, 1, -1 };
//const int32 deltaC[4] = { 1, -1, 0, 0 };
//
//int32 map[MAX_N][MAX_N];
//bool isVisited[MAX_N][MAX_N];
//
//struct Point {
//	int32 r;
//	int32 c;
//};
//
//class MyQueue {
//private:
//	int32 maxN;
//	Point* values;
//	int32 count;
//	int32 s, e;
//public:
//	MyQueue(int32 maxN) {
//		this->maxN = maxN;
//		this->values = new Point[maxN];
//		this->count = 0;
//		this->s = 0;
//		this->e = 0;
//	}
//public:
//	void Push(Point value) {
//		values[e] = value;
//		e++;
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
//
//	int32 GetPopulation() {
//		int32 sum = 0;
//
//		for (int32 i = 0; i < e; i++) {
//			Point cur = values[i];
//			sum += map[cur.r][cur.c];
//		}
//
//		return sum / e;
//	}
//
//	void SetPopulation() {
//		int32 population = GetPopulation();
//
//		for (int32 i = 0; i < e; i++) {
//			Point cur = values[i];
//			map[cur.r][cur.c] = population;
//		}
//	}
//
//	int32 Count() {
//		return count;
//	}
//};
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int32 N, L, R;
//	cin >> N >> L >> R;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	int32 ret = 0;
//	MyQueue* queue = new MyQueue(MAX_N * MAX_N);
//	MyQueue* unions = new MyQueue(MAX_N * MAX_N);
//
//	while (true) {
//		queue->Clear();
//
//		bool isDone = false;
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				isVisited[i][j] = false;
//			}
//		}
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				if (isVisited[i][j]) continue;
//
//				Point start;
//				start.r = i;
//				start.c = j;
//				isVisited[start.r][start.c] = true;
//				queue->Push(start);
//
//				unions->Clear();
//
//				while (!queue->IsEmpty()) {
//					Point cur = queue->Pop();
//					unions->Push(cur);
//
//					Point next;
//
//					for (int k = 0; k < 4; k++) {
//						next.r = cur.r + deltaR[k];
//						next.c = cur.c + deltaC[k];
//
//						if (next.r < 0 || next.r >= N || next.c < 0 || next.c >= N) continue;
//						if (isVisited[next.r][next.c]) continue;
//
//						int32 popDelta = abs(map[cur.r][cur.c] - map[next.r][next.c]);
//						if (popDelta < L || popDelta > R) continue;
//
//						isVisited[next.r][next.c] = true;
//						queue->Push(next);
//					}
//				}
//
//				if (unions->Count() > 1) {
//					unions->SetPopulation();
//					isDone = true;
//				}
//			}
//		}
//
//		if (isDone) {
//			ret++;
//		}
//		else {
//			break;
//		}
//	}
//
//	cout << ret;
//
//	return 0;
//}