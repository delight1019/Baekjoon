#pragma disable(4996)

#include <iostream>
#include <climits>
#include <cmath>
#include <cstring>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <list>

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
#define DELETE_ARRAY(arr) if (arr) delete[] arr
#define FOR(v, S, E) for (int v = S; v < E; v++)

typedef int32 INT;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	INT N;
	cin >> N;

	vector<INT> trains;
	FOR(i, 0, N) {
		INT temp;
		cin >> temp;
		trains.push_back(temp);
	}

	vector<INT> lis;

	for (auto& train : trains) {
		auto lb = lower_bound(lis.begin(), lis.end(), train);

		if (lb == cache.end()) {
			cache.push_back(train);
		}
		else if (lb == cache.begin()) {
			cache.push_front(train);
		}
		else {
			if (*lb == cache.back()) {
				*lb = train;
			}
			else {
				lb--;
				*lb = train;
			}
		}
	}

	cout << cache.size();
	
	return 0;
}