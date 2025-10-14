#pragma disable(4996)

#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>

using namespace std;

typedef signed short int16;
typedef unsigned short uint16;
typedef signed int int32;
typedef unsigned int uint32;
typedef long long int64;
typedef unsigned long long uint64;
typedef unsigned char ubyte;

#define MAX(a, b) a < b ? b : a;
#define MIN(a, b) a < b ? a : b;
#define ABS(a) a < 0 ? -a : a;

struct Room {
	int32 x;
	int32 y;
	int32 E;
};

Room rooms[1001];
int32 energy[1001];

int32 GetABS(int32 a) {
	return a < 0 ? -a : a;
}

int32 GetEnergy(int32 source, int32 dest) {
	int32 temp = rooms[source].E - GetABS(rooms[dest].x - rooms[source].x) - GetABS(rooms[dest].y - rooms[source].y);
	return MAX(0, temp);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int32 N;
	cin >> N;

	for (int32 n = 0; n <= N; n++) {
		cin >> rooms[n].x;
		cin >> rooms[n].y;
		cin >> rooms[n].E;
	}

	for (int32 n = 1; n <= N; n++) {
		energy[n] = GetEnergy(0, n);
	}

	for (int32 n = 1; n <= N; n++) {
		if (rooms[n].E == 0) continue;

		for (int32 x = 1; x <= N; x++) {
			energy[x] -= GetEnergy(n, x);
		}
	}

	int32 maxValue = 0;

	for (int32 n = 1; n <= N; n++) {
		maxValue = MAX(maxValue, energy[n]);
	}

	if (maxValue <= 0) {
		cout << "IMPOSSIBLE";
	}
	else {
		cout << maxValue;
	}

	return 0;
}