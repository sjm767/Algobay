//#include<iostream>
//#include<string>
//
//using namespace std;
//
//bool detectCapitalUse(string word);
//int main()
//{
//	string word = "mL";
//
//	char a = 'a';
//
//	cout << islower(a) << endl;
//
//	bool result = detectCapitalUse(word);
//
//	return 0;
//}
//
//bool detectCapitalUse(string word)
//{
//	if (word.length() == 1) {
//		return true;
//	}
//
//	int type;
//	type = isupper(word[0]) ? 1 : 3;
//
//	if (!isupper(word[1]))
//	{
//		type = 2;
//	}
//
//	for (int i = 1; i < word.length(); i++)
//	{
//		if (type == 1)
//		{
//			if (!isupper(word[i]))
//			{
//				return false;
//			}
//		}
//		if (type == 2 || type==3)
//		{
//			if (isupper(word[i]))
//			{
//				return false;
//			}
//		}
//	}
//
//
//	return true;
//}