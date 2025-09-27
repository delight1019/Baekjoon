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
//#define MAX(a, b) a < b ? b : a;
//#define MIN(a, b) a < b ? a : b;
//
//stack<int32> nums;
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	string input;
//	cin >> input;
//
//	for (int32 i = 0; i < input.length(); i++) {
//		if (input[i] >= '0' && input[i] <= '9') {
//			nums.push(input[i] - '0');
//		}
//		else {
//			int32 a = nums.top();
//			nums.pop();
//			int32 b = nums.top();
//			nums.pop();
//
//			if (input[i] == '+') {
//				nums.push(b + a);
//			}
//			else if (input[i] == '-') {
//				nums.push(b - a);
//			}
//			else if (input[i] == '*') {
//				nums.push(b * a);
//			}
//			else if (input[i] == '/') {
//				nums.push(b / a);
//			}
//		}
//	}
//
//	cout << nums.top();
//
//	return 0;
//}