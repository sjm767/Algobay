//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//bool isPalindrome(int x);
//int main() {
//
//	cout << isPalindrome(1518151) << endl;
//	return 0;
//}
//
//bool isPalindrome(int x)
//{
//	if (x < 0)
//	{
//		return false;
//	}
//	if (x < 10) {
//		return true;
//	}
//
//	string str = std::to_string(x);
//
//	string a = str.substr(0, str.size() / 2);
//	string b = str.substr(str.size() / 2, str.size());
//
//	std::reverse (b.begin(), b.end());
//
//	if (b.size() != a.size())
//	{
//		b = b.substr(0, b.size()-1);
//	}
//
//	if (a != b) {
//		return false;
//	}
//
//	return true;
//}