//#include<iostream>
//#include<algorithm>
//#include<cmath>
//#include<vector>
//using namespace std;
//
//int KDifference(vector<int> a, int k);
//int main()
//{
//	vector<int> a;
//	a.push_back(2);
//	a.push_back(4);
//	a.push_back(6);
//	a.push_back(8);
//	a.push_back(10);
//	a.push_back(12);
//
//
//	cout << KDifference(a, 2) << endl;
//	return 0;
//}
//
//int KDifference(vector<int> a, int k)
//{
//	int result = 0;
//
//	std::sort(a.begin(), a.end());
//
//	for (int i = 0; i < a.size(); i++)
//	{		
//		if (std::binary_search(a.begin(), a.end(), (a[i] + k)))
//		{
//			result++;
//		}
//
//	}
//
//
//	return result;
//}