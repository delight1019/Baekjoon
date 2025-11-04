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

#define MAX(a, b) a < b ? b : a
#define MIN(a, b) a < b ? a : b
#define ABS(a) a < 0 ? -a : a

bool InRange(int32 v, int32 m, int32 M) {
	return m <= v && v < M;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int waveLength;
	cin >> waveLength;

	if (InRange(waveLength, 620, 780) || waveLength == 780) {
		cout << "Red";
	}
	else if (InRange(waveLength, 590, 620)) {
		cout << "Orange";
	}
	else if (InRange(waveLength, 570, 590)) {
		cout << "Yellow";
	}
	else if (InRange(waveLength, 495, 570)) {
		cout << "Green";
	}
	else if (InRange(waveLength, 450, 495)) {
		cout << "Blue";
	}
	else if (InRange(waveLength, 425, 450)) {
		cout << "Indigo";
	}
	else if (InRange(waveLength, 380, 425)) {
		cout << "Violet";
	}

	return 0;
}