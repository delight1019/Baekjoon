#pragma disable(4996)

#include <iostream>
#include <cstring>
#include <cmath>
#include <queue>
#include <map>
#include <algorithm>

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

INT firstChars[26];
INT curChars[26];
INT diffs[26];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	INT N;
	cin >> N;

	string first;
	cin >> first;

	memset(firstChars, 0, sizeof(firstChars));

	for (INT i = 0; i < first.length(); i++) {
		firstChars[first[i] - 'A']++;
	}

	INT ret = 0;

	for (INT n = 1; n < N; n++) {
		memset(curChars, 0, sizeof(curChars));
		memset(diffs, 0, sizeof(diffs));
		string cur;
		cin >> cur;

		for (INT i = 0; i < cur.length(); i++) {
			curChars[cur[i] - 'A']++;
		}

		for (INT i = 0; i < 26; i++) {
			diffs[i] = firstChars[i] - curChars[i];
		}

		bool isValid = true;
		INT plus = 0;
		INT minus = 0;

		for (INT i = 0; i < 26; i++) {
			if (diffs[i] == 0) continue;
			if (diffs[i] >= 2 || diffs[i] <= -2) {
				isValid = false;
				break;
			}
			if (diffs[i] == 1) plus++;
			if (diffs[i] == -1) minus++;
		}

		if (plus >= 2) {
			isValid = false;
		}
		if (minus >= 2) {
			isValid = false;
		}

		if (isValid) {
			ret++;
		}
	}

	cout << ret;

	return 0;
}