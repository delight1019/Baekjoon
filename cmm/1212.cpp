//#pragma disable(4996)
//
//#include <iostream>
//#include <cstring>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <stack>
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
//#define MAX(a, b) a < b ? b : a
//#define MIN(a, b) a < b ? a : b
//#define ABS(a) a < 0 ? -a : a
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	string input;
//	cin >> input;
//
//	if (input == "0") {
//		cout << 0;
//		return 0;
//	}
//
//	bool isWritten = false;
//
//	for (int32 i = 0; i < input.length(); i++) {
//		int32 cur = input[i] - '0';
//
//		int32 temp = cur / 4;
//
//		if (isWritten || temp == 1) {
//			cout << temp;
//			isWritten = true;
//		}
//
//		cur %= 4;
//		temp = cur / 2;
//
//		if (isWritten || temp == 1) {
//			cout << temp;
//			isWritten = true;
//		}
//
//		cur %= 2;
//		temp = cur;
//
//		if (isWritten || temp == 1) {
//			cout << temp;
//			isWritten = true;
//		}
//	}
//
//	return 0;
//}