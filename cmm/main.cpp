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

map<char, vector<char>> validMap {
	make_pair('1', vector<char> {'4', '5'}),
	make_pair('2', vector<char> {}),
	make_pair('3', vector<char> {'4', '5'}),
	make_pair('4', vector<char> {'2', '3'}),
	make_pair('5', vector<char> {'8'}),
	make_pair('6', vector<char> {'2', '3'}),
	make_pair('7', vector<char> {'8'}),
	make_pair('8', vector<char> {'6', '7'})
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	INT N, A, B, C;
	
	cin >> N >> A >> B >> C;

	INT price = A;
	INT cal = C;
	vector<INT> DArr;

	for (INT n = 0; n < N; n++) {
		INT D;
		cin >> D;

		DArr.push_back(D);
	}

	sort(DArr.begin(), DArr.end(), greater<>());

	for (INT n = 0; n < N; n++) {
		if (price * DArr[n] <= cal * B) {
			break;
		}

		price += B;
		cal += DArr[n];
	}

	cout << cal / price;

	return 0;
}