#include<iostream>
#include<string>

using namespace std;
string GetBinary(int num);
int main()
{
	int x = 1;
	int y = 4;

	string xx = GetBinary(x);
	string yy = GetBinary(y);

	while (xx.length() < yy.length())
	{
		xx.insert(0, "0");
	}
	while (xx.length() > yy.length())
	{
		yy.insert(0, "0");
	}	

	int count = 0;
	for (int i = 0; i < xx.length(); i++)
	{
		if (xx[i] != yy[i]) 
		{
			count++;
		}
	}

	cout << count << endl;
	return 0;
}

string GetBinary(int num)
{
	string result;

	while (num > 0)
	{
		int mod = num % 2;
		result.insert(0, to_string(mod));

		num /= 2;
	}

	return result;	
}


//unsigned __int64 GetBinary(int num);
//int Solve(int x, int y);
//int main()
//{
//	int x = 1577962638;
//	int y = 1727613287;
//
//	unsigned __int64 result = GetBinary((x^y));
//	cout << (x^y) << endl;
//
//	cout << result << endl;
//	int count = 0;
//	while (result > 0)
//	{
//		if (result % 10 == 1) 
//		{
//			count++;
//		}
//		result /= 10;
//	}
//
//	cout << count << endl;
//
//	return 0;
//}
//
//unsigned __int64 GetBinary(int num)
//{
//	unsigned __int64 result=0;
//
//	unsigned __int64 chasoo = 1;
//	while (num > 0)
//	{
//		int binary = num % 2;
//		result += binary * chasoo;
//		num /= 2;
//
//		chasoo *= 10;
//	}
//
//	return result;
//}
//int Solve(int x, int y)
//{
//	return 0;
//}