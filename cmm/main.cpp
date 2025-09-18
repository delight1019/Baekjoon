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

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int32 i = 0; i < 3; i++) {
		int32 ret = 0;

		string input;
		cin >> input;

		int32 cur = 1;

		for (int j = 1; j < input.length(); j++) {
			if (input[j - 1] == input[j]) {
				cur++;
			}
			else {
				cur = 1;
			}

			ret = MAX(ret, cur);
		}

		cout << ret << "\n";
	}

	return 0;
}                                      