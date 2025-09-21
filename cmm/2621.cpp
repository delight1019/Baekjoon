//#pragma disable(4996)
//
//#include <iostream>
//#include <cstring>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//typedef signed short int16;
//typedef unsigned short uint16;
//typedef signed int int32;
//typedef unsigned int uint32;
//typedef long long int64;
//typedef unsigned long long uint64;
//typedef unsigned char ubyte;
//
//#define MAX(a, b) a < b ? b : a;
//#define MIN(a, b) a < b ? a : b;
//
//struct Card {
//	char Color;
//	int32 Number;
//
//	Card() {
//		Color = 'X';
//		Number = -1;
//	}
//
//	Card(char c, int32 n) {
//		Color = c;
//		Number = n;
//	}
//
//	Card(const Card& other) {
//		this->Color = other.Color;
//		this->Number = other.Number;
//	}
//};
//
//Card Cards[5];
//int32 Numbers[10] = { 0, };
//
//bool byColor(const Card& a, const Card& b) {
//	if (a.Color == b.Color) {
//		return a.Number < b.Number;
//	}
//
//	return a.Color < b.Color;
//}
//
//bool byNumber(const Card& a, const Card& b) {
//	if (a.Number == b.Number) {
//		return a.Color < b.Color;
//	}
//
//	return a.Number < b.Number;
//}
//
//int32 Rule1() {
//	sort(Cards, Cards + 5, byColor);
//	Card prev = Cards[0];
//
//	for (int i = 1; i < 5; i++) {
//		Card cur = Cards[i];
//
//		if (prev.Color != cur.Color) {
//			return 0;
//		}
//		if (cur.Number != prev.Number + 1) {
//			return 0;
//		}
//
//		prev = cur;
//	}
//
//	return 900 + prev.Number;
//}
//
//int32 Rule2() {
//	for (int32 i = 1; i <= 9; i++) {
//		if (Numbers[i] == 4) return 800 + i;
//	}
//
//	return 0;
//}
//
//int32 Rule3And6And7And8And9() {
//	int32 three = -1;
//	int32 two1 = -1;
//	int32 two2 = -1;
//
//	for (int32 i = 1; i <= 9; i++) {
//		if (Numbers[i] == 3) {
//			three = i;
//		}
//		if (Numbers[i] == 2) {
//			if (two1 == -1) {
//				two1 = i;
//			}
//			else if (two2 == -1) {
//				two2 = i;
//			}
//		}
//	}
//
//	// Rule 3
//	if (three != -1 && two1 != -1) {
//		return 700 + three * 10 + two1;
//	}
//
//	// Rule 6
//	if (three != -1) {
//		return 400 + three;
//	}
//
//	// Rule 7
//	if (two1 != -1 && two2 != -1) {
//		return 300 + two2 * 10 + two1;
//	}
//
//	// Rule 8
//	if (two1 != -1) {
//		return 200 + two1;
//	}
//
//	// Rule9
//	sort(Cards, Cards + 5, byNumber);
//	return 100 + Cards[4].Number;
//}
//
//int32 Rule4() {
//	sort(Cards, Cards + 5, byColor);
//
//	if (Cards[0].Color == Cards[4].Color) {
//		return 600 + Cards[4].Number;
//	}
//
//	return 0;
//}
//
//int32 Rule5() {
//	sort(Cards, Cards + 5, byNumber);
//
//	Card prev = Cards[0];
//
//	for (int32 i = 1; i < 5; i++) {
//		Card cur = Cards[i];
//
//		if (prev.Number != cur.Number - 1) {
//			return 0;
//		}
//
//		prev = cur;
//	}
//
//	return 500 + prev.Number;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	for (int32 i = 0; i < 5; i++) {
//		cin >> Cards[i].Color >> Cards[i].Number;
//		Numbers[Cards[i].Number]++;
//	}
//
//	int32 ret = 0;
//	ret = MAX(ret, Rule1());
//	ret = MAX(ret, Rule2());
//	ret = MAX(ret, Rule3And6And7And8And9());
//	ret = MAX(ret, Rule4());
//	ret = MAX(ret, Rule5());
//
//	cout << ret;
//
//	return 0;
//}