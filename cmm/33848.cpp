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
//struct Query {
//	int32 oper;
//	int32 value;
//
//	Query(int32 o, int32 v) {
//		this->oper = o;
//		this->value = v;
//	}
//};
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	stack<int32> calcStack;
//	stack<Query> queryStack;
//
//	int32 Q;
//	cin >> Q;
//
//	for (int32 q = 0; q < Q; q++) {
//		int32 oper, value;
//		cin >> oper;
//
//		if (oper == 1) {
//			cin >> value;
//			calcStack.push(value);
//			queryStack.push(Query(2, value));
//		}
//		else if (oper == 2) {
//			int32 value = calcStack.top();
//			calcStack.pop();
//			queryStack.push(Query(1, value));
//		}
//		else if (oper == 3) {
//			cin >> value;
//
//			for (int32 i = 0; i < value; i++) {
//				Query query = queryStack.top();
//				queryStack.pop();
//
//				if (query.oper == 1) {
//					calcStack.push(query.value);
//				}
//				else if (query.oper == 2) {
//					calcStack.pop();
//				}
//			}
//		}
//		else if (oper == 4) {
//			cout << calcStack.size() << "\n";
//		}
//		else if (oper == 5) {
//			if (calcStack.empty()) {
//				cout << -1 << "\n";
//			}
//			else {
//				cout << calcStack.top() << "\n";
//			}
//		}
//	}
//
//	return 0;
//}