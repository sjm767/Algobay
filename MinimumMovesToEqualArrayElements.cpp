//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int minMoves(vector<int> &nums);
//int main()
//{
//	vector<int> nums{ 1, 2, 3, 4, 5 };
//	int result = minMoves(nums);
//
//	return 0;
//}
//int minMoves(vector<int> &nums)
//{
//	int sum=0;
//	std::sort(nums.begin(), nums.end());
//
//	int firstNum = nums[0];
//
//	for (int i = nums.size() - 1; i > 0; i--)
//	{
//		sum += nums[i] - firstNum;
//	}
//
//	return sum;
//}