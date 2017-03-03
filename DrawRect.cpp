#include<iostream>
#include<vector>
using namespace std;
//
//int main() {
//	int t;
//	int x, y;
//
//	vector<int> resultX, resultY;
//
//	vector<int> xPoints;
//	vector<int> yPoints;
//
//	cin >> t;
//	for (int i = 0; i < t; i++) {
//
//		for (int j = 0; j < 3; j++) {
//			cin >> x >> y;
//
//			xPoints.push_back(x);
//			yPoints.push_back(y);
//		}
//
//
//		if (xPoints[0] == xPoints[1]) {
//			resultX.push_back(xPoints[2]);
//		}
//		else {
//			resultX.push_back((xPoints[0] == xPoints[2] ? xPoints[1] : xPoints[0]));
//		}
//
//		if (yPoints[0] == yPoints[1]) {
//			resultY.push_back(yPoints[2]);
//		}
//		else {
//			resultY.push_back((yPoints[0] == yPoints[2] ? yPoints[1] : yPoints[0]));
//		}
//
//		xPoints.clear();
//		yPoints.clear();
//
//	}
//
//	for (int i = 0; i < t; i++) {
//		cout << resultX[i] << " " << resultY[i] << endl;
//	}
//
//	return 0;
//}
