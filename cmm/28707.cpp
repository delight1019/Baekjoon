//#pragma disable(4996)
//
//#include <iostream>
//#include <cstring>
//#include <queue>
//#include <map>
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
//const int32 MAX_VALUE = 1000000;
//
//struct MyOper {
//	int32 l;
//	int32 r;
//	int32 c;
//};
//
//int32 AArr[8];
//int32 retArr[11];
//MyOper Opers[10];
//map<int32, int32> cacheMap;
//
//struct Node {
//	int32 num;
//	int32 cost;
//
//	bool operator < (const Node& other) const {
//		return cost < other.cost;
//	}
//
//	bool operator > (const Node& other) const {
//		return cost > other.cost;
//	}
//};
//
//int32* numtoArr(int32 num) {
//	int32* ret = new int32[8];
//	int32 curIndex = 7;
//
//	while (num > 0) {
//		int32 temp = num % 10;
//
//		if (temp > 0) {
//			ret[curIndex--] = temp;
//			num /= 10;
//		}
//		else {
//			temp = num % 100;
//			ret[curIndex--] = temp;
//			num /= 100;
//		}
//	}
//
//	if (curIndex >= 0) {
//		for (int i = curIndex + 1; i < 8; i++) {
//			ret[i - (curIndex + 1)] = ret[i];
//		}
//	}
//
//	return ret;
//}
//
//int32 getNumber(int32* arr, int32 N) {
//	int32 ret = 0;
//
//	for (int i = 0; i < N; i++) {
//		if (arr[i] == 10) {
//			ret *= 100;
//			ret += arr[i];
//		}
//		else {
//			ret *= 10;
//			ret += arr[i];
//		}
//	}
//
//	return ret;
//}
//
//int32 getMin(int32 a, int32 b) {
//	return a < b ? a : b;
//}
//
//void doOper(int32* arr, MyOper oper) {
//	int32 temp = arr[oper.l - 1];
//	arr[oper.l - 1] = arr[oper.r - 1];
//	arr[oper.r - 1] = temp;
//}
//
//int32 doOper(int32 num, MyOper oper, int32 N) {
//	int32* arr = numtoArr(num);
//	doOper(arr, oper);
//	int32 ret = getNumber(arr, N);
//	delete[] arr;
//	return ret;
//}
//
//void solve(int32 startNum, int32 N, int32 M) {
//	priority_queue<Node, vector<Node>, greater<Node>> pq;
//	Node start;
//	start.num = startNum;
//	start.cost = 0;
//	pq.push(start);
//	cacheMap.insert(make_pair(start.num, 0));
//
//	while (!pq.empty()) {
//		Node cur = pq.top();
//		pq.pop();
//
//		if (cacheMap.find(cur.num) != cacheMap.end()) {
//			if (cacheMap[cur.num] < cur.cost) continue;
//		}
//
//		for (int i = 0; i < M; i++) {
//			MyOper oper = Opers[i];
//			int32 next = doOper(cur.num, oper, N);
//
//			if (cacheMap.find(next) == cacheMap.end()) {
//				cacheMap.insert(make_pair(next, cur.cost + oper.c));
//				Node nextNode;
//				nextNode.num = next;
//				nextNode.cost = cur.cost + oper.c;
//				pq.push(nextNode);
//			}
//			else if (cacheMap[next] > cur.cost + oper.c) {
//				cacheMap[next] = cur.cost + oper.c;
//				Node nextNode;
//				nextNode.num = next;
//				nextNode.cost = cur.cost + oper.c;
//				pq.push(nextNode);
//			}
//		}
//	}
//}
//
//int32 findSol(int32 N) {
//	memset(retArr, 0, sizeof(retArr));
//
//	for (int i = 0; i < N; i++) {
//		retArr[AArr[i]]++;
//	}
//
//	int32 ret = 0;
//
//	for (int i = 1; i < 10; i++) {
//		for (int j = 0; j < retArr[i]; j++) {
//			ret *= 10;
//			ret += i;
//		}
//	}
//
//	for (int j = 0; j < retArr[10]; j++) {
//		ret *= 100;
//		ret += 10;
//	}
//
//	return ret;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int32 N, M;
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		cin >> AArr[i];
//	}
//
//	cin >> M;
//
//	for (int i = 0; i < M; i++) {
//		cin >> Opers[i].l >> Opers[i].r >> Opers[i].c;
//	}
//
//	int32 startNum = getNumber(AArr, N);
//	solve(startNum, N, M);
//	int32 solValue = findSol(N);
//
//	if (cacheMap.find(solValue) == cacheMap.end()) {
//		cout << -1;
//	}
//	else {
//		cout << cacheMap[solValue];
//	}
//
//	return 0;
//}