#pragma disable(4996)

#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>

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

const char vowels[6] = { 'a', 'e', 'i', 'o', 'u', 'h' };
const string aphoWords[10] = { "c", "j", "n", "m", "t", "s", "l", "l", "d", "qu" };
vector<string > words;

bool IsVowel(char x) {
	for (int i = 0; i < 6; i++) {
		if (vowels[i] == x)  return true;
	}

	return false;
}

bool IsAphoWord(string x) {
	for (int i = 0; i < 10; i++) {
		if (aphoWords[i] == x) return true;
	}

	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input;
	getline(cin, input);

	string curWord = "";

	for (int32 i = 0; i < input.length(); i++) {
		if (input[i] == ' ' || input[i] == '-') {
			words.push_back(curWord);
			curWord = "";
		}
		else if (input[i] == '\'') {
			if (IsVowel(input[i + 1]) && IsAphoWord(curWord)) {
				words.push_back(curWord);
				curWord = "";
			}
		}
		else {
			curWord += input[i];
		}
	}

	if (curWord != "") {
		words.push_back(curWord);
	}

	cout << words.size();

	return 0;
}