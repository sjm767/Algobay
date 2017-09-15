//#include<iostream>
//using namespace std;
//
//int maximum_XOR(int a, int b);
//int main()
//{
//	int a = 10;
//	int b = 15;
//
//
//	cout << maximum_XOR(a, b) << endl;
//
//	return 0;
//}
//
//int maximum_XOR(int a, int b)
//{
//	int result=0;
//
//	int targetNum = b;
//	b = a + 1;
//
//	while (a<=targetNum)
//	{
//		while (b<= targetNum)
//		{			
//			if ((a^b) > result)
//			{
//				result = (a^b);			
//			}
//
//			b++;
//		}
//
//		a++;
//		b = a+1;
//	}
//
//
//	return result;
//}