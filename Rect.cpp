#include<iostream>
using namespace std;

class Rect {
private:
	int x;
	int y;

public:
	Rect::Rect(int _x, int _y);
	void show();

};

Rect::Rect(int _x, int _y) {
	x = _x;
	y = _y;
}

void Rect::show() {
	cout << x << y;
}