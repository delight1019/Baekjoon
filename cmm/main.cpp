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

const int32 MAX_VALUE = 1000000;

bool cache[1000001] = { false, };
vector<int32> primeNumbers;

void calculatePrimes() {
	for (int32 i = 2; i <= MAX_VALUE; i += 2) {
		cache[i] = true;
	}

	int32 i = 3;

	while (i <= MAX_VALUE) {
		primeNumbers.push_back(i);

		for (int32 j = 1; i * j <= MAX_VALUE; j++) {
			cache[i * j] = true;
		}

		while (cache[i] && i <= MAX_VALUE) i++;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	calculatePrimes();

	while (true) {
		int32 N;
		cin >> N;

		if (N == 0) break;

		bool isPossible = false;

		for (vector<int32>::iterator it = primeNumbers.begin(); it != primeNumbers.end(); it++) {
			int32 cur = *it;

			if (cur > N / 2) break;

			if (binary_search(it, primeNumbers.end(), N - cur)) {
				cout << N << " = " << cur << " + " << N - cur << "\n";
				isPossible = true;
				break;
			}
		}

		if (false == isPossible) {
			cout << "Goldbach's conjecture is wrong." << "\n";
		}
	}

	return 0;
}