//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<set>
//#include<string>
//#include<map>
//using namespace std;
////string canReach(int x1, int y1, int x2, int y2);
////vector<string> prefixToPostFix(vector<string> prefix);
//vector<int> getDiff(vector<string> a, vector<string> b);
//int main()
//{
//	//int x1, y1, x2, y2;
//	//x1 = 0;
//	//y1 = 0;
//	//x2 = 0;
//	//y2 = 0;
//
//	//string result = canReach(x1, y1, x2, y2);
//	//cout << result << endl;
//	vector<string> a{ "hhpddlnnsjfoyxpci" };
//	vector<string> b{ "ioigvjqzfbpllssuj" };
//
//	vector<int> result = getDiff(a, b);
//	return 0;
//}
//vector<int> getDiff(vector<string> a, vector<string> b)
//{
//	vector<int> result;	
//	int diffCount = 0;
//
//	for (int i = 0; i < a.size(); i++)
//	{
//		std::sort(b[i].begin(), b[i].end());
//
//		if (a[i] == b[i])
//		{
//			result.push_back(-1);
//			continue;
//		}
//		std::string::size_type n;
//
//		for (char s : a[i])
//		{
//			n = b[i].find(s);
//			if (n > b[i].length())
//			{
//				diffCount++;
//			}
//			else
//			{
//				b[i].erase(b[i].begin() + n, b[i].begin() + n + 1);
//			}
//		}
//		result.push_back(diffCount);
//		diffCount = 0;
//	}
//	return result;
//}
////
////vector<string> prefixToPostFix(vector<string> prefix)
////{
////	vector<string> result;
////
////
////	return result;
////}
////
////string canReach(int x1, int y1, int x2, int y2)
////{
////	string result = "No";
////	bool xTurn = true;
////
////	vector<pair<int, int>> mypair;
////	mypair.push_back(pair<int, int>(x1, y1));
////	mypair.push_back(pair<int, int>(x2, y2));
////	
////
////	for (int i = 0; i < 2; i++)
////	{		
////		while ((x1 <= x2) && (y1 <= y2))
////		{
////			if (x1 == mypair[1].first && y1 == mypair[1].second)
////			{
////				return "Yes";
////			}
////
////			if (xTurn)
////			{
////				x1 += y1;
////			}
////			else
////			{
////				y1 += x1;
////			}
////			xTurn = xTurn == true ? false : true;
////		}
////		xTurn = false;
////		x1 = mypair[0].first;
////		y1 = mypair[0].second;
////	}
////	return result;
////}