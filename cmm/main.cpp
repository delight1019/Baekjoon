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

struct Score {
	int32 id;
	int32 A;
	int32 B;
};

int sortByA(Score& a, Score& b) {
	if (a.A == b.A) return a.B < b.B;

	return a.A < b.A;
}

int sortByB(Score& a, Score& b) {
	if (a.B == b.B) return a.A < b.A;

	return a.B < b.B;
}

vector<Score> scores;
bool isSelected[100000];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int32 T;
	cin >> T;

	for (int32 testCase = 1; testCase <= T; testCase++) {
		memset(isSelected, false, sizeof(isSelected));
		scores.clear();

		int32 N;
		cin >> N;

		for (int32 n = 0; n < N; n++) {
			Score s;
			s.id = n;
			cin >> s.A >> s.B;
			scores.push_back(s);
		}

		sort(scores.begin(), scores.end(), sortByA);

		isSelected[scores[0].id] = true;
		int32 minB = scores[0].B;

		for (int32 i = 1; i < N; i++) {
			if (scores[i].B > minB) continue;

			isSelected[scores[i].id] = true;
			minB = MIN(minB, scores[i].B);
		}

		sort(scores.begin(), scores.end(), sortByB);

		isSelected[scores[0].id] = true;
		int32 minA = scores[0].A;

		for (int32 i = 1; i < N; i++) {
			if (scores[i].A > minA) continue;

			isSelected[scores[i].id] = true;
			minA = MIN(minA, scores[i].A);
		}

		int32 ret = 0;

		for (int32 i = 0; i < N; i++) {
			if (isSelected[i]) ret++;
		}

		cout << ret << "\n";
	}

	return 0;
}