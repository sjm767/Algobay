//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//
//int minimumMoves(vector<int> a, vector<int> b);
//int main()
//{
//	vector<int> a;
//	vector<int> b;
//
//	a.push_back(1234);
//	a.push_back(4321);
//
//	b.push_back(2345);
//	b.push_back(3214);
//
//	int result = minimumMoves(a, b);	
//
//	cout << result;
//	return 0;
//}
//int minimumMoves(vector<int> a, vector<int> b)
//{
//	int result = 0;	
//	int index=0;
//
//	int aNum;
//	int bNum;
//
//	for (int i = 0; i < a.size();i++)
//	{
//		aNum = a[i];
//		bNum = b[i];
//
//		int aMod = 0;
//		int bMod = 0;
//
//		while (true)
//		{
//			aMod = aNum % 10;
//			bMod = bNum % 10;
//
//			result += (std::abs((aMod - bMod)));
//
//			aNum /= 10;
//			bNum /= 10;
//
//			if (aNum == 0)
//			{
//				break;
//			}
//		}		
//	}
//
//
//
//	return result;
//}
//
