#pragma disable(4996)

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef signed short int16;
typedef unsigned short uint16;
typedef signed int int32;
typedef unsigned int uint32;
typedef long long int64;
typedef unsigned long long uint64;
typedef unsigned char ubyte;

struct Node {
	int32 index;
	int32 length;

	Node(int32 e, int32 l) {
		index = e;
		length = l;
	}

	bool operator < (const Node& other) const {
		return length < other.length;
	}

	bool operator > (const Node& other) const {
		return length > other.length;
	}
};

int32 N, D;
int32 cache[10001];
vector<Node>* graphs = new vector<Node>[10001];

void solve() {
	priority_queue<Node, vector<Node>, greater<Node>> pq;
	pq.push(Node(0, 0));

	while (!pq.empty()) {
		Node curNode = pq.top();
		int32 cur = curNode.index;
		pq.pop();

		for (vector<Node>::iterator it = graphs[cur].begin(); it != graphs[cur].end(); it++) {
			Node nextNode = *it;
			if (cache[nextNode.index] > curNode.length + nextNode.length) {
				cache[nextNode.index] = curNode.length + nextNode.length;
				nextNode.length += curNode.length;
				pq.push(nextNode);
			}
		}

		if (cache[cur + 1] >= curNode.length + 1) {
			cache[cur + 1] = curNode.length + 1;
			pq.push(Node(cur + 1, curNode.length + 1));
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> D;

	for (int n = 0; n < N; n++) {
		int32 s, e, l;
		cin >> s >> e >> l;
		graphs[s].push_back(Node(e, l));
	}

	for (int i = 0; i <= 10000; i++) {
		cache[i] = i;
	}

	solve();

	cout << cache[D];

	return 0;
}                                      