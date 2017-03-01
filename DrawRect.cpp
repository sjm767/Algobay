#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Rect;
class RectPoint;

class RectPoint {	
public:
	int x;
	int y;
	RectPoint() {

	}
	RectPoint(int _x, int _y);

};

RectPoint::RectPoint(int _x, int _y) {
	x = _x;
	y = _y;
}

class Rect {
private:
	vector<RectPoint> points;

public:
	Rect();
	void Add(RectPoint point);	
	RectPoint GetPoint();
};


Rect::Rect() {
	
}

void Rect::Add(RectPoint point) {
	points.push_back(point);
}


RectPoint Rect::GetPoint() {
	int sum = 0;
	
	map<int, int> pointX;
	map<int, int> pointY;
	RectPoint result;	

	for (int i = 0; i < points.size(); i++) {
		if ((pointX.find(points[i].x) == pointX.end())) {
			pointX.insert(pair<int, int>(points[i].x, 1));
		}
		else {
			pointX[points[i].x]++;
		}

		if ((pointY.find(points[i].y) == pointY.end())) {
			pointY.insert(pair<int, int>(points[i].y, 1));
		}
		else {
			pointY[points[i].y]++;
		}
	}
	
	map<int, int>::iterator it;

	for (it = pointX.begin(); it != pointX.end(); it++) {
		if (it->second == 1) {
			result.x = it->first;
			break;
		}
	}
	for (it = pointY.begin(); it != pointY.end(); it++) {
		if (it->second == 1) {
			result.y = it->first;
			break;
		}
	}	

	return result;
}

//
//int main(int argc,char *argv[]) {
//	int n;
//	int x, y;
//
//	cin >> n;
//
//	vector<Rect> rect;
//	rect.resize(n);
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < 3; j++) {
//			cin >> x >> y;
//			RectPoint point(x, y);
//			rect[i].Add(point);
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		RectPoint result = rect[i].GetPoint();
//
//		cout << result.x << " " << result.y << endl;
//	}
//
//	return 0;
//}