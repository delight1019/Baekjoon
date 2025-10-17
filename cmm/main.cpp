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
#define ToNum(a) a - 'A'

int32 chars[26];
int32 nums[10];

const string NUMBERS[10] = { "ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};

void erase(int32 num) {
	string v = NUMBERS[num];

	for (int32 i = 0; i < v.length(); i++) {
		chars[ToNum(v[i])] -= nums[num];
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int32 T;
	cin >> T;

	for (int32 testCase = 1; testCase <= T; testCase++) {
		string input;
		cin >> input;

		memset(chars, 0, sizeof(chars));
		memset(nums, 0, sizeof(nums));

		for (int32 i = 0; i < input.length(); i++) {
			chars[input[i] - 'A']++;
		}

		nums[0] += chars[ToNum('Z')];
		erase(0);

		nums[6] += chars[ToNum('X')];
		erase(6);
		
		nums[2] += chars[ToNum('W')];
		erase(2);

		nums[8] += chars[ToNum('G')];
		erase(8);

		nums[3] += chars[ToNum('T')];
		erase(3);

		nums[7] += chars[ToNum('S')];
		erase(7);

		nums[5] += chars[ToNum('V')];
		erase(5);

		nums[4] += chars[ToNum('F')];
		erase(4);

		nums[1] += chars[ToNum('O')];
		erase(1);

		nums[9] += chars[ToNum('I')];
		erase(9);

		cout << "Case #" << testCase << ": ";

		for (int32 i = 0; i <= 9; i++) {
			for (int32 j = 0; j < nums[i]; j++) {
				cout << i;
			}
		}

		cout << "\n";
	}

	return 0;
}