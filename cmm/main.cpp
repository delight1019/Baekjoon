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

#define MAX(a, b) a < b ? b : a;
#define MIN(a, b) a < b ? a : b;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int32 testCase = 0;

	while (true) {
		int32 a, b;
		string oper;

		cin >> a >> oper >> b;

		bool ret = false;

		if (oper == "E") {
			break;
		}
		else if (oper == ">") {
			ret = (a > b);
		}
		else if (oper == ">=") {
			ret = (a >= b);
		}
		else if (oper == "<") {
			ret = (a < b);
		}
		else if (oper == "<=") {
			ret = (a <= b);
		}
		else if (oper == "==") {
			ret = (a == b);
		}
		else if (oper == "!=") {
			ret = (a != b);
		}

		cout << "Case " << ++testCase << ": ";
		if (ret) {
			cout << "true";
		}
		else {
			cout << "false";
		}
		cout << "\n";
	}

	return 0;
}                                      