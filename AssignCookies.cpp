//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<map>
//
//using namespace std;
//
//int FindContentChildren(vector<int>&g, vector<int>&s);
//int main()
//{
//	vector<int> g{ 1,2,2};
//	vector<int> s{ 1,2,2 };
//
//	cout << FindContentChildren(g, s) << endl;
//	return 0;
//}
//
//int FindContentChildren(vector<int>&g, vector<int>&s)
//{
//	int count = 0;	
//	int index=0;	
//	
//	if (s.size() == 0 || g.size() == 0)
//	{
//		return count;
//	}	
//
//	std::sort(s.begin(), s.end());
//
//	while (index < g.size())
//	{
//		vector<int>::iterator iter = std::lower_bound(s.begin(), s.end(), g[index]);
//
//		if (iter != s.end())
//		{
//			s.erase(iter);
//			count++;
//		}		
//		index++;
//	}	
//	
//	return count;
//}