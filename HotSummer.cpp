#include<iostream>
#include<vector>
#include<string>
using namespace std;

//
//int main() {	
//	int n;
//
//	int targetPoint;
//	int point;
//	int sum = 0;
//	vector<int> points;
//	vector<string> resultText;
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		cin >> targetPoint;
//
//		for (int j = 0; j < 9; j++) {
//			cin >> point;
//			sum += point;
//		}
//		
//		if (sum <= targetPoint) {
//			resultText.push_back("YES");
//		}
//		else {
//			resultText.push_back("NO");
//		}
//
//		sum = 0;
//	}
//
//
//	for (int i = 0; i < resultText.size(); i++) {
//		cout << resultText[i] << endl;
//	}
//	return 0;
//}