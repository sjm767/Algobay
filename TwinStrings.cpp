//#include<iostream>
//#include<vector>
//#include<cmath>
//#include<algorithm>
//#include<string>
//using namespace std;
//vector<string> twins(vector<string>a, vector<string> b);
//int main()
//{
//	vector<string> test;
//	vector<string> test2;
//
//	test.push_back("gcsuem");
//	test.push_back("a");
//
//	test2.push_back("suecgm");
//	test2.push_back("a");
//
//	//std::sort(test.begin(), test.end());
//
//	vector<string> result = twins(test, test2);
//
//	return 0;
//}
//
//vector<string> twins(vector<string>a, vector<string> b)
//{
//	vector<string> result;
//	
//	string aEven; //Â¦¼ö
//	string bEven; //È¦¼ö
//	string aOdd;
//	string bOdd;	
//
//	for (int i = 0; i < a.size(); i++)
//	{
//		if (a[i].size() != b[i].size())
//		{
//			result.push_back("No");
//		}
//		
//		else
//		{
//			for (int j = 0; j < a[i].size(); j++)
//			{
//				if (j % 2 == 0)
//				{
//					aEven += a[i][j];
//					bEven += b[i][j];
//				}
//				else
//				{
//					aOdd += a[i][j];
//					bOdd += b[i][j];
//				}
//			}
//
//			std::sort(aEven.begin(), aEven.end());
//			std::sort(bEven.begin(), bEven.end());
//			std::sort(aOdd.begin(), aOdd.end());
//			std::sort(bOdd.begin(), bOdd.end());
//
//			if (aEven.compare(bEven) == 0 && aOdd.compare(bOdd) == 0)
//			{
//				result.push_back("Yes");
//			}
//			else
//			{
//				result.push_back("No");
//			}
//
//		}
//
//		aEven = "";
//		bEven = "";
//		aOdd = "";
//		bOdd = "";
//
//	}
//
//	return result;
//}