//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<vector>
//
//using namespace std;
//int maxMoves(string s, string t);
//int main()
//{
//	
//	string a = "abc";
//
//
//	int count = maxMoves("lgftdidolgftdidolgftdidolgftdidolgftdidolgftdidodegekyznzimzsfmjxjhppejyevyyjklgmvcvtusqzdcyruglgftdidodegekyznzimzsfmjxjhppejyevyyjklgmvcvtusqzdcyruglgftdidodegekyznzimzsfmjxjhppejyevyyjklgmvcvtusqzdcyruglgftdidodegekyznzimzsfmjxjhppejyevyyjklgmvcvtusqzdcyruglgftdidodegekyznzimzsfmjxjhppejyevyyjklgmvcvtusqzdcyruglgftdidodegekyznzimzsfmjxjhppejyevyyjklgmvcvtusqzdcyruglgftdido","lgftdidodegekyznzimzsfmjxjhppejyevyyjklgmvcvtusqzdcyruglgftdido");
//	cout << count << endl;
//
//	return 0;
//}
//
//int maxMoves(string s, string t)
//{
//	int max = 0;
//	int tLength = t.length();
//
//	string aa;	
//
//	if (s.length() > t.length())
//	{
//		aa = s.substr(1, s.length() - 2);
//	}
//	else
//	{
//		aa = s;
//	}	
//
//	while (true)
//	{
//		if (aa == "")
//		{
//			if (s != "")
//			{
//				aa += (s[0]);
//				aa += (s[s.length() - 1]);
//				s = "";
//			}			
//		}
//
//		std::size_t found =aa.find(t);
//
//		if (found != std::string::npos)
//		{
//			max++;			
//			aa.replace(found, found + tLength, "");
//		}
//
//		else
//		{
//			break;
//		}	
//
//	}
//	
//	
//
//	return max;
//}