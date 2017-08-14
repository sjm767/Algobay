//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<set>
//using namespace std;
//
//
//bool canConstruct(string ransomNote, string magazine);
//int main()
//{
//	string ransomNote = "apple";
//	string magazine = "asdpsldfpe";
//
//	cout << canConstruct(ransomNote, magazine) << endl;
//	return 0;
//}
//bool canConstruct(string ransomNote, string magazine)
//{
//	std::string::size_type n;	
//	
//	for (char s : ransomNote)
//	{		
//		n = magazine.find(s);
//		if (n > magazine.length())
//		{
//			return false;
//		}
//		magazine.erase(magazine.begin() + n, magazine.begin() + n + 1); 
//	}
//	return true;
//
///*
//	unordered_map<char, int> m;
//	for (auto c : magazine) m[c]++;
//	for (auto c : ransomNote) {
//		m[c]--;
//		if (m[c]<0) return 0;
//	}
//	return 1;*/
//}