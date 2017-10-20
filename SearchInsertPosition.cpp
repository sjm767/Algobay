//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int searchInsert(vector<int> &nums, int target);
//int main()
//{
//	vector<int> nums;
//
//	nums.push_back(1);
//	nums.push_back(3);
//	nums.push_back(5);
//	nums.push_back(6);
//
//	cout << searchInsert(nums, 2) << endl;
//	return 0;
//}
//int searchInsert(vector<int> &nums, int target)
//{
//	vector<int>::iterator iter;
//	
//	if (!std::binary_search(nums.begin(), nums.end(), target))
//	{
//		nums.push_back(target);
//		std::sort(nums.begin(), nums.end());
//	}	
//	iter = std::find(nums.begin(), nums.end(), target);
//	auto pos = std::distance(nums.begin(), iter);
//
//	return pos;
//}