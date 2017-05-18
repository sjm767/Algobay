//#include<iostream>
//#include<vector>
//using namespace std;
//
//int findMaxConsecutiveOnes(vector<int> &nums);
//int main()
//{
//	vector<int> nums{ 1,0,1,1,0,1 };
//
//	findMaxConsecutiveOnes(nums);
//	return 0;
//}
//
//int findMaxConsecutiveOnes(vector<int> &nums)
//{
//	int maxValue = 0;
//	int count=0;
//
//	for (int n : nums)
//	{
//		if (n == 1) {
//			count++;
//		}
//		else {
//			maxValue = maxValue < count ? count : maxValue;
//			count = 0;
//		}		
//	}
//
//	maxValue = maxValue < count ? count : maxValue;
//	return maxValue;
//}