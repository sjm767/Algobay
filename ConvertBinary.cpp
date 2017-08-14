//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<stack>
//
//using namespace std;
//int ConvertBinaryToInt(int n);
//string ConvertBinaryToString(int n);
//int main()
//{
//	int n = 11;
//
//	//cout << ConvertBinaryToInt(n) << endl;
//	cout << ConvertBinaryToString(n) << endl;
//
//	return 0;
//}
//
//int ConvertBinaryToInt(int n)
//{
//	int chasoo = 1;
//	int result = 0;
//	int remain;
//
//	while (n >= 1)
//	{
//		remain = n % 2;
//
//		if (remain == 1)
//		{
//			result += (chasoo*remain);
//		}
//
//		n /= 2;
//		chasoo *= 10;
//	}
//
//	return result;
//}
//string ConvertBinaryToString(int n)
//{
//	stack<char> result;
//	string str;
//
//	while (n >= 1)
//	{
//		result.push((char)n % 2);
//		n /= 2;
//	}
//
//	while (!result.empty())
//	{
//		str.push_back(result.top());
//		result.pop();
//	}	
//
//	return str;
//}