//#pragma disable(4996)
//
//#include <iostream>
//#include <cstring>
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
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	string input;
//	cin >> input;
//
//	int32 joi = 0;
//	int32 ioi = 0;
//
//	for (int32 i = 0; i + 2 < input.length(); i++) {
//		if (input[i] == 'J' && input[i + 1] == 'O' && input[i + 2] == 'I') {
//			joi++;
//		}
//
//		if (input[i] == 'I' && input[i + 1] == 'O' && input[i + 2] == 'I') {
//			ioi++;
//		}
//	}
//
//	cout << joi << "\n";
//	cout << ioi << "\n";
//
//	return 0;
////}