//#include<iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//
//vector<int> constructRectangle(int area);
//int main()
//{
//	int area = 2 ;	
//
//	vector<int> result = constructRectangle(area);
//		
//	return 0;
//}
//
//vector<int> constructRectangle(int area)
//{
//	vector<int> result;
//	int width = area;
//	int length = 1;	
//	double ipart;
//
//	if (modf(sqrt(area), &ipart) == 0.0)
//	{
//		width = (int)sqrt(area);
//		result.push_back(width);
//		result.push_back(width);
//
//		return result;
//	}
//
//	int num = (int)sqrt(area);
//	while (num <= (area/2))
//	{
//		if (area%num == 0)
//		{
//			if (abs(width - length) >= abs(num-area/num))
//			{
//				width = num > area / num ? num : area / num;
//				length = num < area / num ? num : area / num;
//			}
//		}
//		num++;
//	}
//	result.push_back(width);
//	result.push_back(length);
//	return result;
//}