#pragma disable(4996)

#include <iostream>
#include <cstring>

using namespace std;

typedef signed int int32;
typedef unsigned int uint32;
typedef long long int64;
typedef unsigned long long uint64;

int32 NArr[7];
int32 copied[7];
int32 printArr[7];

void mergeSort(int32 s, int32 e, int32* arr, int32* copied) {
	if (e - s == 1) return;

	int32 mid = s + (e - s) / 2;
	mergeSort(s, mid, arr, copied);
	mergeSort(mid, e, arr, copied);

	for (int i = s; i < e; i++) {
		copied[i] = arr[i];
	}

	int32 left = s;
	int32 right = mid;

	for (int i = s; i < e; i++) {
		if (left == mid) {
			arr[i] = copied[right++];
		}
		else if (right == e) {
			arr[i] = copied[left++];
		}
		else if (copied[left] < copied[right]) {
			arr[i] = copied[left++];
		}
		else {
			arr[i] = copied[right++];
		}
	}
}

class MyStack {
private:
	int32* values = new int32[10];
	int32 count = 0;
	int32 s = 0;
public:
public:
	void Push(int32 value) {
		values[s++] = value;
		count++;
	}

	int32 Pop() {
		int32 ret = values[--s];
		count--;
		return ret;
	}

	int32 Front() {
		return values[s];
	}

	int32 Count() {
		return count;
	}

	void Print() {
		for (int i = 0; i < s; i++) {
			cout << values[i] << " ";
		}

		cout << "\n";
	}
};

void solve(MyStack* myStack, int32 N, int32 M) {
	if (myStack->Count() == M) {
		myStack->Print();		
		return;
	}
	
	for (int i = 0; i < N; i++) {
		myStack->Push(NArr[i]);
		solve(myStack, N, M);
		myStack->Pop();
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int32 N, M;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> NArr[i];
	}

	mergeSort(0, N, NArr, copied);

	MyStack* myStack = new MyStack();

	solve(myStack, N, M);

	return 0;
}