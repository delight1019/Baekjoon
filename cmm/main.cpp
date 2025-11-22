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

int32 calculate(string n) {
	int32 ret = 0;
	
	for (int32 i = 0; i < n.length(); i++) {
		ret += n[i] - '0';
	}

	if (ret < 10) return ret;

	while (ret >= 10) {
		int32 temp = ret;
		ret = 0;

		while (temp > 0) {
			ret += (temp % 10);
			temp /= 10;
		}
	}	

	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (true) {
		string N;
		cin >> N;

		if (N == "0") break;

		cout << calculate(N) << "\n";
	}

	return 0;
}