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

#define MAX(a, b) a < b ? b : a;
#define MIN(a, b) a < b ? a : b;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int32 A, B, C, D;
	cin >> A >> B >> C >> D;

	if (A + C == B + D) {
		cout << "Either";
	}
	else if (A + C < B + D) {
		cout << "Hanyang Univ.";
	}
	else {		
		cout << "Yongdap";
	}

	return 0;
}