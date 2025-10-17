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
//const int32 MAX_VALUE = 1000;
//
//int32 ni, mj;
//char inputs[MAX_VALUE][MAX_VALUE];
//
//int32 GCD(int32 a, int32 b) {
//	if (a < b) {
//		int32 temp = a;
//		a = b;
//		b = temp;
//	}
//
//	while (b > 0) {
//		int32 r = a % b;
//		a = b;
//		b = r;
//	}
//
//	return a;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> ni >> mj;
//
//	for (int32 i = 0; i < ni; i++) {
//		for (int32 j = 0; j < mj; j++) {
//			char temp;
//			cin >> temp;
//			inputs[i][j] = temp;
//		}
//	}
//
//	vector<int32> tempN, tempM;
//	int32 preJ = 0;
//	int32 preI = 0;
//	int32 cur = 1;
//
//	for (int32 j = 1; j < mj; j++) {
//		bool isOk = true;
//
//		for (int32 i = 0; i < ni; i++) {
//			if (inputs[i][preJ] != inputs[i][j]) {
//				isOk = false;
//				break;
//			}
//		}
//
//		if (isOk) {
//			cur++;
//		}
//		else {
//			tempM.push_back(cur);
//			preJ = j;
//			cur = 1;
//		}
//	}
//
//	tempM.push_back(cur);
//	cur = 1;
//
//	for (int32 i = 1; i < ni; i++) {
//		bool isOk = true;
//
//		for (int32 j = 0; j < mj; j++) {
//			if (inputs[preI][j] != inputs[i][j]) {
//				isOk = false;
//				break;
//			}
//		}
//
//		if (isOk) {
//			cur++;
//		}
//		else {
//			tempN.push_back(cur);
//			preI = i;
//			cur = 1;
//		}
//	}
//
//	tempN.push_back(cur);
//
//	int32 I = tempN[0];
//	int32 J = tempM[0];
//
//	for (int32 i = 1; i < tempN.size(); i++) {
//		I = GCD(I, tempN[i]);
//	}
//
//	for (int32 j = 1; j < tempM.size(); j++) {
//		J = GCD(J, tempM[j]);
//	}
//
//	cout << ni / I << " " << mj / J << "\n";
//
//	for (int32 i = 0; i < ni; i += I) {
//		for (int32 j = 0; j < mj; j += J) {
//			cout << inputs[i][j];
//		}
//
//		cout << "\n";
//	}
//
//	return 0;
//}