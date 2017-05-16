//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<unordered_set>
//
//using namespace std;
//
//int distributeCandies(vector<int> &candies);
//int main()
//{
//	vector<int> candies;
//
//	candies.push_back(1000);
//	candies.push_back(1000);
//	candies.push_back(2);
//	candies.push_back(1);
//	candies.push_back(2);
//	candies.push_back(5);
//	candies.push_back(3);
//	candies.push_back(1);
//
//	int result = distributeCandies(candies);
//	cout << result << endl;
//
//	return 0;
//}
//
//int distributeCandies(vector<int> &candies)
//{
//	unordered_set<int> kinds;
//	for (int kind : candies) {
//		kinds.insert(kind);
//	}
//	return min(kinds.size(), candies.size() / 2);
//}
//
//
