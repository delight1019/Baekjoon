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
//const int32 MAX_N = 1000;
//
//vector<string> robots[MAX_N];
//
//bool vectorSort(const vector<string>& A, const vector<string>& B) {
//	int32 a = 0;
//	int32 b = 0;
//
//	while (a < A.size() && b < B.size()) {
//		if (A[a] == B[b]) {
//			a++;
//			b++;
//
//			if (a == A.size()) return true;
//			if (b == B.size()) return false;
//		}
//		else {
//			return A[a] < B[b];
//		}
//	}
//
//	return true;
//}
//
//struct Node {
//	string id;
//	vector<Node> children;
//
//	Node(string i) {
//		id = i;
//	}
//};
//
//void printHelp(int32 N, string A) {
//	for (int32 i = 0; i < N; i++) {
//		cout << "--";
//	}
//	cout << A << "\n";
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int32 N;
//	cin >> N;
//
//	for (int32 n = 0; n < N; n++) {
//		int32 cur;
//		cin >> cur;
//
//		for (int32 i = 0; i < cur; i++) {
//			string temp;
//			cin >> temp;
//			robots[n].push_back(temp);
//		}
//	}
//
//	sort(robots, robots + N);
//
//	vector<string> printed;
//
//	for (int32 n = 0; n < N; n++) {
//		const vector<string>& curRobot = robots[n];
//
//		for (int32 m = 0; m < curRobot.size(); m++) {
//			if (printed.size() <= m) {
//				printed.push_back(curRobot[m]);
//				printHelp(m, curRobot[m]);
//			}
//			else if (printed[m] == curRobot[m]) {
//				continue;
//			}
//			else {
//				int32 temp = printed.size() - 1;
//
//				for (int32 i = temp; i >= m; i--) {
//					printed.pop_back();
//				}
//
//				printed.push_back(curRobot[m]);
//				printHelp(m, curRobot[m]);
//			}
//		}
//	}
//
//	return 0;
//}