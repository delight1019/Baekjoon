#pragma disable(4996)

#include <iostream>
#include <cstring>

using namespace std;

typedef signed int int32;
typedef unsigned int uint32;
typedef long long int64;
typedef unsigned long long uint64;
typedef unsigned char ubyte;

const int32 MAX_G = 100000;
const int32 MAX_P = 100000;

int32 G, P;
int32 PArr[MAX_P];
bool visited[MAX_G + 1] = { false, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> G >> P;

	for (int i = 0; i < P; i++) {
		cin >> PArr[i];
	}

	int32 ret = -1;
	int32 globalMaxGate = G;

	for (int i = 0; i < P; i++) {
		int32 maxGate = PArr[i];
		maxGate = maxGate > globalMaxGate ? globalMaxGate : maxGate;

		bool docked = false;

		for (int j = maxGate; j > 0; j--) {
			if (visited[j] == false) {
				visited[j] = true;
				docked = true;
				break;
			}
		}

		if (docked == false) {
			ret = i;
			break;
		}

		for (int j = globalMaxGate; j > 0; j--) {
			if (visited[j] == false) break;

			globalMaxGate--;
		}
	}

	if (ret == -1) {
		cout << P;
	}
	else {
		cout << ret;
	}

	

	return 0;
}