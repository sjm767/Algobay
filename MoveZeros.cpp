//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//void moveZeros(vector<int> &nums);
//int main()
//{
//	vector<int> nums{ 3,0,0,1,12 };
//
//	moveZeros(nums);
//
//	return 0;
//}
//
//void moveZeros(vector<int> &nums)
//{
//	int index = 1;
//	for (int i = 0; i < nums.size()-1; i++)
//	{
//		if (nums[i] == 0)
//		{
//			while (index < nums.size())
//			{
//				if (nums[index]!=0)
//				{
//					int temp = nums[i];
//					nums[i] = nums[index];
//					nums[index] = temp;
//
//					break;
//				}
//				index++;
//			}
//		}
//
//		index = i+1;
//	}
//}