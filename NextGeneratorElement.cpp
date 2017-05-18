//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//
//vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums);
//int main()
//{
//	vector<int> nums1{ 4,1,2 };
//	vector<int> nums2{ 1,3,4,2 };	
//
//	vector<int> result = nextGreaterElement(nums1, nums2);
//	return 0;
//}
//
//vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums)
//{
//	vector<int> result;
//	int num;
//
//	for (int i = 0; i < findNums.size(); i++)
//	{
//		num = findNums[i];
//		vector<int>::iterator iter = std::find(nums.begin(), nums.end(), num);
//
//		//Ã£À½
//		if (iter != nums.end())
//		{
//			result.push_back(num+1);
//			nums.erase(std::remove(nums.begin(), nums.end(), (num+1)), nums.end());			
//		}
//		else
//		{
//			result.push_back(-1);
//		}
//	}
//
//
//	return result;
//}