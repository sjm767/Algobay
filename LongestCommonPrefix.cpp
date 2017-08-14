//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//string longestCommonPrefix(vector<string> &strs);
//int main()
//{
//	vector<string> strs;
//
//	strs.push_back("test");
//	strs.push_back("test123123");
//	strs.push_back("te");
//
//	cout << longestCommonPrefix(strs) << endl;
//	return 0;
//}
//
//string longestCommonPrefix(vector<string> &strs)
//{
//	if (strs.size() == 0)
//	{
//		return "";
//	}
//
//	string result=strs[0];	
//	string target;
//	int j = 0;
//
//	for (int i = 1; i < strs.size(); i++)
//	{
//		target = strs[i];
//		while (target.size() > 0)
//		{
//			if (result.find(target) == string::npos)
//			{
//				target = target.substr(0, target.size() - 1);
//			}
//			else
//			{
//				if (result.find(target) == 0)
//				{
//					result = target;
//					break;
//				}
//				else 
//				{
//					target = target.substr(0, target.size() - 1);
//				}				
//			}
//		}
//
//		if (target.size() == 0)
//		{
//			result = "";
//		}
//	}
//	return result;
//}