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

const int32 MAX_VALUE = 10000;

string inputStr;
int32 cache[2500];

int32 getMin(int32 a, int32 b) {
	return a < b ? a : b;
}

bool isPelindrome(int32 s, int32 e) {
	while (s <= e) {
		if (inputStr[s] != inputStr[e]) return false;

		s++;
		e--;
	}

	return true;
}

int32 solve(int32 cur) {
	if (cur == inputStr.length()) return 0;

	int32& ret = cache[cur];
	if (ret != -1) return ret;

	ret = MAX_VALUE;

	for (int32 i = cur + 1; i <= inputStr.length(); i++) {
		if (isPelindrome(cur, i - 1)) {
			ret = getMin(ret, 1 + solve(i));
		}
	}

	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> inputStr;

	memset(cache, -1, sizeof(cache));
	cout << solve(0);

	return 0;
}                                      