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

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	INT N;
	cin >> N;

	string korea = "LoveisKoreaUniversity"s;

	for (INT n = 0; n < N; n++) {
		cout << korea << " ";
	}

	return 0;
}