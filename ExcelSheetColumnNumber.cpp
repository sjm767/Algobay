//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<map>
//
//using namespace std;
//
//int titleToNumber(string s);
//int main()
//{
//	string str = "CBDC";
//
//	int result = titleToNumber(str);
//
//	return 0;
//}
//int titleToNumber(string s)
//{
//	map<char, int> alphaNum;
//
//	alphaNum.insert(pair<char, int>('A', 1));
//	alphaNum.insert(pair<char, int>('B', 2));
//	alphaNum.insert(pair<char, int>('C', 3));
//	alphaNum.insert(pair<char, int>('D', 4));
//	alphaNum.insert(pair<char, int>('E', 5));
//	alphaNum.insert(pair<char, int>('F', 6));
//	alphaNum.insert(pair<char, int>('G', 7));
//	alphaNum.insert(pair<char, int>('H', 8));
//	alphaNum.insert(pair<char, int>('I', 9));
//	alphaNum.insert(pair<char, int>('J', 10));
//	alphaNum.insert(pair<char, int>('K', 11));
//	alphaNum.insert(pair<char, int>('L', 12));
//	alphaNum.insert(pair<char, int>('M', 13));
//	alphaNum.insert(pair<char, int>('N', 14));
//	alphaNum.insert(pair<char, int>('O', 15));
//	alphaNum.insert(pair<char, int>('P', 16));
//	alphaNum.insert(pair<char, int>('Q', 17));
//	alphaNum.insert(pair<char, int>('R', 18));
//	alphaNum.insert(pair<char, int>('S', 19));
//	alphaNum.insert(pair<char, int>('T', 20));
//	alphaNum.insert(pair<char, int>('U', 21));
//	alphaNum.insert(pair<char, int>('V', 22));
//	alphaNum.insert(pair<char, int>('W', 23));
//	alphaNum.insert(pair<char, int>('X', 24));
//	alphaNum.insert(pair<char, int>('Y', 25));
//	alphaNum.insert(pair<char, int>('Z', 26));
//
//	transform(s.begin(), s.end(), s.begin(), ::toupper);
//
//	int length = s.length();
//	int sum = 1;
//
//	for (int i = 0; i < s.length(); i++)
//	{
//		if (i == length - 2)
//		{
//			sum *= 26;
//			sum += (26 * alphaNum.find(s[i])->second);
//		}
//		else if (i == length - 1)
//		{
//			sum += alphaNum.find(s[i])->second;
//		}
//		else
//		{
//			sum *= (26 * alphaNum.find(s[i])->second);
//		}
//
//	}
//
//	return sum;
//}