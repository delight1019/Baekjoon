#pragma disable(4996)

#include <iostream>
#include <cstring>

using namespace std;

typedef signed short int16;
typedef unsigned short uint16;
typedef signed int int32;
typedef unsigned int uint32;
typedef long long int64;
typedef unsigned long long uint64;
typedef unsigned char ubyte;

const int32 MAX_N = 30000;

struct Node {
	int32 candy;		
	int16 friendSet;
	uint16 friendCount;
	uint16 maxFriend;
	uint16* friends;
};

struct FriendSet {
	int32 count;
	int32 candy;
};

Node children[MAX_N + 1];
FriendSet ret[MAX_N];
int32 cache[3001];

FriendSet findFriendSet(int32 cur, int32 setN) {
	FriendSet ret;

	if (children[cur].friendSet == setN) {
		ret.candy = 0;
		ret.count = 0;
		return ret;
	}

	children[cur].friendSet = setN;
	ret.candy = children[cur].candy;
	ret.count = 1;

	for (int i = 0; i < children[cur].friendCount; i++) {
		int32 next = children[cur].friends[i];
		FriendSet nextSet = findFriendSet(next, setN);
		ret.candy += nextSet.candy;
		ret.count += nextSet.count;
	}

	return ret;
}

int32 getMax(int32 a, int32 b) {
	return a > b ? a : b;
}

//int32 solve(int32 cur, int32 maxFriendSet, int32 maxCount) {
//	if (cur == maxFriendSet) return 0;
//
//	int32& retValue = cache[maxCount][cur];
//
//	if (retValue != -1) return retValue;
//
//	retValue = getMax(retValue, solve(cur + 1, maxFriendSet, maxCount));
//	
//	if (ret[cur].count < maxCount) {
//		retValue = getMax(retValue, solve(cur + 1, maxFriendSet, maxCount - ret[cur].count) + ret[cur].candy);
//	}
//
//	return retValue;
//}

void addFriend(uint32 a, uint32 b) {
	Node* cur = &children[a];

	if (cur->friendCount == cur->maxFriend) {
		uint16* temp = new uint16[cur->maxFriend];
		memcpy(temp, cur->friends, sizeof(cur->friends));
		delete[] cur->friends;
		cur->maxFriend *= 2;
		cur->friends = new uint16[cur->maxFriend];
		memcpy(cur->friends, temp, sizeof(temp));
		delete[] temp;
	}

	cur->friends[cur->friendCount++] = b;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int32 N, M, K;
	cin >> N >> M >> K;

	for (int i = 1; i <= N; i++) {
		cin >> children[i].candy;
		children[i].maxFriend = 1024;
		children[i].friends = new uint16[children[i].maxFriend];
		children[i].friendCount = 0;
		children[i].friendSet = -1;
	}

	for (int i = 0; i < M; i++) {
		int32 a, b;
		cin >> a >> b;
		addFriend(a, b);
		addFriend(b, a);
	}

	int32 friendSet = 0;

	for (int i = 1; i <= N; i++) {
		if (children[i].friendSet != -1) {
			continue;
		}

		ret[friendSet] = findFriendSet(i, friendSet);
		friendSet++;
	}

	memset(cache, 0, sizeof(cache));

	int i = friendSet - 1;

	for (int i = 0; i < friendSet; i++) {
		FriendSet cur = ret[i];

		for (int j = K; j >= 0; j--) {
			if (j - cur.count > 0) {
				cache[j] = getMax(cache[j], cache[j - cur.count] + cur.candy);
			}
		}
	}

	cout << cache[K];

	return 0;
}