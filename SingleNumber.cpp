//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int singleNumber(vector<int>&nums);
//int main()
//{
//	vector<int> nums{ -1 };
//
//	int result = singleNumber(nums);
//
//	return 0;
//}
//
//int singleNumber(vector<int>&nums)
//{
//	for (int i = 1; i < nums.size(); i++)
//	{
//		nums[0] ^= nums[i];
//	}
//	return nums[0];
//}