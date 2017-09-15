//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//vector<int> getPi(string p);
//int main()
//{
//	string s1 = "abcdabcdabee";
//
//	vector<int> pi = getPi(s1);
//	
//
//	
//	return 0;
//}
//
//vector<int> getPi(string p)
//{
//	int m = (int)p.size(), j = 0;
//
//	vector<int> pi(m, 0);
//
//	for (int i = 1; i < m; i++)
//	{
//		while (j > 0 && p[i] != p[j]) {
//			j = pi[j - 1];
//		}
//
//		if (p[i] == p[j])
//		{
//			pi[i] = ++j;
//		}
//	}
//
//	return pi;
//}