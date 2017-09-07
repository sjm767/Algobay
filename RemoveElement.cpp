//#include<iostream>
//#include<vector>
//using namespace std;
//
//int removeElement(vector<int> &nums, int val);
//int main()
//{
//	vector<int> nums;
//
//	nums.push_back(2);
//	nums.push_back(3);
//	nums.push_back(3);
//	nums.push_back(2);	
//
//	cout << removeElement(nums, 3);
//
//	return 0;
//}
//
//int removeElement(vector<int> &nums, int val)
//{	
//	int index = 0;
//
//	while(index<nums.size())
//	{
//		if (nums[index] == val)
//		{
//			nums.erase(nums.begin() + index, nums.begin() + index + 1);			
//		}
//		else {
//			index++;
//		}
//	}
//
//	return nums.size();
//}