//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//char FindTheDifference(string s, string t);
//int main()
//{
//	string a = "abcd";
//	string b = "abced";
//
//	cout << FindTheDifference(a, b) << endl;
//	return 0;
//}
//
//char FindTheDifference(string s, string t)
//{
//	int index = 0;
//
//	std::sort(s.begin(), s.end());
//	std::sort(t.begin(), t.end());
//	
//	while (index < s.length() || index < t.length())
//	{
//		if (s[index] == NULL)
//		{
//			return t[index];
//		}
//		else if (t[index] == NULL)
//		{
//			return s[index];
//		}
//		else if (s[index] != t[index])
//		{
//			return t[index];
//		}
//		index++;
//	}
//	return NULL;
//}
