//#pragma disable(4996)
//
//#include <iostream>
//#include <cstring>
//#include <cmath>
//#include <queue>
//#include <map>
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
//#define MAX(a, b) a < b ? b : a
//#define MIN(a, b) a < b ? a : b
//#define ABS(a) a < 0 ? -a : a
//
//typedef int32 INT;
//
//map<char, vector<char>> validMap{
//	make_pair('1', vector<char> {'4', '5'}),
//	make_pair('2', vector<char> {}),
//	make_pair('3', vector<char> {'4', '5'}),
//	make_pair('4', vector<char> {'2', '3'}),
//	make_pair('5', vector<char> {'8'}),
//	make_pair('6', vector<char> {'2', '3'}),
//	make_pair('7', vector<char> {'8'}),
//	make_pair('8', vector<char> {'6', '7'})
//};
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	INT testCase = 0;
//
//	while (++testCase) {
//		string input;
//		cin >> input;
//
//		if (input == "0"s) break;
//
//		bool isValid = true;
//		char pre = input[0];
//
//		if (pre != '1') {
//			cout << testCase << ". " << "NOT" << "\n";
//			continue;
//		}
//
//		for (INT i = 1; i < input.length(); i++) {
//			char cur = input[i];
//			vector<char>& valid = validMap[pre];
//
//			if (find(valid.begin(), valid.end(), cur) == valid.end()) {
//				isValid = false;
//			}
//
//			if (cur == '2' && i != (input.length() - 1)) {
//				isValid = false;
//			}
//
//			pre = cur;
//
//			if (!isValid) break;
//		}
//
//		if (pre != '2') {
//			isValid = false;
//		}
//
//		if (isValid) {
//			cout << testCase << ". " << "VALID" << "\n";
//		}
//		else {
//			cout << testCase << ". " << "NOT" << "\n";
//		}
//	}
//
//	return 0;
//}