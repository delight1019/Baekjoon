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
//const int32 MAX_N = 100000;
//
//int32 N, M, R;
//vector<vector<int32>> graph;
//bool visited[MAX_N + 1];
//int64 depths[MAX_N + 1];
//int64 orders[MAX_N + 1];
//
//struct Node {
//	int32 index;
//	int32 d;
//
//	Node(int32 i, int32 d) {
//		this->index = i;
//		this->d = d;
//	}
//};
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> N >> M >> R;
//	graph.resize(N + 1);
//
//	for (int32 m = 0; m < M; m++) {
//		int32 u, v;
//		cin >> u >> v;
//
//		graph[u].push_back(v);
//		graph[v].push_back(u);
//	}
//
//	for (int32 n = 1; n <= N; n++) {
//		sort(graph[n].begin(), graph[n].end());
//	}
//
//	memset(visited, false, sizeof(visited));
//	memset(depths, 0, sizeof(depths));
//
//	queue<Node> q;
//	q.push(Node(R, 0));
//	visited[R] = true;
//	int32 order = 1;
//
//	while (!q.empty()) {
//		Node cur = q.front();
//		q.pop();
//
//		depths[cur.index] = cur.d;
//		orders[cur.index] = order++;
//
//		for (vector<int32>::iterator it = graph[cur.index].begin(); it != graph[cur.index].end(); it++) {
//			int32 next = *it;
//
//			if (visited[next]) continue;
//
//			q.push(Node(next, cur.d + 1));
//			visited[next] = true;
//		}
//	}
//
//	int64 ret = 0;
//
//	for (int32 n = 1; n <= N; n++) {
//		ret += orders[n] * depths[n];
//	}
//
//	cout << ret;
//
//	return 0;
//}