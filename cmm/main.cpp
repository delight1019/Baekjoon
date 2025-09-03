#pragma disable(4996)

#include <iostream>
#include <cmath>

using namespace std;

typedef signed int int32;
typedef unsigned int uint32;
typedef long long int64;
typedef unsigned long long uint64;

int32 map[9][9];
int32 solve[9][9];

struct Point {
	int32 r;
	int32 c;
	int32* invalids;
	int32 invalidCount;
};

Point zeros[81];

class MyQueue {
private:
	int32 maxN;
	Point* values;
	int32 count;
	int32 s, e;
public:
	MyQueue(int32 maxN) {
		this->maxN = maxN;
		this->values = new Point[maxN];
		this->count = 0;
		this->s = 0;
		this->e = 0;
	}
public:
	void Push(Point value) {
		values[e++] = value;
		count++;
	}

	Point Pop() {
		Point ret = values[s];
		s++;
		count--;
		return ret;
	}

	Point Front() {
		return values[s];
	}

	bool IsEmpty() {
		return count == 0;
	}

	void Recover() {
		if (s == 0) {
			throw new exception();
		}

		s--;
		count++;
	}
};

bool isValid(Point p, int32 value) {
	for (int i = 0; i < 9; i++) {
		if (map[i][p.c] == value) return false;
		if (map[p.r][i] == value) return false;
	}

	int r = p.r - p.r % 3;
	int c = p.c - p.c % 3;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (map[r + i][c + j] == value) return false;
		}
	}

	return true;
}

bool hasValid(Point p) {
	int32 start = map[p.r][p.c];

	for (int i = start + 1; i <= 9; i++) {
		if (isValid(p, i)) return true;
	}

	return false;
}

void printMap() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cout << map[i][j];
		}

		cout << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	MyQueue* points = new MyQueue(81);

	for (int32 i = 0; i < 9; i++) {
		string cur;
		cin >> cur;

		for (int j = 0; j < 9; j++) {
			map[i][j] = cur[j] - '0';
			solve[i][j] = cur[j] - '0';

			if (map[i][j] == 0) {
				Point zero;
				zero.r = i;
				zero.c = j;
				zero.invalids = new int32[9];
				zero.invalidCount = 0;
				points->Push(zero);
			}
		}
	}

	while (!points->IsEmpty()) {
		Point cur = points->Front();

		int32 startPoint = map[cur.r][cur.c] + 1;
		map[cur.r][cur.c] = 0;

		bool isSolved = false;

		for (int i = startPoint; i <= 9; i++) {
			if (isValid(cur, i)) {
				map[cur.r][cur.c] = i;
				isSolved = true;
				break;
			}
		}

		if (map[cur.r][cur.c] == 0) {
			points->Recover();
			Point prev = points->Front();

			while (!hasValid(prev)) {
				map[prev.r][prev.c] = 0;
				points->Recover();
				prev = points->Front();
			}
		}
		else {
			points->Pop();
		}
	}

	printMap();	

	return 0;
}