#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct RMQ {
	int n; //배열의 길이

	vector<int> rangeMin;
	vector<int> rangeMax;
	RMQ(const vector<int> &array) {
		n = array.size();
		rangeMin.resize(n * 4);
		rangeMax.resize(n * 4);

		initMin(array, 0, n - 1, 1);
		initMax(array, 0, n - 1, 1);
	}

	int initMin(const vector<int>& array, int left, int right, int node) {
		if (left == right) {
			return rangeMin[node] = array[left];
		}

		int mid = (left + right) / 2;
		int leftMin = initMin(array, left, mid, node * 2);
		int rightMin = initMin(array, mid + 1, right, node * 2 + 1);

		return rangeMin[node] = min(leftMin, rightMin);
	}

	int initMax(const vector<int> &array, int left, int right, int node) {
		if (left == right) {
			return rangeMax[node] = array[left]*-1;
		}

		int mid = (left + right) / 2;
		int leftMin = initMax(array, left, mid, node * 2);
		int rightMin = initMax(array, mid + 1, right, node * 2 + 1);

		return rangeMax[node] = min(leftMin, rightMin);
	}

	int queryMin(int left, int right, int node, int nodeLeft, int nodeRight) {

		if (right < nodeLeft || nodeRight < left) {
 			return INT_MAX; //의미없는 값을 리턴해서 비교시에 무시되도록 한다.
		}

		if (left <= nodeLeft && nodeRight <= right) {
			return rangeMin[node]; 
		}

		int mid = (nodeLeft + nodeRight) /2 ;
		return min(queryMin(left, right, node * 2, nodeLeft, mid), queryMin(left, right, node * 2 + 1, mid + 1, nodeRight));
	}
	int queryMax(int left, int right, int node, int nodeLeft, int nodeRight) {

		if (right < nodeLeft || nodeRight < left) {
			return INT_MAX; //의미없는 값을 리턴해서 비교시에 무시되도록 한다.
		}

		if (left <= nodeLeft && nodeRight <= right) {
			return rangeMax[node];
		}

		int mid = (nodeLeft + nodeRight) / 2;
		return min(queryMax(left, right, node * 2, nodeLeft, mid), queryMax(left, right, node * 2 + 1, mid + 1, nodeRight));
	}
	int queryMin(int left, int right) {
		return queryMin(left, right, 1, 0, n - 1);
	}
	int queryMax(int left, int right) {
		return queryMax(left, right, 1, 0, n - 1);
	}
};
//
//int main(string args[]) {
//	int n = 6;
//	vector<int> array;
//
//	array.push_back(1);
//	array.push_back(2);
//	array.push_back(1);
//	array.push_back(2);
//	array.push_back(3);
//	array.push_back(1);
//	array.push_back(2);
//	array.push_back(3);
//	array.push_back(4);
//
//	RMQ rmq = RMQ(array);	
//
//
//	//질의
//	cout << rmq.queryMin(1,4) << endl;
//	cout << (rmq.queryMax(1,4) * -1) << endl;
//
//
//
//	return 0;
//}