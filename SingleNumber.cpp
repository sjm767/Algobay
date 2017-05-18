#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int singleNumber(vector<int>&nums);
int main()
{
	vector<int> nums{ -1 };

	int result = singleNumber(nums);
	return 0;
}

int singleNumber(vector<int>&nums)
{
	vector<int> result;

	for (int n : nums)
	{
		if (n < 0)
		{
			result.push_back(-1);
		}
		else if (std::find(result.begin(), result.end(), n) == result.end())
		{
			result.push_back(n);
		}
		else
		{
			result.erase(std::remove(result.begin(), result.end(),n), result.end());
		}
	}

	return result.size();
}