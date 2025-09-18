#pragma disable(4996)

#include <iostream>
#include <cstring>

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

int32 GCD(int32 a, int32 b) {
	if (a < b) {
		int32 temp = a;
		a = b;
		b = temp;
	}

	while (b > 0) {
		int32 r = a % b;
		a = b;
		b = r;
	}

	return a;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int32 T;
	cin >> T;

	for (int32 testCase = 0; testCase < T; testCase++) {
		int32 a, b;
		cin >> a >> b;

		int32 gcd = GCD(a, b);
		int32 lcm = a * (b / gcd);

		cout << lcm << " " << gcd << "\n";
	}

	return 0;
}                                      