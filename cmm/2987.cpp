//#pragma disable(4996)
//
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//typedef signed int int32;
//typedef unsigned int uint32;
//typedef long long int64;
//typedef unsigned long long uint64;
//typedef long double double64;
//
//struct Point {
//	double64 x;
//	double64 y;
//};
//
//long double func(Point p1, Point p2, Point a) {
//	return (a.y - p1.y) * (p2.x - p1.x) - (p2.y - p1.y) * (a.x - p1.x);
//}
//
//bool isOnSameDirection(Point p1, Point p2, Point a, Point b) {
//	return func(p1, p2, a) * func(p1, p2, b) >= 0;
//}
//
//bool check(Point* triangle, Point apple) {
//	Point p1 = triangle[0];
//	Point p2 = triangle[1];
//	Point p3 = triangle[2];
//
//	if (!isOnSameDirection(p1, p2, p3, apple)) return false;
//	if (!isOnSameDirection(p2, p3, p1, apple)) return false;
//	if (!isOnSameDirection(p3, p1, p2, apple)) return false;
//
//	return true;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	Point triangle[3];
//
//	for (int i = 0; i < 3; i++) {
//		cin >> triangle[i].x >> triangle[i].y;
//	}
//
//	double64 area = 0.0;
//	int32 j = 2;
//
//	for (int32 i = 0; i < 3; i++) {
//		area += (triangle[i].x + triangle[j].x) * (triangle[i].y - triangle[j].y);
//		j = i;
//	}
//
//	area = abs(area) / 2.0;
//
//	int32 N;
//	cin >> N;
//
//	int32 ret = 0;
//
//	for (int32 i = 0; i < N; i++) {
//		Point apple;
//		cin >> apple.x >> apple.y;
//
//		if (check(triangle, apple)) {
//			ret++;
//		}
//	}
//
//	cout << fixed;
//	cout.precision(1);
//	cout << area << "\n";
//	cout.precision(0);
//	cout << ret;
//
//	return 0;
//}