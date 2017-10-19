#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int maxSubArray(vector<int> &nums);
int main() 
{
	vector<int> nums = { -2,1,-3,4,-1,2,1,-5,4 };
	//vector<int> nums = { 2,-1 };

	
	int result = maxSubArray(nums);

	cout << result << endl;

	return 0;
}
int maxSubArray(vector<int> &nums)
{
	if (nums.size() == 1)
	{
		return nums[0];
	}

	int sum = 0;
	int max = 0;


	for (int i = 0; i < nums.size(); i++)
	{
		sum += nums[i];		
		if (sum < 0)
		{
			sum = 0;
		}
		
		max = max < sum ? sum : max;
	}

	//시간초과
	/*int max=INT_MIN;
	int sum = 0;
	
	int index = 0;

	vector<int> results;
	while (index < nums.size())
	{
		for (int i = index; i < nums.size(); i++)
		{
			sum += nums[i];

			if (max < sum)
			{
				max = sum;
			}
		}

		results.push_back(max);

		max = INT_MIN;
		sum = 0;
		index++;
	}

	std::sort(results.begin(), results.end());
	return *(results.end()-1);*/

	return max;
}