//#pragma disable(4996)
//
//#include <iostream>
//#include <climits>
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
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	INT N, A, B;
//	string S;
//
//	cin >> N >> A >> B >> S;
//
//	INT passed = 0;
//	INT overseas = 0;
//
//	for (INT n = 0; n < N; n++) {
//		char cur = S[n];
//
//		if (cur == 'a') { // Japanese
//			if (passed < A + B) {
//				cout << "Yes\n";
//				passed++;
//			}
//			else {
//				cout << "No\n";
//			}
//		}
//		else if (cur == 'b') { // Overseas
//			overseas++;
//
//			if (passed < A + B && overseas <= B) {
//				cout << "Yes\n";
//				passed++;
//			}
//			else {
//				cout << "No\n";
//			}
//		}
//		else {
//			cout << "No\n";
//		}
//	}
//
//	return 0;
//}