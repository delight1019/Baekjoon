#pragma disable(4996)

#include <iostream>
#include <cstring>

using namespace std;

typedef signed int int32;
typedef unsigned int uint32;
typedef long long int64;
typedef unsigned long long uint64;

const int32 MAX_N = 500;
const int32 MAX_M = 500;
const int32 deltaR[4] = { 0, 0, 1, -1 };
const int32 deltaC[4] = { 1, -1, 0, 0 };

int32 map[MAX_N][MAX_M];

struct Point {
	int32 r;
	int32 c;
};

class MyQueue {
private:
	Point* values = new Point[300000];
	int32 count = 0;
	int32 s = 0;
	int32 e = 0;
public:
	void Push(Point p) {
		values[e++] = p;
		count++;
	}

	Point Pop() {
		Point ret = values[s];
		s++;
		count--;
		return ret;
	}

	bool IsEmpty() {
		return count == 0;
	}

	void Clear() {
		s = 0;
		e = 0;
		count = 0;
	}
};

MyQueue* queue = new MyQueue();

int32 findPicture(int32 r, int32 c, int32 N, int32 M) {
	queue->Clear();
	Point start;
	start.r = r;
	start.c = c;

	queue->Push(start);
	map[start.r][start.c] = 0;
	int32 ret = 0;

	while (!queue->IsEmpty()) {
		Point cur = queue->Pop();		
		ret++;

		for (int i = 0; i < 4; i++) {
			int32 nextR = cur.r + deltaR[i];
			int32 nextC = cur.c + deltaC[i];

			if (nextR < 0 || nextR >= N || nextC < 0 || nextC >= M) continue;
			if (map[nextR][nextC] == 0) continue;

			Point next;
			next.r = nextR;
			next.c = nextC;

			queue->Push(next);
			map[next.r][next.c] = 0;
		}
	}	

	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int32 n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}

	int32 ret = 0;
	int32 retCount = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] != 0) {
				int32 temp = findPicture(i, j, n, m);
				ret = temp > ret ? temp : ret;
				retCount++;
			}
		}
	}

	cout << retCount << "\n";
	cout << ret;

	return 0;
}