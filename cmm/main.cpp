#pragma disable(4996)

#include <iostream>
#include <cstring>
#include <cmath>
#include <queue>

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

typedef int32 INT;

INT friends[1001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	memset(friends, 0, sizeof(friends));

	INT N, M;
	cin >> N >> M;

	for (INT m = 0; m < M; m++) {
		INT A, B;
		cin >> A >> B;

		friends[A]++;
		friends[B]++;
	}

	for (INT n = 1; n <= N; n++) {
		cout << friends[n] << "\n";
	}

	return 0;
}