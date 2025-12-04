//#pragma disable(4996)
//
//#include <iostream>
//#include <cstring>
//#include <cmath>
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
//bool isWendy[15];
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	string input;
//	cin >> input;
//
//
//	for (INT i = 0; i < input.length(); i++) {
//		char curChar = input[i];
//		isWendy[i] = ((i + 1) % 3 == 0);
//	}
//
//	// r == 0
//	for (INT i = 0; i < input.length(); i++) {
//		if (i == 0) {
//			cout << "..";
//		}
//		else {
//			cout << '.';
//		}
//
//		if (isWendy[i]) {
//			cout << '*';
//		}
//		else {
//			cout << '#';
//		}
//		cout << "..";
//	}
//
//	cout << "\n";
//
//	// r == 1
//	for (INT i = 0; i < input.length(); i++) {
//		if (i == 0) {
//			cout << '.';
//		}
//
//		if (isWendy[i]) {
//			cout << "*.*";
//		}
//		else {
//			cout << "#.#";
//		}
//		cout << '.';
//	}
//
//	cout << "\n";
//
//	// r == 2
//	for (INT i = 0; i < input.length(); i++) {
//		if (i == 0) {
//			if (isWendy[i]) {
//				cout << '*';
//			}
//			else {
//				cout << '#';
//			}
//		}
//
//		cout << '.';
//		cout << input[i];
//		cout << '.';
//
//		if (i == input.length() - 1 || !isWendy[i + 1]) {
//			if (isWendy[i]) {
//				cout << '*';
//			}
//			else {
//				cout << '#';
//			}
//		}
//		else {
//			cout << '*';
//		}
//	}
//
//	cout << "\n";
//
//	// r == 3
//	for (INT i = 0; i < input.length(); i++) {
//		if (i == 0) {
//			cout << '.';
//		}
//
//		if (isWendy[i]) {
//			cout << "*.*";
//		}
//		else {
//			cout << "#.#";
//		}
//		cout << '.';
//	}
//
//	cout << "\n";
//
//	// r == 4
//	for (INT i = 0; i < input.length(); i++) {
//		if (i == 0) {
//			cout << "..";
//		}
//		else {
//			cout << '.';
//		}
//
//		if (isWendy[i]) {
//			cout << '*';
//		}
//		else {
//			cout << '#';
//		}
//		cout << "..";
//	}
//
//	return 0;
//}