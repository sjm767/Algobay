//#include<iostream>
//#include<cmath>
//#include<climits>
//
//using namespace std;
//
//
//int Solve(int x);
//int GetIntegerLength(int num);
//int main()
//{
//	cout << Solve(1563847412) << endl;
//	return 0;
//}
//int Solve(int x)
//{
//	int length = GetIntegerLength(x);
//	int numPow = pow(10, length - 1);
//	int result = 0;
//
//	while (x != 0)
//	{
//		int mod = x % 10;
//
//		if (mod > INT_MAX / numPow)
//		{
//			return 0;
//		}
//		if (mod < INT_MIN / numPow)
//		{
//			return 0;
//		}
//
//		if (result > 0)
//		{
//			if (result > (result + mod*numPow))
//			{
//				return 0;
//			}
//		}
//
//		else if (result < 0)
//		{
//			if (result < (result + mod*numPow))
//			{
//				return 0;
//			}
//		}
//
//
//		result += mod*numPow;
//
//
//		numPow /= 10;
//		x /= 10;
//	}
//
//	return result;
//}
//int GetIntegerLength(int num)
//{
//	int length = 1;
//
//	while (num / 10 != 0)
//	{
//		num /= 10;
//		length++;
//	}
//
//	return length;
//}