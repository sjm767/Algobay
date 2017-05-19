//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//
//using namespace std;
//vector<int> findDisappearedNumbers(vector<int> &nums);
//int main()
//{
//	vector<int> nums{4,3,2,7,8,2,3,1 };
//
//	vector<int> result = findDisappearedNumbers(nums);
//	return 0;
//}
//
//vector<int> findDisappearedNumbers(vector<int> &nums)
//{
//	int n = nums.size();
//	vector<int> result;
//
//	std::sort(nums.begin(), nums.end());
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (!std::binary_search(nums.begin(), nums.end(), i))
//		{
//			result.push_back(i);
//		}
//	}	
//
//	return result;
//}