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
//const int32 MAX_N = 100;
//
//int32 switches[MAX_N + 1];
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int32 N;
//	cin >> N;
//
//	for (int32 n = 1; n <= N; n++) {
//		cin >> switches[n];
//	}
//
//	int32 students;
//	cin >> students;
//
//	for (int32 s = 0; s < students; s++) {
//		int32 gender, num;
//		cin >> gender >> num;
//
//		if (gender == 1) {
//			int32 temp = num;
//
//			while (temp <= N) {
//				switches[temp] = 1 - switches[temp];
//				temp += num;
//			}
//		}
//		else {
//			int32 temp = 1;
//
//			while (true) {
//				if (num + temp > N || num - temp <= 0) break;
//				if (switches[num + temp] != switches[num - temp]) break;
//
//				temp++;
//			}
//
//			for (int32 i = num - temp + 1; i < num + temp; i++) {
//				switches[i] = 1 - switches[i];
//			}
//		}
//	}
//
//	for (int32 n = 1; n <= N; n++) {
//		cout << switches[n] << " ";
//
//		if (n % 20 == 0) {
//			cout << "\n";
//		}
//	}
//
//	return 0;
//}