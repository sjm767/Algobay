//#include<iostream>
//#include<vector>
//using namespace std;
//
//vector<int> twoSum(vector<int> &nums, int target);
//int main()
//{
//	vector<int> nums;
//
//	nums.push_back(2);
//	nums.push_back(7);
//	nums.push_back(11);
//	nums.push_back(15);
//	
//	vector<int> result = twoSum(nums, 22);
//	return 0;
//}
//
//vector<int> twoSum(vector<int> &nums, int target) {
//	int index1 = 0;
//	int index2 = 1;
//
//	vector<int> result;
//
//	for (index1 = 0; index1 < nums.size(); index1++)
//	{
//		for (index2 = index1 + 1; index2 < nums.size(); index2++)
//		{
//			if ((nums[index1] + nums[index2]) == target)
//			{
//				result.push_back(index1);
//				result.push_back(index2);
//				break;
//			}
//		}		
//
//		if (result.size() > 0)
//		{
//			break;
//		}
//	}
//	
//	return result;
//}