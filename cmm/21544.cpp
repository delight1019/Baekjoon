//#pragma disable(4996)
//
//#include <iostream>
//#include <cstring>
//#include <vector>
//#include <queue>
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
//const int32 MAX_N = 100;
//
//int32 AArr[MAX_N + 1];
//
//struct Node {
//	int32 l;
//	int32 r;
//
//	Node(int32 l, int32 r) {
//		this->l = l;
//		this->r = r;
//	}
//};
//
//vector<Node> ret;
//
//void operation(int32 i, int32 j) {
//	while (i < j) {
//		int32 temp = AArr[i];
//		AArr[i] = AArr[j];
//		AArr[j] = temp;
//		i++;
//		j--;
//	}
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
//	for (int32 n = 1; n <= N; n++) {
//		cin >> AArr[n];
//	}
//
//	for (int32 i = 1; i <= N; i++) {
//		if (AArr[i] == i) continue;
//
//		for (int32 j = i + 1; j <= N; j++) {
//			if (AArr[j] == i) {
//				ret.push_back(Node(i, j));
//				operation(i, j);
//				break;
//			}
//		}
//	}
//
//	if (ret.size() > 100) {
//		cout << -1;
//		return 0;
//	}
//
//	cout << ret.size() << "\n";
//
//	for (vector<Node>::iterator it = ret.begin(); it != ret.end(); it++) {
//		cout << (*it).l << " " << (*it).r << "\n";
//	}
//
//	return 0;
//}